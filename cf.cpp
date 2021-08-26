#include<bits/stdc++.h>
using namespace std;
#define ll              long long int
#define endl            ("\n")
#define vi              vector<ll>
#define vp              vector<pair<ll,ll>>
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define space           " "
#define rep(i, a)       for (ll i=0; i<(a); i++)
#define sot(v)          sort(v.begin(),v.end())
#define rev(v)          reverse(v.begin(),v.end())
#define w(x)            ll x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define yes             cout << "YES" << endl
#define no              cout << "NO" << endl


void io(){


   

    FIO;
}
void solve(ll cnt){
    ll n{},m{},a{},b{},c{},d{},e{},ok{},flag{},k{},i{},
    j{},sum{};
    
    string s,s2;
    cin >> s;
    s2 = s;
    n = s.length();
    unordered_map<char,vi>m1,m2;
    if(n%2!=0){

       rep(i,n){
        if(s[i]!=s[(n/2)]){
            swap(s[i],s[n/2]);
            break;
        }
           
       }
    }
    rep(i,n){
        m1[s[i]].pb(i);
    }

    sort(s.begin(),s.end());
   // cout << s << endl;

    // for(auto it :m1){
    //     cout << it.first << endl;
    //     for(auto a : it.second){
    //         cout << a << space ;

    //     }
    //     cout << endl;
    // }
    // cout << endl;
    j = n-1;

    while(i<=j){
        vi v1 = m1[s[i]];
        ll a = v1[v1.size()-1];

        vi v2 = m1[s[j]];
        ll b = v2[v2.size()-1];

        m2[s[j]].pb(a);
        m2[s[i]].pb(b);

        m1[s[i]].pop_back();
        m1[s[j]].pop_back();

        i++;
        j--;
    }

    
   // cout << m1['s'][0] << endl;
    
    string ans;
    rep(i,n)
      ans.pb('.');

    for(auto it :m2){
      //  cout << it.first << endl;
        for(auto a : it.second){
           ans[a]=it.first;
          // cout << a << space;

        }
        //cout << endl;
    }
    
    //cout << ans << endl;
    rep(i,n){
        if(ans[i]=='.'){
            ok=1;
            break;
        }
    }
   // cout << ans << endl;
    cout << "Case #"<< cnt << ":" << space;

    if(ans==s2 || ok==1) 
        cout << "IMPOSSIBLE" << endl;
    else 
        cout << ans << endl;
    

   
     
}

int main()
{
    
    io();
    ll cnt{};
    w(t)
    {
     cnt++;
     solve(cnt);
    }
    
}
