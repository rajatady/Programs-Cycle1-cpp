//
//  main.cpp
//  cpp-9-student-constructor
//
//  Created by Kumar Divya  Rajat on 08/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class student{
    char *name;
    char *usn;
    int marks[3];
    float avg;
    int lenght_name;
    int lenght_usn;
public:
    student()
    {
        lenght_name=0;
        lenght_usn=0;
        avg=0;
        name=new char[lenght_name+1];
        usn=new char[lenght_usn+1];
    }
    
    student(char *s,char *q)
    {
        lenght_name=(int)strlen(s);
        name=new char[lenght_name+1];
        strcpy(name,s);
        lenght_usn=(int)strlen(q);
        usn=new char[lenght_usn+1];
        strcpy(usn,q);
    }
    
    /*~student()
    {
        cout<<"hi";
    }*/
    
    void input()
    {
        int i;
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Enter usn\n";
        cin>>usn;
        cout<<"Enter marks\n";
        for(i=0;i<3;i++)
        {
            cin>>marks[i];
        }
        calc();
    }
    
    void calc()
    {
        int low;
        if(marks[0]<marks[1] && marks[0]<marks[2])
        {
            low=marks[0];
        }
        else if(marks[1]<marks[0] && marks[1]<marks[2])
        {
            low=marks[1];
        }
        else
            low=marks[2];
        
        avg=(marks[0]+marks[1]+marks[2]-low)/2;
    }
    
    void display()
    {
        int i;
        cout<<"Name-\t"<<name<<endl;
        cout<<"USN-\t"<<usn<<endl;
        for(i=0;i<3;i++)
        {
            cout<<marks[i]<<"\t\t";
        }
        cout<<endl;
        cout<<"Average-"<<avg<<endl;
        
    }
};

int main(int argc, const char * argv[]) {
    student s[5];
    int i;
    cout<<"Enter the records you want to create\n";
    int n;
    cin>>n;
    cout<<"Enter the details\n";
    for(i=0;i<n;i++)
    {
        s[i].input();
    }
    cout<<"The details are \n";
    for(i=0;i<n;i++)
    {
        s[i].calc();
        s[i].display();
    }
}
