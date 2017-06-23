#include <iostream>
#include "PID.h"


using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    // initialize errors
    p_error = 0;
    i_error = 0;
    d_error = 0;
}

void PID::UpdateError(double cte) {
    
    double cte_prev = 0;

    cte_prev = p_error;

    p_error = cte;
    i_error += cte;
    d_error = cte - cte_prev;
}

double PID::TotalError() {
    // cout << "p_error: " << p_error << endl;
    // cout << "d_error: " << d_error << endl;
    // cout << "i_error: " << i_error << endl;
    return -p_error * Kp - i_error * Ki - d_error * Kd;
}

