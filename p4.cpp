#include <iostream>
using namespace std;
Class Prod{
  public:
  Prod(int a, int b){
         cout<<a+b;}
  Prod(float a,float b){
         cout<<a+b;}
  Prod(char a,char b){
         cout<<a+b;}};

void main(){
  Prod p1(1,2);
  Prod p2('a','b');
  Prod p3(1.5f,2.9f);}
  
