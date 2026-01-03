#include<iostream>
#include<fstream>
using namespace std;
int main() {
    int customerpass;
    string customeruser;
  //Taking username from user
    cout<<"Enter your username:";
    cin>>customeruser;
    //Taking password from user
    cout<<"Enter your password:";
    cin>>customerpass;
//Opening file in append mode
    ofstream file("customer.txt",ios::app);
    file<<customeruser<<""<<customerpass<<""<<endl;
    file.close();
//Display success message
    cout<<"Registration successful"<<endl;
    return 0;
}
