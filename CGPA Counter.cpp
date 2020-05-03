#include<stdio.h>
#include<string.h>
#include<math.h>
/* *********************************************************** */

#include<bits/stdc++.h>
using namespace std;

/* *********************************************************** */

/* ******************* Type Define *************************** */

#define sc              scanf
#define pr              printf
#define ll              long long
#define ull             unsigned long long
#define FastIO	        ios_base::sync_with_stdio(false); cin.tie(NULL)
#define so(a,n)         sort(a,a+n)
#define br              puts("")
#define pb(a)           push_back(a)
#define pbk()           pop_back()
#define ln              length()
#define sz              size()
#define mset(v,d)       memset(v, d, sizeof(v))
#define rn              return
#define ps()            pr(" ")


/* ******************* int scan *************************** */

#define sc1(a)          sc("%d",&a)
#define sc2(a,n)        sc("%d%d",&a,&n)
#define sc3(a,n,m)      sc("%d%d%d",&a,&n,&m)


/* ******************* long long scan *************************** */

#define scl1(a)          sc("%lld",&a)
#define scl2(a,n)        sc("%lld%lld",&a,&n)
#define scl3(a,n,m)      sc("%lld%lld%lld",&a,&n,&m)

/* ******************* File I/O *************************** */

#define fin             freopen("in.txt","r",stdin)
#define fou             freopen("ou.txt","w",stdout)

/* ******************* print int *************************** */

#define prs(a)          pr("%d ",a)
#define pr1(a)          pr("%d\n",a)
#define pr2(a,n)        pr("%d %d\n",a,n)
#define pr3(a,n,m)      pr("%d %d %d\n",a,n,m)

/* ******************* print int *************************** */

#define prls(a)          pr("%lld ",a)
#define prl1(a)          pr("%lld\n",a)
#define prl2(a,n)        pr("%lld %lld\n",a,n)
#define prl3(a,n,m)      pr("%lld %lld %lld\n",a,n,m)

/* ******************* Loop *************************** */

#define For(i,lo,n) 	for(int i = lo; i < n; i++)
#define Forr(i,lo,n) 	for(int i = n-1; i >= lo; i--)
#define Frl(i,n) 	    for(int i = 0; i < n; i++)

/* ******************* array input *************************** */

#define acin(a,n)  	    for(int i = 0; i < n; i++)  cin>>a[i]
#define ain(a,n)  	    for(int i = 0; i < n; i++)  scanf("%d",&a[i])
#define aou(a,n)        for(int i = 0; i < n; i++)  pr("%d ",a[i])


typedef vector<int> vi;
typedef vector <ll> vll;
typedef map<string, int> msi;
typedef map<int, int> mii;

//*************************************************************/

ll n,m,i,j,o=0;

void fm()
{
#ifndef ONLINE_JUDGE
    fin;
    // fou;
#endif
}


typedef struct pai
{
    int x;
    ull y;
    double va;

} pa;
bool acompare(pa lhs, pa rhs)
{
    return lhs.va<rhs.va;
}
//bool chk(string s)
//{
//
//    return a&&b&&c?1:0;
//}
map<ll,int>ma;
int gen(vi v)
{
    int len=v.size();
    int de=0;
    For(i,0,len)
    de+=(pow(2,(len-i))*v[i]);

    return de;
}
string res;
int bi(int num)
{
    pr("pppppppppp");
    int one=0;
    pr1(num);
    while(num)
    {

        int mo=num%2;
        if(mo)
        {
            //res.pb('a');
            one++;
        }
        //else res.pb('b');
        num/=2;
    }
    return one;
}

int main()
{

    int n;
    pr("Total Course or semester: ");
    sc1(n);
    double total_gp=0,gp,cre,t_cre=0;
    pr("Enter Credit-------- Enter SGPA\n");
    For(i,0,n)
    {
        cin>>cre>>gp;
        t_cre+=cre;
        total_gp+=(cre*gp);
    }
    cout<<total_gp<<" "<<t_cre;br;

    double cg = (double)total_gp/(double)t_cre;
    cout<<cg;br;
    pr("CGPA: %.2f\n",cg);br;br;br;
    getchar();
    pr("press Y to calculate again");
    getchar();
    char c =getchar();
    if(c=='Y')
        main();



}

