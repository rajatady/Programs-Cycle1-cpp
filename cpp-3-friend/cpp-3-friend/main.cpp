//
//  main.cpp
//  cpp-3-friend
//
//  Created by Kumar Divya  Rajat on 07/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class a{
    int a;
    int b;
    int c;
    int d;
    
public:
    void input()
    {
        cout<<"Enter a,b,c and d\n";
        cin>>a>>b>>c>>d;
    }
    
    friend void add(class a);
    
};

void add(class a)
{
    a B;
    B.d=B.a+B.b+B.c;
    B.d=B.d/2;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
