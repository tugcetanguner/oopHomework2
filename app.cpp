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
            cout<<"x: "<<x<<"y: "<<y<<endl;
        }
};

class Circle: public Point{
    private:
        int x;
        int y;
        int r;
    public:
        Circle(int _x=0,int _y=0, int _r=0):Point(_x,_y),r(_r){
            x=_x;
            y=_y;
        }
        void print(){
            cout<<"x: "<<x<<"y: "<<y<<"r: "<<r<<endl;
        }
        
};

int main(){

    Point p1,p2(2,3);
    Circle c1,c2(1,1,1);
    p1.print();
    p2.print();
    c1.print();
    c2.print();


}