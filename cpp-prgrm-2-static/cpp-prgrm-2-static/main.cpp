//
//  main.cpp
//  cpp-prgrm-2-static
//
//  Created by Kumar Divya  Rajat on 07/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class counter{
    static int count;
    int a;
    int b;
    
public:
    void input()
    {
        cout<<"Enter a and b\n";
        cin>>a>>b;
        count++;
    }
    
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"Record number="<<count;
    }
    
};

int counter::count=0;

int main(int argc, const char * argv[]) {
    int i;
    counter a[10];
    for(i=0;i<3;i++)
    {
        a[i].input();
        a[i].display();
        }
}
