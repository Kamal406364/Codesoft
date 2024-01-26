#include<iostream>
using namespace std;
double addition(double a,double b){
    return a+b;
}
double subtraction(double a, double b){
    return a-b;
}
double multiplication(double a, double b){
    return a*b;
}
double division(double a, double b){
    if(b==0){
        cout<<"Error!! Cannot divide by zero.."<<endl;
    }
    else{
        return a/b;
    }
}
int main(){
    int a;
    double b,c;
    while(a!=5){
        cout<<"--------Simple calculator--------";
        cout<<endl;
        cout<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4,Division"<<endl;
        cout<<"5.Quit"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Enter your choice : ";
        cin>>a;

        if(a==5){
            cout<<"Exiting calculator.....";
        }
        double add,sub,mul,divi;
        
        switch(a){
            case 1:
                cout<<"Enter two number to calculate: ";
                cin>>b>>c;
                add=addition(b,c);
                cout<<"Result="<<add<<endl;
                cout<<endl;
                cout<<endl;
                break;
            case 2:
                cout<<"Enter two number to calculate: ";
                cin>>b>>c;
                sub=subtraction(b,c);
                cout<<"Result="<<sub<<endl;
                cout<<endl;
                cout<<endl;
                break;
            case 3:
                cout<<"Enter two number to calculate: ";
                cin>>b>>c;
                mul=multiplication(b,c);
                cout<<"Result="<<mul<<endl;
                cout<<endl;
                cout<<endl;
                break;
            case 4:
                cout<<"Enter two number to calculate: ";
                cin>>b>>c;
                divi=division(b,c);
                cout<<"Result="<<divi<<endl;
                cout<<endl;
                cout<<endl;
                break;
            case 5:
                break;
            default:
                cout<<"Enter a valid choice....."<<endl;
                cout<<endl;
                cout<<endl;
                break;
        }
    }
    return 0;
}