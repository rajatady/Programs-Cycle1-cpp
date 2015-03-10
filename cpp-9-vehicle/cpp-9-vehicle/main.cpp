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
        count++;
        cout<<"Vehicle created\n";
    }
    
    ~vehicle()
    {
        count--;
        cout<<"Vehicle destroyed\n";
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
        cout<<"Total no of vehicles\n"<<count<<endl;
    }
};

int vehicle::count=0;


int main(int argc, const char * argv[]) {
    
    vehicle v1;
    v1.setregno();
    v1.getregno();
    v1.getVehicleCount();
    
}

