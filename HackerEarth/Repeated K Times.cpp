//Saurabhsahab
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long int n,k;
    cin>>n;
    long long int a[n],b[2000000]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    cin>>k;
    for(long long int i=0;i<2000000;i++){
        if(b[i]==k){
            cout<<i;
            break;
        }
    }
}
