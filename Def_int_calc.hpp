//
// Created by greyzerus on 02.04.17.
//

#ifndef HW6_DEFINITE_INT_CALCULATING_HPP
#define HW6_DEFINITE_INT_CALCULATING_HPP


#include <ostream>

class Def_int_calc {
public:
    Def_int_calc(double beginning, double ending, int intervals);

    double calculate (double (*func)(const double));
    
    virtual double calculating_method (double left, double right, double (*func)(const double)) =0;

    double getBeginning() const;
    void setBeginning(double beginning);

    double getEnding() const;
    void setEnding(double ending);

    int getIntervals() const;
    void setIntervals(int intervals);

private:
    double beginning;
    double ending;
    int intervals;
};

std::ostream &operator<<(std::ostream &os, const Def_int_calc &calc);

class Trapezoidal_Def_int_calc : public Def_int_calc {
public:
    Trapezoidal_Def_int_calc(double beginning, double ending, int intervals);

    double calculating_method (double left, double right, double (*func)(const double));
};

class Parabolic_Def_int_calc : public Def_int_calc {
public:
    Parabolic_Def_int_calc(double beginning, double ending, int intervals);

    double calculating_method (double left, double right, double (*func)(const double));
};

#endif //HW6_DEFINITE_INT_CALCULATING_HPP
