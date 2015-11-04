
#include <iostream>
#include <complex>
//#define pi 3.14
//#define n 100

using namespace std;

complex <double> tanfunc(double Winkel)
{
  complex <double> c= complex <double> (1.0,1.0);
 return tan(Winkel*c); 
}

int main(){
   const double pi=3.14;
   const int n=100;
   complex <double> arr_z[n];
   //double phi=0, delta_phi=2*pi/n;
   double phi=-pi, delta_phi=2*pi/n;
   complex <double> ii =complex <double> (0,1);
  // Example how to declare a single complex variable:
  
   
  // d = 1 + 2i 
  for (int i=0; i<n; i++)
  {
   arr_z[i]=tanfunc(phi); 
   // arr_z[i]=exp(ii*phi);
    phi=phi+delta_phi;
  }
  for(int i=0; i<n; i++)
  {
    cout<<arr_z[i];
    cout<<"\t "<< real(arr_z[i])<<"\t"<<imag(arr_z[i])<<"\t"<<abs(arr_z[i])<<endl;
  }

  return 0;
}
