//
// Created by akshat on 12/11/20.
//
constexpr int nax=2e5+6:
vector<int>st[4*nax]; int a[nax];
void build(int ss,int se,int si)
{
    if(ss==se)
    {
        st[si].eb(a[ss]); return;
    }
    int mid=(ss+se)>>1;
    build(ss,mid,2*si+1); build(mid+1,se,2*si+2);
    merge(st[2*si+1].begin(),st[2*si+1].end(),st[2*si+2].begin(),st[2*si+2].end(),back_inserter(st[si]));
}