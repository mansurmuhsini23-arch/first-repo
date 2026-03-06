#include<iostream>
#include<iomanip>
using namespace std;

    bool isPrime(int x){
        if(x<2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
int main(){
    int from,to,count=0,sum=0;;
    cin>>from>>to;
    for(int i=from;i<=to;i++){
        if(isPrime(i)){
            sum+=i;
            count++;
            cout<<setw(5)<<i<<" ";
        }
        
    }
   cout<<endl;
   cout<<"quantity of prime numbers are "<<count<<endl;
   cout<<"sum of prime numbers are "<<sum<<endl;
    return 0;
    

}
