#include<bits/stdc++.h>
using namespace std;


// ------------For declaration-----------
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
typedef pair<char,ll>pcl;
typedef pair<char,char>pcc;
typedef pair<string,string>pss;
typedef pair<double ,double >pdd;
typedef pair<ll,char>plc;
typedef pair<ull,ull>puu;
typedef vector<int>vi;
typedef vector<ll>vll;
typedef vector<char>vc;
typedef vector<float>vf;
typedef vector<double>vd;
typedef vector<ull>vu;
typedef vector<vi>vvi;
typedef vector<pii>vpii;
typedef vector<pll>vpll;
typedef vector<pcl>vpcl;
typedef vector<pcc>vpcc;
typedef vector<pss>vpss;
typedef vector<pdd>vpdd;
typedef vector<plc>vplc;
typedef map<int,int>mii;
typedef map<ll,ll>mll;
typedef map<char,ll>mcl;
typedef map<ll,char>mlc;
typedef map<string,string>mss;
typedef map<string,ll>msl;
typedef map<ll,string>mls;
typedef map<double,double >mdd;
typedef map<string,double >msd;
typedef map<double ,string>mds;
typedef map<ull,ull>muu;
typedef map<string,ull>msu;
typedef map<ull,string>mus;
typedef unordered_map<int,int>umii;
typedef unordered_map<char,ll>umcl;
typedef unordered_map<ll,char>umlc;
typedef unordered_map<ll,ll>umll;
typedef unordered_map<string,string>umss;
typedef unordered_map<string,ll>umsl;
typedef unordered_map<ll,string>umls;
typedef unordered_map<double,double >umdd;
typedef unordered_map<string,double >umsd;
typedef unordered_map<double ,string>umds;
typedef unordered_map<char,ll>umcl;
typedef unordered_map<ll,char>umlc;
typedef unordered_map<ull,ull>umuu;
typedef unordered_map<string,ull>umsu;
typedef unordered_map<ull,string>umus;
typedef multimap<int,int>mmii;
typedef multimap<ll,ll>mmll;
typedef multimap<char,ll>mmcl;
typedef multimap<ll,char>mmlc;
typedef multimap<string,string>mmss;
typedef multimap<string,ll>mmsl;
typedef multimap<ll,string>mmls;
typedef multimap<double,double >mmdd;
typedef multimap<string,double >mmsd;
typedef multimap<double ,string>mmds;
typedef multimap<ull,ull>mmuu;
typedef multimap<string,ull>mmsu;
typedef multimap<ull,string>mmus;
typedef unordered_multimap<int,int>ummii;
typedef unordered_multimap<ll,ll>ummll;
typedef unordered_multimap<char,ll>ummcl;
typedef unordered_multimap<ll,char>ummlc;
typedef unordered_multimap<string,string>ummss;
typedef unordered_multimap<string,ll>ummsl;
typedef unordered_multimap<ll,string>ummls;
typedef unordered_multimap<double,double >ummdd;
typedef unordered_multimap<string,double >ummsd;
typedef unordered_multimap<double ,string>ummds;
typedef unordered_multimap<char,ll>ummcl;
typedef unordered_multimap<ll,char>ummlc;
typedef unordered_multimap<ull,ull>ummuu;
typedef unordered_multimap<string,ull>ummsu;
typedef unordered_multimap<ull,string>ummus;
typedef set<int>si;
typedef set<ll>sll;
typedef set<ull>su;
typedef set<char>sc;
typedef set<float>sf;
typedef set<double>sd;
typedef unordered_set<int>usi;
typedef unordered_set<ll>usll;
typedef unordered_set<char>usc;
typedef unordered_set<float>usf;
typedef unordered_set<double>usd;
typedef unordered_set<ull>usu;
typedef multiset<int>msi;
typedef multiset<ll>msll;
typedef multiset<ull>msul;
typedef multiset<char>msc;
typedef multiset<float>msf;
typedef multiset<double>msdu;
typedef unordered_multiset<int>umsi;
typedef unordered_multiset<ll>umsll;
typedef unordered_multiset<ull>umsul;
typedef unordered_multiset<char>umsc;
typedef unordered_multiset<float>umsf;
typedef unordered_multiset<double>umsdu;


//-------loops----------

#define forf(i,j,k) for(ll i=j;i<k;++i)
#define forfe(i,j,k) for(ll i=j;i<=k;++i)
#define forr(i,j,k) for(ll i=j;i>=k;--i)
#define forsq(i,j,k) for(ll i=j;i*i<=k;++i)
#define forch(i,j,k) for(ll i=j;i<=j;++i)
#define foreach(i,j) for(auto &i:j)





//---------sort------------
#define trav(v) v.begin(),v.end()
#define trava(arr,n) arr,arr+n
#define sortv(v) sort(trav(v))
#define sorta(arr,n) sort(trava)
#define revv(v) reverse(trav(v))
#define reva(arr,n) reverse(trava)

#define reset(a,b) memset(a,b,sizeof(a))

// ----------For Multiple Test Cases---------
#define test() long t; cin>>t; while(t--)

//--------Conversion------------
inline string IntToString(ll a)
{
    char x[100007];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

inline ll StringToInt(string a)
{
    char x[100007];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}
inline string uppercase(string s)
{
    ll n = s.size();
    forf(i,0,n)
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
    return s;
}

inline string lowercase(string s)
{
    ll n = s.size();
    forf(i,0,n)
    if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 'a';
    return s;
}


int main()
{
    test()
    {
        
    }
    return 0;
}
