#include<iostream>
using namespace std;

class Number{
    private:
    int x;
    public:
    Number (int x){
        this->x=x;
    }
    void* operator new(size_t size){
        void *ptr=new int[size];
        //using global new overloaded operator
        cout<<"Memory allocationd" 
    }

}