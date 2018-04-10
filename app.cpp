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

            
        }
};

class Circle: public Point{
    private:
        int x;
        int y;
        int r;
    public:
        Circle(){

        }
};

int main(){

    Point p1,p2(2,3);

    p1.print();
    p2.print();
}