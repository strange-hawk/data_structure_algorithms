bool binarySearch(int arr[],int s, int e, int search)
{
    if(s>e)
    {
        return false;
    }
    int middle=s+(e-s)/2;
    if( search > arr[middle])
    {
        return binarySearch(arr,middle+1,e,search);
    }
    else if(search < arr[middle])
    {
        return binarySearch(arr,s,middle-1,search);
    }
    else
    {
        return true;
    }
    
}

bool findinfinite(int arr[],int x)
{
    if(arr[0]==x)
    {
        return true;
    }
    int i=1;
    while(arr[i]<x)
    {
        i=i*2;
    }
    if(arr[i]==x)
    {
        return true;
    }
    else
    {
        return binarySearch(arr,i/2,i,x);
    }

}