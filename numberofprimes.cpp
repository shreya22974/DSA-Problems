//calculate the number of primes within a range e.g- input:3,15 output:5,7,11,13=4
#include<iostream>
#include<math.h>
using namespace std;
int main(){
      int start,end;
      int count=0;
      cout<<"Enter range(start-end)";
      cin>>start>>end;
      for(int num=start; num <=end; num++){
        if(num<2) continue;
        bool prime=true;
          for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                prime=false;
                break;
            }
          }
           if(prime==true) count++;
      }
               
      cout<<count;
}
  