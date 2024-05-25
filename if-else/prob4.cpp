#include<iostream>
using namespace std;


int main(){

    // program to check if a triangle is scalene, isosceles or equilateral
    int side_a, side_b, side_c;
    cout<<"Enter the sides of triangle "<<endl;
    cin>>side_a>>side_b>>side_c;    
    if(side_a==side_b && side_b==side_c){
        cout<<"This is an euilateral triangle "<<endl;
    }
    else if(side_a==side_b || side_b==side_c || side_c==side_a){
        cout<<"This is an isosceles triangle "<<endl;
    }
    else{
        cout<<"This is a scalene triangle "<<endl;
    }
    return 0;
}