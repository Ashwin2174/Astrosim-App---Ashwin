#define _USE_MATH_DEFINES
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
double G = 6.6743e-11;
class CelestialBody {
    public:
        double Radius; // assuming it is a uniform sphere
        double Mass;
        double getDensity(){
            return 3.0*Mass/(4.0*M_PI*pow(Radius,3));
        }
        double SurfaceGravity(){
            return G*Mass/pow(Radius,2);
        }
        double EscapeVelocity(){
            return pow(2.0*G*Mass/Radius,0.5);
        }
};

class Star : public CelestialBody{
    public:
        double Luminosity;
        double SurfaceTemp;
        Star(double m,double r,double l,double st){
            Mass = m;
            Radius = r;
            Luminosity = l;
            SurfaceTemp = st;
        }
};

class Planet : public CelestialBody{
    public:
        double OrbitalRadius;
        int MoonCount;
        double RotationPeriod;
        Planet(double m,double r,double orb,int mc,double rot){
            Mass = m;
            Radius = r;
            OrbitalRadius = orb; // assuming circular path
            MoonCount = mc;
            RotationPeriod = rot;
        }
        double OrbitalVelocity(double StarMass){
            return pow(G*StarMass/OrbitalRadius,0.5);
        }
        double RevolutionTime(double StarMass){
            return 2.0*M_PI*pow(pow(OrbitalRadius,3)/(G*StarMass),0.5);
        }   
};

int main(){
    /*example
    Star sun(1.9891e30,6.957e8,3.828e26,5800);
    Planet earth(5.97219e24,6.3781e6,1.5e11,1,8.64e4);
    cout<<earth.RevolutionTime(sun.Mass)/(24.0*3600.0)<<endl;
    cout<<sun.getDensity()<<endl;
    cout<<earth.OrbitalVelocity(sun.Mass)<<endl;
    cout<<earth.SurfaceGravity()<<endl;
    cout<<earth.EscapeVelocity()<<endl;*/
    return 0;
}



