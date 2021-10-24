#include <iostream>
using namespace std;
int main () {
  long N;
  cin >>N;
  int r =0;
  r+=N/500;
  N= N%500;
    r+=N/200;
  N= N%200;
  r+=N/100;
  N= N%100;
  r+=N/50;
  N= N%50;
  r+=N/20;
  N= N%20;
  r+=N/10;
  N= N%10;
  r+=N/5;
  N= N%5;
  r+=N/2;
  N= N%2;
  r+=N/1;
  N= N%1;
  cout <<r<<endl;
  system ("pause");
  
   
   }
