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
}

    return 0;
}