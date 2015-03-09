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
    
    friend a add(class x);
    
};

a add(class x)
{
    a B;
    B.d=B.a+B.b+B.c;
    B.d=B.d/2;
    return B;
}
int main(int argc, const char * argv[]) {
    a A1,A2;
    A1.input();
    A2=add(A1);
    A2.display();
}
