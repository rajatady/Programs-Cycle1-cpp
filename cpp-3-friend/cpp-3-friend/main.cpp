//3. Write a cpp program to illustrate the use of Friend function and also illustrate how an object can be created within a function and returned to another function.
//  main.cpp
//  cpp-3-friend
//
//  Created by Kumar Divya  Rajat on 07/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class complex
{
    int r;
    int i;
    
    
public:
    void input()
    {
        cout<<"Enter real part followed by the imagianry part\n";
        cin>>r>>i;
    }
    
    void display()
    {
        cout<<r<<"+"<<i;
    }
    
    friend complex add(complex,complex);
    
};

complex add(complex a, complex b)
{
    complex y;
    y.r=a.r+b.r;
    y.i=a.i+b.i;
    return y;
}

int main(int argc, const char * argv[]) {
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=add(c1,c2);
    c3.display();
}
