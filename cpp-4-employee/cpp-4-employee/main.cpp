//
//  main.cpp
//  cpp-4-employee
//
//  Created by Kumar Divya  Rajat on 07/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class employee{
    static int count;
    char emp_name[10];
    int basic;
    float da,it,net;
    
public:
    int emp;
    void input()
    {
        cout<<"Enter employee name\n";
        cin>>emp_name;
        cout<<"Enter employee number\n";
        cin>>emp;
        cout<<"Enter baisc\n";
        cin>>basic;
        count++;
    }
    
    void calculate()
    {
        float gross;
        da=(0.52*basic);
        gross=basic+da;
        it=(0.30*gross);
        net=(basic+da-it);
    }
    
    void display()
    {
        cout<<"Employee Number-\t"<<emp<<endl;
        cout<<"Employee Name-\t"<<emp_name<<endl;
        cout<<"Basic-\t"<<basic<<endl;
        cout<<"DA-\t"<<da<<endl;
        cout<<"IT-\t"<<it;
        cout<<"Net Salary=("<<basic<<"+"<<da<<"-"<<it<<")\t=\t"<<net<<endl;
    }
};

int employee::count=0;

int main(int argc, const char * argv[]) {
    int i,n=3;
    employee e[10];
    while(i!=n)
    {
        e[i].input();
        e[i].calculate();
        i++;
    }
    int j=0;
    while(j!=n)
    {
        cout<<"______________________";
        e[j].display();
        j++;
    }


    /*cout<<"Enter how many employee details do you want?\n";
    int n;
    cin>>n;
    int i=0;
    while(i!=n)
    {
        e[i].input();
        e[i].calculate();
        i++;
    }
    int empno;
    cout<<"Enter employee number to search\n";
    cin>>empno;
    while(i!=n || e[i].emp!=empno)
    {
        i++;
    }
    
    if(i==n)
    {
        cout<<"Incorrent employee number\n";
    }
    else
    {
        e[i].display();
    }*/
}
