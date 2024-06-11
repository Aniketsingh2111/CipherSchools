#include <iostream>
using namespace std;
int main(){

    //QUE1
    //if-else
    float a , b;
    

    cout<<"Giving two values as input: ";
    cin>>a>> b ;
    if(a> 0 && b >0)
    {
        cout<<"Both are greater than 0";
    }else{
        cout<<"Smaller than 0";
    }

    //QUE2
    //if-else
    int marks;
    cin>>marks;
    if(marks>=90){
        cout<<"A";
    }else if (marks>=80){
        cout<<"B";
    }else if(marks>=70){
        cout<<"C";
    }else if (marks<70 && marks >=60){
        cout<<"D";
    }else{
        cout<<"E";
    }


    //QUE3
    //switch case
    int n;
    cin>>n;
    switch(n){
        case 1:
        cout<<"The value of num is 1"<<endl;
        break;
        case 2:
        cout<<"The value of num is 2"<<endl;
        break;
        case 3:
        cout<<"The value of num is 3"<<endl;
        break;
        case 4:
        cout<<"The value of num is 4"<<endl;
        break;
        default:
        cout<<"Value not initialized";

    }
}