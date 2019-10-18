void merge(int input[],int si,int ei){
    int mid = (si+ei)/2;
    int a[ei-si+1];
    int i = si,k=0;
    int j = mid+1;
    while(i<=mid&&j<=ei)
    {
        if(input[i]<=input[j])
            a[k++] = input[i++];
        else
            a[k++] = input[j++];
    }
    while(i<=mid)
        a[k++] = input[i++];
    while(j<=ei)
        a[k++] = input[j++];
    for(int i=si;i<=ei;i++)
        input[i]=a    [i-si];
}
void merge_sort(int input[],int si,int ei){
    if(si==ei||si>ei)
        return;
    int mid = (si+ei)/2;
    merge_sort(input,si,mid);
    merge_sort(input,mid+1,ei);
    merge(input,si,ei);
}
void mergeSort(int input[], int size){
	// Write your code here
    if(size==1)
        return;
    merge_sort(input,0,size-1);
}
