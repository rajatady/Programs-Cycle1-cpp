//
//  main.cpp
//  cpp-9-vehicle
//
//  Created by Kumar Divya  Rajat on 08/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;


class vehicle{
    static int count;
    int regno;
    
public:
    vehicle()
    {
        regno=0;
        count++;
        cout<<"Vehicle parked\n";
    }
    
    ~vehicle()
    {
        count--;
        cout<<"Vehicle moved from parking\n";
    }
    
    
    void setregno()
    {
        cout<<"Enter registration number\n";
        cin>>regno;
    }
    
    void getregno()
    {
        cout<<regno<<endl;
    }
    
    static void getVehicleCount()
    {
        cout<<"Total no of vehicles in shed\n"<<count<<endl;
    }
};

int vehicle::count=0;

vehicle create()
{
    vehicle *ptr=new vehicle;
    return *ptr;
}


int main(int argc, const char * argv[]) {
    int choice;
    vehicle *ptr=new vehicle;
    while(1)
    {
        cout<<"Enter your choice\n";
        cout<<"1.Park Vehicle\n2.Move Vehicle\t\t\n";
        cin>>choice;
        {
           switch(choice)
            {
                case 1: ;
                        *ptr= create();
                        ptr->setregno();
                        ptr->getregno();
                        ptr->getVehicleCount();
                    break;
                case 2:
                    delete ptr;
              
                    
                default:
                    exit(0);
            }
        }
    }
    
   
}

