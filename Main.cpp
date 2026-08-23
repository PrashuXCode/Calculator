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
    cout<<"The Addition of the numbers is : "<<sum<<"\n";

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
    cout<<"The Substraction of the numbers is : "<<first<<"\n";
}

void Multiplication()
{
    float number,cross,num;
    cout<<"Enter the amount of numbers u want to multiply  : ";
    cin>>number;
    cross=1;
    for (int i = 0; i < number; i++)
    {
        cout<<"Enter No. "<<i+1<<":  ";
        cin>>num;
        cross = cross*num;                
    }
    cout<<"The Multiplication of the numbers is : "<<cross<<"\n";
}
void Division()
{
    float divide,divident,divisor;  
    cout<<"Enter the dividend : ";
    cin>>divident;
    cout<<"Enter the divisor : ";
    cin>>divisor;
    divide = divident/divisor;
    cout<<"The Multiplication of the numbers is : "<<divide<<"\n"; 
}


int main(){

    int choice;

cout<<" Welcome to Calculator \n";
cout<<"1 -----------> Additon  \n";   
cout<<"2 -----------> Substraction \n" ;  
cout<<"3 -----------> Multiplication \n";
cout<<"4 -----------> Division \n";
cout<<"5 -----------> Exit \n";
cout<<"\n";
cout<<"\n";
for (int i = 0; i < 100; i++)
{



cout<<"Enter The Operation : ";
    cin>>choice;
    if (choice == 1)
    {
        Addition();
    }else if (choice == 2)
    {
        Substraction();
    }else if (choice == 3)
    {
        Multiplication();
    }else if (choice == 4)
    {
        Division();
    }else if (choice == 5)
    {
        cout<<"Thank You For Using This Calculator";
        return 0;
    }
}  
return 0;
}