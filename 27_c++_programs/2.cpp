/*write a program to check a number is prime or not*/
#include<iostream>
    using namespace std;
    int main()
{
    int num,count=0;
    cout<<"Enter the number to check weathe it is a prime number or not";
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        cout<<num<<" is prime number";
    }
    else
        cout<<num<<" is not a prime number";
return 0;
}