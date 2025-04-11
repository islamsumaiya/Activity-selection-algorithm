#include<bits/stdc++.h>
using namespace std;
struct activity
{

    int star;
    int endd;
};
bool comp(activity p,activity q)
{
    return p.endd <q.endd;
}
int main()
{
    int n=5;
    activity activites[n];
    activites[0].star =1;
    activites[0].endd =3;

    activites[1].star =2;
    activites[1].endd =5;

    activites[2].star =3;
    activites[2].endd=4;

    activites[3].star =3;
    activites[3].endd =6;

    activites[4].star =5;
    activites[4].endd =7;
    sort (activites,activites+n,comp);
    cout<<"{" <<activites[0].star <<"," <<activites[0].endd <<"}"<<endl;
    int currentEnd=activites[0].endd;
    for(int i=1; i<n; i++)
    {
        if(currentEnd <=activites[i].star)
        {
            cout<<"{" <<activites[i].star <<"," <<activites[i].endd <<"}"<<endl;
            currentEnd=activites[i].endd;
        }
    }
    return 0;
}

