int squareroot(int x)
{
    if(x==0 || x==1)
    {
        return x;
    }
    int start=1,end=x;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(mid*mid == x)
        {
            return mid;
        }
        if(mid*mid < x)
        {
            start=mid+1;
            ans=mid;
        }
        else
        {
            end=mid-1;
        }
    }

}