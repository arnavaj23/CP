//                                            ||  ॐ गं गणपतये नमः  ||

#include<bits/stdc++.h>
using namespace std; 

// debugging -------------------------------------------------------------------------------------------------------------------------------
#define LOCAL

#ifdef LOCAL
#define dbg(x) cerr << "Ln " << __LINE__ << ": " << #x << " = " << (x) << endl;
#define dbgv(vec) cerr << "Ln " << __LINE__ << ": " << #vec << " = [";for (auto &i : vec)cerr << i << " ";cerr << "]" << endl;
#define dbgvp(vec) cerr << "Ln " << __LINE__ << ": " << #vec << " = ["; for (auto &i : vec) cerr << "(" << i.first << ", " << i.second << ") "; cerr << "]" << endl;

#else
#define dbg(x)
#define dbgarr(arr)
#endif
//------------------------------------------------------------------------------------------------------------------------------------------

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef pair<ll,ll> pii ;
#define f(i,a,b) for( ll i=a;i<b;i++)
#define PB push_back
#define MP make_pair
#define all(v) (v).begin(), (v).end()
const int mod=1e9+7;

template<typename T>
void vin(ll a,vector<T> &v){
    f(i,0,a){
        T ele;
        cin>>ele;    
        v.PB(ele);
    }
}

template<typename T>
void vout(vector<T> &v){
    f(i,0,v.size()){
        cout<<v[i]<<" ";
    }
}

template <typename T>
void voutp(vector<T> &v)
{
    f(i, 0, v.size())
    {
        cout << v[i].first << " "<< v[i].second;
    }
}
//----------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------
int main(){
ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        
    }
return 0;
}
//----------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------
