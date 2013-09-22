//
//  main.cpp
//  FtoC
//
//  Created by apple on 13-9-22.
//  Copyright (c) 2013年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
double FtoC(double F)
{
    return (F-32)*5/9;
}
int main()
{
    double F,c;
    cout<<"input F:";
    cin>>F;
    c=FtoC(F);
    cout<<c<<endl;
    return 0;
}

