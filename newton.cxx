#include <iostream>
#include <complex>
using namespace std;



int main(){
  int it=0;
  // Example how to declare a single complex variable:
  const int n = 10;
    int inter;
  double delta = 4/n;
  complex<double> x1,x0;
  
  
  for(double  i=-2; i<=2; i+=0.1)
  {
   for(double j=-2;j<=2; j+=0.1)
   {
     
      x1 = complex<double> (i ,j);
      inter=0;
      x0 = complex<double> (5,5);
  
  
    while ((inter<400) && abs(abs(x1)-abs(x0))>1e-8)
    {
      x0=x1;
      x1=x0-((x0*x0*x0)-1.0)/(3.0*x0*x0);
      inter++;
    }
    cout<< i << "\t" << j << "\t" << inter << endl;
  }
 }

 return 0;
}
