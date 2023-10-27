//
//  main.cpp
//  discount price
//
//  Created by Nisha Ramprasath on 27/10/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...


    float billAmount;
    float discount=0.0;
    
    cout<<"enter bill amt";
    cin>>billAmount;
    if(billAmount>=500)
        discount=billAmount*20/100;
    else if(billAmount>=100 && billAmount<500)
        discount=billAmount*10/100;
    
    cout<<"bill amt is: "<<billAmount<<endl;
    cout<<"discount is:  "<<discount<<endl;
    cout<<"discount value is  "<<billAmount-discount<<endl;



    return 0;
}
