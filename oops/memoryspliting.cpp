#include<iostream>
using namespace std;
class A{
  protected:
  int x;
  public :
   void show(){
    cout<<"x="<<x<<endl;
   }
};
class B:public  A{
    protected:
     int y;
     public:
     B(int i,int j){
        x=i;y=j;
     }
     void show(){
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
     }
};
int main(){
    A a;
    B b(1,2);
    a=b;
    a.show();
}
