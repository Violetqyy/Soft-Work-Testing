#include "compute.h"
#include <stdexcept>
double compute::zjm(double x, double a, double b) {
    if (a != 0) {
        x += a;
    }
    else {
        if (b != 0) {
            if (x > 0) {
                x /= b;
            }
            else {
                throw std::runtime_error("错误");
            }
        }
        else {
            throw std::runtime_error("错误");
        }
    }
    return x;}
