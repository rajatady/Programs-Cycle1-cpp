//
//  main.cpp
//  cpp-1-add
//
//  Created by Kumar Divya  Rajat on 07/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class add{
    int a;
    int b;
    
public:
    void sum()
    {
        cout<<"Enter number 1\n";
        cin>>a;
        cout<<"Enter number 2\n";
        cin>>b;
        
    }
    
    void display()
    {
        cout<<"The sum of the numbers "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
};

int main(int argc, const char * argv[]) {
    add a;
    a.sum();
    a.display();
}
