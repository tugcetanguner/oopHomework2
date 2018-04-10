#include<iostream>
#include <stdio.h>
using namespace std;

class Point{
    protected:
        int x;
        int y;
    public:
        Point(int _x=0,int _y=0):x(_x),y(_y){
        }
        void print(){
            cout<<"x: "<<x<<" y: "<<y<<endl;
        }
};

class Circle: public Point{
    protected:
        int r;
    public:
        Circle(int _x=0,int _y=0, int _r=0):Point(_x,_y),r(_r){

        }
        void print(){
            cout<<"x: "<<x<<" y: "<<y<<" r: "<<r<<endl;
        }
        
};

class Cylinder:public Circle{
    protected:
        int h;
    public:
        Cylinder(int _x=0, int _y=0, int _r=0, int _h=0):Circle(_x,_y,_r),h(_h){

        }
        void print(){
            cout<<"x: "<<x<<" y: "<<y<<" r: "<<r<<" h: "<<h<<endl;
        }
        double volume(){
            return 3.14*h*r*r;
        }

};

int main(){
    Cylinder cc1,cc2(1,2,1,2);
    cout<<"1. silindirin hacmi= "<<cc1.volume()<<endl;
    cout<<"2. silindirin hacmi= "<<cc2.volume()<<endl;


}