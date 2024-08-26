#include<iostream>
using namespace std;
int main(){
    int pwd,u_pwd;
    pwd=1234;
    cout<<"Enter the password";
    cin>>u_pwd;
    while(pwd>0){
        if(u_pwd!=pwd){
            cout<<"Incorrect Password"<<endl;
            cout<<"Enter password again"<<endl;
            cin>>u_pwd;
        }
        else
        cout<<"Password is correct";
        break;
    }
}
/*
Enter the password123
Incorect Password
Enter password again
1234
*/
