#include<iostream>
using namespace std;

bool ifPrime(int n);

int main() {
    int num, i;
    bool flag = false;

    cout<<"Enter Number : ";
    cin>>num;

    for(i = 2; i <= num/2; ++i) {
        if (ifPrime(i)) {
            if (ifPrime(num-i)) {
                cout<<num<<" = "<<i<< " + "<<num-i<<endl;
                flag = true;
            }
        }
    }

    if (!flag)
      cout<<"Given Number Cannot Be Expressed As Sum Of 2 Prime Numbers"<<endl;

    return 0;
}

bool ifPrime(int n)
{
    int i;
    bool isPrime = true;

    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for(i = 2; i <= n/2; ++i)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
