//                                            ||  ॐ गं गणपतये नमः  ||

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vi;
typedef vector<vector<int>> vvi;
typedef pair<long long,int> pii ;
#define f(i,a,b) for( ll i=a;i<b;i++)
#define PB push_back
#define MP make_pair

template<typename T>
void vin(ll a,vector<T> &v){
    ll x=0;
    f(i,0,a){
        T ele;
        cin>>ele;
        x+=ele;
        v.PB(x);
    }
}

template<typename T>
void vout(vector<T> &v){
    f(i,0,v.size()){
        cout<<v[i]<<" ";
    }
}
vector<ll> findFactors(int n) {
    vector<ll> factors;
   
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n / i); 
            }
        }
    }
    
    return factors;
}
int main(){
ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    
    }
return 0;
}
