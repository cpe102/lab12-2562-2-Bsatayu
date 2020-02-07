#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int N,double B[]){
  
   double sum,SD,sum2;
   double Max = A[0] , min = A[0];
   int i;
   while (i<N){ 
        sum += A[i];
        sum2 +=A[i]*A[i];
        for(int x=1;x<N;x++){
            if(A[x]>Max)  Max=A[x];
             if(A[x]<min)  min=A[x];
        } 
        i++;
   }
   B[0]=sum/N;
   B[1]=sqrt((sum2/N)- B[0]*B[0]);
   B[2]=Max;
   B[3]=min;
  }

