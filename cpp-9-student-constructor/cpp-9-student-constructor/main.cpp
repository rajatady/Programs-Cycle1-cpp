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
         
         name=new char[lenght_name+1];
         usn=new char[lenght_usn+1];
         avg=0;
         cout<<"Objects of size 5 initialised\n";
    }
    
    
    ~student()
    {
        cout<<"Object deleted";
    }// This destructor is explicitly called by the compiler everytime the program is terminated if you are creating objects.
    // In case you are using pointers to the objects, using the command delete pointername will call the destructor.
    
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
