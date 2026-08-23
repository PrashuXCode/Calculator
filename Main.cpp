#include <iostream>
using namespace std;

void Addition()
{ 
    float number,sum,num;
    cout<<"Enter the amount of numbers u want to add  : ";
    cin>>number;
    sum=0;
    for (int i = 0; i < number; i++)
    {
        cout<<"Enter No. "<<i+1<<":  ";
        cin>>num;
        sum = sum+num;                
    }
    cout<<"The Addition of the numbers is : "<<sum;

}

void Substraction()
{
    float number,first,num;
    cout<<"Enter the amount of no. u want to substract  : ";
    cin>>number;
    cout<<"Enter No. 1 : ";
    cin>>first;
    for (int i = 0; i < number-1 ; i++)
    {
        cout<<"Enter No. "<<i+2<<" : ";
        cin>>num;
        first = first-num;
    }
    cout<<"The Substraction of the numbers is : "<<first;
}


int main(){
   
    int choice;
cout<<"Welcome to Calculator \n";
cout<<"1 -----------> Additon  \n";   
cout<<"2 -----------> Substraction \n" ;  
cout<<"3 -----------> Division \n";
cout<<"4 -----------> Multiplication \n";
cout<<"5 -----------> Exit \n";
cout<<"\n";
cout<<"\n";
cout<<"Enter Your Choice : ";
cin>>choice;

if (choice == 1)
{
    Addition();
}else if (choice == 2)
{
    Substraction();
}


    return 0;
}