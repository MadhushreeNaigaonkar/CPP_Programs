#include<iostream>
using namespace std;

int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    int ans=isPrime(num);
    if(ans==1){
    cout<<"Entered number is prime "<<endl;
    }
    else{
        cout<<"Entered number is not prime"<<endl;
    }
    return 0;
}
