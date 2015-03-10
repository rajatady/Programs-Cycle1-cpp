//
//  main.cpp
//  cpp-5-usn
//
//  Created by Kumar Divya  Rajat on 08/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class student{
    char usn[10];
    int marks[3][6];
    float avg[6];
    
public:
    void input()
    {
        int i,j=0;
        cout<<"Enter USN\n";
        cin>>usn;
        for (i=0; i<3; i++)
        {
            cout<<"Enter marks for test "<<++j<<" .\n";
            cout<<"OOPS-";
            cin>>marks[i][0];
            cout<<endl;
            cout<<"ADA-";
            cin>>marks[i][1];
            cout<<endl;
            cout<<"MATHS-";
            cin>>marks[i][2];
            cout<<endl;
            cout<<"UNIX-";
            cin>>marks[i][3];
            cout<<endl;
            cout<<"TFC-";
            cin>>marks[i][4];
            cout<<endl;
            cout<<"ENGLISH-";
            cin>>marks[i][5];
            cout<<endl;
            
        }
        
    }
    
    void cal_disp()
    {
        int  j,count=1,i;
        cout<<"\nUSN no:"<<usn<<endl;
        
        
        
        for(j=0;j<6;j++)
        {
          int low=marks[0][j];
          
          if(marks[1][j]<low && marks[1][j]<marks[2][j])
            low=marks[1][j];
            
          else if(marks[2][j]<low && marks[2][j]<marks[1][j])
            low=marks[2][j];
        
            avg[j]=(marks[0][j]+marks[1][j]+marks[2][j]-low)/2;
            
        }
        for(i=0;i<3;i++)
        {
            cout<<"Marks for test "<<count++<<"\t";
            for(j=0;j<6;j++)
            {
                cout<<marks[i][j]<<"\t\t";
            }
            cout<<endl;
        }
        cout<<"Average\t\t\t\t";
        for(j=0;j<6;j++)
        {
            cout<<avg[j]<<"\t\t";
        }
        
        cout<<endl;

    }
};

int main()
{
    int i;
    student s[3];
    for(i=0;i<3;i++)
    {
        s[i].input();
        s[i].cal_disp();
    }
}
