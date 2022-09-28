#include<iostream>
using namespace std;
bool isPrime(int number){
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i < number; i++)
    {
        if (number%i == 0)
        {
            return false;
        }
        
    }
    return true;
}
int allPrimes(int n){
    int count;
    for (int i = 2; i < n; i++)
    {
        if(isPrime(i)){
            count++;
            cout<<"Prime Encounted"<<endl;
        }
    }
    count++;
    return count;
}
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int count = allPrimes(number);
    cout<<"count is : "<<count<<endl;
    
    return 0;
}