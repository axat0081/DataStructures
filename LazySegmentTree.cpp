//
// Created by akshat on 12/11/20.
//
constexpr int nax=2e5+6;
int st[4*nax],lazy[nax]; int a[nax];
void build(int ss,int se,int si)
{
    if(ss==se){ st[si]=a[ss]; return; }
    int mid=(ss+se)>>1;
    build(ss,mid,2*si+1); build(mid+1,se,2*si+2);
}
void update(int ss,int se,int si,int l,int r,int x)
{
    if(lazy[si]!=0)
    {
        //apply changes to node si
        //
        //
        if(ss!=se)
        {
          lazy[2*si+1]+=lazy[si]; lazy[2*si+2]+=lazy[si];
        }
        lazy[si]=0;
    }
    if(ss>r||se<l||ss>se) return;
    if(l<=ss and se<=r)
    {
        //apply change of x to node si
        //
        //
        if(ss!=se)
        {
            lazy[2*si+1]+=x; lazy[2*si+2]+=x;
        }
        return;
    }
    int mid=(ss+se)>>1;
    update(ss,mid,2*si+1,l,r,x); update(mid+1,se,2*si+2,l,r,x);
    st[si]=st[2*si+1]+st[2*si+2];
}
int query(int ss,int se,int si,int l,int r)
{
    if(lazy[si]!=0)
    {
        //apply changes to node si
        //
        //
        if(ss!=se)
        {
            lazy[2*si+1]+=lazy[si]; lazy[2*si+2]+=lazy[si];
        }
        lazy[si]=0;
    }
    if(l<=ss and se<=r)
    {
        return st[si];
    }
    int mid=(ss+se)>>1;
    return query(ss,mid,2*si+1,l,r)+query(mid+1,se,2*si+2,l,r);
}
