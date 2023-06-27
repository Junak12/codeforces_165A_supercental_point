#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
bool issup(vector<pair<int,int>>&v,int ind)
{
    vector<pair<int,int>>v1(v.begin(),v.end());
    bool up=false;
    bool lo=false;
    bool ri=false;
    bool le=false;
    for(int i=0;i<v.size();i++)
    {
        if(i==ind)
        {
            continue;
        }
        if(v[ind].first==v1[i].first)
        {
            if(v[ind].second>v1[i].second)
            {
                up=true;
            }
            else if(v[ind].second<v1[i].second)
            {
                lo=true;
            }
        }
        else if(v[ind].second==v1[i].second)
        {
            if(v[ind].first>v1[i].first)
            {
                ri=true;
            }
            else if(v[ind].first<v1[i].first)
            {
                le=true;
            }
        }
        if(up==true && lo==true && ri==true && le==true)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(issup(v,i)==true)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
