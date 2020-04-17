//Saurabhsahab
#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
#define mod 1000000007
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll m,s,p;
    cin>>m>>s;
    p=s;
    if((m==1&&s>9)){
    cout<<-1<<" "<<-1;
        return 0;
    }
    if(m==1&&s<=9){
        cout<<s<<" "<<s;
        return 0;
    }
    if(m>1&&s==0){
        cout<<-1<<" "<<-1;
        return 0;
    }
    if(m>1&&s>=2){
        ll a[m+1]={0};
        a[1]=1;
        a[m]=1;
        s=s-2;
        f(i,1,m+1){
            f(j,1,10){
                if(s>0&&a[i]!=9){
                    a[i]++;
                    s--;
                }
            }
        }
        ll b[m+1]={0};
        
        f(i,1,m+1){
            f(j,0,9){
                if(p>0&&b[i]!=9){
                    b[i]++;
                    p--;
                }
                else{
                    break;
                }
            }
        }
        
        if(p>0){
            cout<<-1<<" "<<-1;
            return 0;
        }
        
        f1(i,m,0){
            cout<<a[i];
        }
        cout<<" ";
        
        f(i,1,m+1){
            cout<<b[i];
        }
    }
    else{
         ll b[m+1]={0};
         
        f(i,1,m+1){
            f(j,0,9){
                if(p>0&&b[i]!=9){
                    b[i]++;
                    p--;
                }
                else{
                    break;
                }
            }
        }
         f(i,1,m+1){
            cout<<b[i];
        }
        cout<<" ";
        f(i,1,m+1){
            cout<<b[i];
        }
        
    }
    
}
