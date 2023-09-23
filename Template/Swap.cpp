#include<iostream>

using namespace std;

template<class T>
void demoswap(T &a,T &b){
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int n1=2,n2=3;
    // cin>>n1,n2;
    cout<<n1<<n2<<endl;
    demoswap(n1,n2);
    cout<<n1<<n2;

    return 0;

}