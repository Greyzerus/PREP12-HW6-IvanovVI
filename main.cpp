#include <iostream>
#include "src.h"
#include "Def_int_calc.hpp"


int main() {
    double lower, upper;
    int intervals;

    std::cout << "Integrable function is in \"src.c\" \n"
              << "Note that func must be integrable"
              << "and continuous on chosen interval."
              << std::endl;
    std::cout << "Enter lower limit: " << std::flush;
    std::cin >> lower;
    std::cout << "Enter upper limit: " << std::flush;
    std::cin >> upper;
    std::cout << "Enter number of integrating intervals: " << std::flush;
    std::cin >> intervals;

    double (*func)(double);
    func = &integrable_function;

    Trapezoidal_Def_int_calc Trapezoidal (lower, upper, intervals);
    std::cout << "Integrating result for Trapezoidal is: "
              << Trapezoidal.calculate(func)
              << std::endl;

    Parabolic_Def_int_calc Parabolic (lower, upper, intervals);
    std::cout << "Integrating result for Parabolic is: "
              << Parabolic.calculate(func)
              << std::endl;

    return 0;
}