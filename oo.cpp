#include <iostream>
using namespace std;
class shape{
    public:
    void shape1(){
        cout<<"Shape is not defined!\n";
    }
    void shape1(int n){
        cout<<"Shape is circle or square\n";
    }
    void shape1(int a,int b){
        cout<<"shape is rectangle\n";
    }
    shape(){
        cout<<"Constructor initiated\n";
    }
    shape(shape& obj){
        cout<<"Copy constructor initiated\n";
    }
};
int main(){
    shape obj1;
    shape obj2(obj1);
    obj1.shape1();
    obj1.shape1(2);
    obj1.shape1(1,2);
    return 0;
}