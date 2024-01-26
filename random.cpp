#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int guess;
    int point=0;
    int score=0;
    cout<<"--------Number Guessing Game--------"<<endl;
    cout<<endl;
    cout<<"This game consists of two rounds"<<endl;
    cout<<endl;
    cout<<"Condition:"<<endl;
    cout<<"1.In first round you must guess number within 5 chances to qualify for second round"<<endl;
    cout<<"2.In second round you must guess number within 3 chances to win the game..."<<endl;
   
    
    for(int i=1; i<=5; i++){
        int random_1=rand()%10+1;
        cout<<random_1;
        
        cout <<"\nEnter a number between 1 and 10:";
        cin>>guess;
        if(guess==random_1){
            
            cout<<"\nYou have entered correct number..."<<endl;
            cout<<"\nchoice remaining:"<<5-i<<endl;
            point++;
        }
        else{
            cout<<"\nYou have entered wrong number..."<<endl;
            cout<<"\nChance remaining:"<<5-i<<endl;
        }
    }
    
    if(point>=3){
        
        cout<<"\nYou're qualified for second round"<<endl;
        for(int i=1; i<=3; i++){
        int random_2=rand()%10+1;
        cout<<random_2;
        cout <<"\nEnter a number between 1 and 10:";
        cin>>guess;
        if(guess==random_2){
            cout<<"\nYou have entered correct number..."<<endl;
            cout<<"choice remaining:"<<3-i<<endl;
            score++;
        }
        else{
            cout<<"You have entered wrong number..."<<endl;
            cout<<"Chance remaining:"<<3-i<<endl;
        }
    }
    if(score>=2){
            cout<<"\nYou won the game....."<<endl;
        }
        else{
            cout<<"\nYou lose the game....."<<endl;
        }

    }
    else{
        cout<<"\nYou're not qulaified for second round.."<<endl;
        cout<<"\nBetter luck next time:)"<<endl;
    }
    return 0;
}