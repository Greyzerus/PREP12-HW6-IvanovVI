#include <iostream>
#include "Def_int_calc.hpp"

double integrable_function (const double x){
    /*Note that func must be integrable*
     *And continuous on chosen interval*/
    double y;
    y = (x*x)-20;
    return y;
}

int main() {
    double lower, upper;
    int intervals;

    std::cout << "Integrable function is in \"main.cpp\" \n"
              << std::endl;
    std::cout << "Enter lower limit: ";
    std::cin >> lower;
    std::cout << "Enter upper limit ";
    std::cin >> upper;
    std::cout << "Enter number of integrating intervals: " << std::flush;
    std::cin >> intervals;

    Trapezoidal_Def_int_calc Trapezoidal (lower, upper, intervals);
    std::cout << "Integrating result for Trapezoidal is: "
              << Trapezoidal.calculate(&integrable_function)
              << std::endl;

    Parabolic_Def_int_calc Parabolic (lower, upper, intervals);
    std::cout << "Integrating result for Parabolic is: "
              << Parabolic.calculate(&integrable_function)
              << std::endl;

    return 0;
}
