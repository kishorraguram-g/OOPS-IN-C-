#include<iostream>
using namespace std;

class A{
 
  public:
    A(){
        cout<<"AC"<<endl;
    }
    ~A(){
        cout<<"AD"<<endl;
    }
};

class B:public A{
   public:
   B(){
    cout<<"BC"<<endl;
   }
   ~B(){
    cout<<"BD"<<endl;
   }
};

int main(){
    A *a;
    B b;
    a=&b;
}