#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

double slope(double x,double t)
{
    return sin(x*t);
}
int main()
{
    // Using Runge-Kutta Method 
    double x = 1.0;
    double t_start = 0.0;
    double t_end = 76.5;
    double h = 0.0001 ;//time step
    for (double t=t_start;t<=t_end-h;t+=h)
    {
        double k1=slope(x,t);
        double k2=slope(x+h*k1/2,t+h/2);
        double k3=slope(x+h*k2/2,t+h/2);
        double k4=slope(x+h*k3,t+h);
        x+=h*(k1+2*k2+2*k3+k4)/6.0;
    }
    cout<<fixed<<setprecision(10)<<x;
    return 0;
}


