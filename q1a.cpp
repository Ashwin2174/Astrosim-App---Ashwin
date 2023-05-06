#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void gravity()
{
   double G = 6.6743e-11;  
   double m1,m2; //double stands for long double
   double pos_m1[3],pos_m2[3]; //stores the coordinates of the point mass
   cin >> m1 >> m2; //getting the masses
   for (int i=0;i<3;i++){cin >> pos_m1[i];} // getting the coordinates
   for (int i=0;i<3;i++){cin >> pos_m2[i];}
   double f_1_2[3]; //force vector
   double d_12; //distance between 1 and 2
   for (int i=0;i<3;i++) {d_12+=pow(pos_m1[i]-pos_m2[i],2);} //calculating d_12
   d_12=pow(d_12,0.5);
   for (int i=0;i<3;i++) {f_1_2[i]=G*m1*m2*(pos_m2[i]-pos_m1[i])/pow(d_12,3);} //calculating f_1_2
   cout <<f_1_2[0]<<" "<<f_1_2[1]<<" "<<f_1_2[2]<<'\n';
}
int main()
{
    gravity();
    return 0;
}