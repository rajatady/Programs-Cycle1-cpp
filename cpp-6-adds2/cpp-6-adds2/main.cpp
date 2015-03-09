//
//  main.cpp
//  cpp-6-adds2
//
//  Created by Kumar Divya  Rajat on 08/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class complex{
    int r,i;
    
public:
    void input()
    {
        cout<<"Enter real part followed by imaginary part\n";
        cin>>r>>i;
    }
    
    void display()
    {
        cout<<"("<<r<<"+"<<i<<"i)\n\n\n";
    }
    
    friend complex add(complex, int);
    friend complex add(complex,complex);
};

complex add(complex z,int a)
{
    complex com;
    com.r=z.r+a;
    com.i=z.i;
    return com;
}

complex add(complex c, complex d)
{
    complex z;
    z.r=c.r+d.r;
    z.i=c.i+d.i;
    return z;
}

int main(int argc, const char * argv[]) {
    complex c1,c2,c3,c4;
    c1.input();
    c1.display();
    c2.input();
    c2.display();
    cout<<"The addition of the given complex numbers\n";
    c3=add(c1,c2);
    c3.display();
    cout<<"Enter a integer to be added to the complex number\n";
    int a;
    cin>>a;
    c4=add(c3, a);
    c4.display();
}
