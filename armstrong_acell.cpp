
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    cout<<"enter the value of n \n";
    int n;
    cin>>n;
    cout<<"armstrong no in the range [1,"<<n<<"] are \n";
    for(int i=1;i<=n;i++){
       int num=i;
       int rem;
       int c=0;
       double sum=0;
       while(num>0){
           num=num/10;
           c++;
       }
       
       int num2=i;
       while(num2>0){
       rem=num2%10;
       num2=num2/10;
       sum=sum+pow(rem,c);
           
       }
       if(i==sum){
           cout<<i<<"  ";
       }
   }
   return 0;
}
