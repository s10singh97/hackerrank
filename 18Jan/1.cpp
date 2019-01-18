#include<iostream>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char a[INT16_MAX], b[INT16_MAX];
    cin>>a>>b;
    cout<<strlen(a)<<" "<<strlen(b)<<"\n";
    cout<<a<<b<<"\n";
    char t = a[0];
    a[0] = b[0];
    b[0] = t;
    cout<<a<<" "<<b;
    return 0;
}
