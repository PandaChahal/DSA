#include <iostream>
#include<math.h>
using namespace std;

// fibbonacci
//  int main()
//  {
//      int n;
//      cout<<"enter n : ";
//      cin>>n;
//      int a=0,b=1;
//      for(int i=1;i<=10;i++)
//      {
//          int next = a+b;
//          cout<<a<<" ";
//          a = b;
//          b = next;
//          //cout<<next<<endl;
//      }
//      return 0;
//  }

// prime number finding
//  int main()
//  {
//      int n ;
//      cout<<"enter n :";
//      cin>>n;
//      bool isPrime = 1;
//      for( int i = 2; i < n; i++ )
//      {
//          if(n%i==0)
//          {
//              //cout<<"n is not a prime"<<endl;
//              isPrime = 0;
//              break;
//          }
//      }
//      if(isPrime == 0)
//          {
//              cout<<"n is not a prime number"<<endl;
//          }
//          else
//          {
//              cout<<"n is a prime number "<<endl;
//          }
//      return 0;
//  }

// int main()
// {
//   int n = 234;
//   int sum = 0;
//   int product = 1;
//   while(n != 0)
//   {
//     int digit = n%10;
//     product = product*digit;
//     sum = sum + digit;
//     n = n/10;
//   }
//   cout<<"product = "<<product<<endl;
//   cout<<"sum = "<<sum<<endl;
//   cout<<product-sum<<endl;
//   return 0;
// }

//number of bits 
// void test(uint32_t n)
// {
//     int count = 0;
//     while (n != 0)
//     {
//         if (n & 1)
//         {
//             count += 1;
//         }
//         n =n >> 1;
//     }
//     cout << count << endl;
// }
// int main()
// {
//     int n = 00000000000000000000000000001011;
//     test(n);
//     return 0;
// }

//decimal to binary
// int main() 
// {
//   int n = 4;
//   int ans = 0;
//   int i = 0 ;
//   while(n != 0)
//   {
//     int bit = n&1;
//     ans = (bit*pow(10,i))+ans;
//     n = n >> 1;
//     i++;
//   }
//   cout<<"answer is "<<ans<<endl;
//   return 0;
// }

//binary to decimal

int main() 
{
  int n ;
  cin>>n;
  int ans = 0;
  int i = 0 ;
  while(n != 0)
  {
    int bit = n%10;
    if(bit==1)
    {
      ans = (bit*pow(2,i))+ans;
    }
    n = n / 10;
    i++;
  }
  cout<<"answer is "<<ans<<endl;
  return 0;
}