//3/4 testcase pass

#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
ll fp(ll a,ll n){
    ll res=1;
    while(n){
        if(n&1) res=res*a;
        a=a*a;
        n>>=1;
    }
    return res;
}
int main(void){
    int t;scanf("%d",&t);
    while(t--){
        ll n,k;scanf("%lld%lld",&n,&k);
        if(n==2&&k==3) printf("NO\n");
        else if(n>31) printf("YES %lld\n",n-1ll);
        else{
            ll a=2;
            int flag=0;
            for(ll i=1;i<=n;i++){
                ll len=n-i;
                ll block=a*a-a*2ll+1ll;
                //printf("%lld\n",block);
                ll k1=(fp(4ll,i)-1ll)/3ll;
                ll k2=(fp(4ll,len)-1ll)/3ll;
                //printf("%lld %lld\n",k1,k2);
                if(k<=k1+k2*block){
                    flag=1;
                    printf("YES %lld\n",len);
                    break;
                }
                //printf("%lld\n",k1+k2*block);
                a*=2ll;
            }
            if(flag==0) printf("NO\n");
        }
    }
    return 0;
}
