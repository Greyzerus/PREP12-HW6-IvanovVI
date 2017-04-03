//
// Created by greyzerus on 02.04.17.
//

#include "Def_int_calc.hpp"

/*constructors*/

Def_int_calc::Def_int_calc
        (double beginning, double ending, int intervals)
        : beginning(beginning),
          ending(ending),
          intervals(intervals)  {}

Trapezoidal_Def_int_calc::Trapezoidal_Def_int_calc
        (double beginning, double ending, int intervals)
        : Def_int_calc (beginning, ending, intervals) {}

Parabolic_Def_int_calc::Parabolic_Def_int_calc
        (double beginning, double ending, int intervals)
        : Def_int_calc(beginning, ending, intervals) {}


double Def_int_calc::calculate(double (*func)(const double)) {
    double difference = (getEnding() - getBeginning())/getIntervals();
    double sum = 0;
    double previous = getBeginning();
    double current = previous;
    for (int i = getIntervals(); i>0; --i)
    {
        current = previous + difference;
        sum += calculating_method (previous, current, func);
        previous = current;
    }
    return sum;
}

double Trapezoidal_Def_int_calc::calculating_method  (double left, double right, double (*func)(const double)) {
    return (func (left) + func (right)) * (right - left) / 2.0;
}

double Parabolic_Def_int_calc::calculating_method  (double left, double right, double (*func)(const double)) {
    /* источник: https://ru.wikipedia.org/wiki/Формула_Симпсона */
    double middle = (right + left) / 2.0;
    return (right - left)/6.0 * (func (right) + func (left) + 4* func (middle));
}

/*Getters and setters*/
double Def_int_calc::getBeginning() const {
    return beginning;
}
void Def_int_calc::setBeginning(double beginning) {
    Def_int_calc::beginning = beginning;
}

double Def_int_calc::getEnding() const {
    return ending;
}
void Def_int_calc::setEnding(double ending) {
    Def_int_calc::ending = ending;
}

int Def_int_calc::getIntervals() const {
    return intervals;
}
void Def_int_calc::setIntervals(int intervals) {
    Def_int_calc::intervals = intervals;
}

/*stream operator*/
std::ostream &operator<<(std::ostream &os, const Def_int_calc &calc) {
    os << "Definite integrals calculator is set with\n"
       << " beginning: " << calc.getBeginning()
       << " ending: " << calc.getEnding()
       << " intervals: " << calc.getIntervals() << std::endl;
    return os;
}

