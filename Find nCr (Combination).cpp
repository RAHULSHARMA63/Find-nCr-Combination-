#include<iostream>
using namespace std;
int main()
{
    long long fact=1, numerator, denominator;
    int comb, n, r, i=1, sub;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Enter the Value of r: ";
    cin>>r;
    while(i<=n)
    {
        fact = i*fact;
        i++;
    }
    numerator = fact;                   
    sub = n-r;
    fact = 1;
    i = 1;
    while(i<=sub)
    {
        fact = i*fact;
        i++;
    }
    denominator = fact;             
    fact = 1;
    i = 1;
    while(i<=r)
    {
        fact = i*fact;
        i++;
    }
    denominator = (fact*denominator);
    comb = numerator/denominator;
    cout<<"\nCombination (nCr) = "<<comb;
    cout<<"\n";
    return 0;
}
