// Next Palindrome

#include<iostream>
using namespace std;

int ispalindrome(int n)
{
    int nn = n, sum = 0;
    while(n)
    {
        int d = n % 10;
        sum = sum*10 + d;
        n = n / 10;
    }
    if(nn == sum)
        return 1;
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    int t, k;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>k;
        if(k > 1000000)
            exit(0);
        for(int j = k+1; j < 1000000; j++)
        {
            if(ispalindrome(j))
            {
                cout<<j<<"\n";
                break;
            }
        }
    }
    return 0;
}
