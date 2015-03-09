//
//  main.cpp
//  cpp-7-string
//
//  Created by Kumar Divya  Rajat on 08/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class string1
{
    int lenght;
    char *s;
    
public:
    /*string1()
    {
        lenght=0;
        s=new char[lenght+1];
    }*/
    
    string1(char *st)
    {
        lenght=(int)strlen(st);
        s=new char[lenght+1];
        strcpy(s,st);
    }
    
    void display()
    {
        cout<<s;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    char *first;
    first="xyz";
    string1 s1(first);
    char *second;
    second="bms";
    string1 s2(second);
    
    s1.display();
    s2.display();
    
    
    
}
