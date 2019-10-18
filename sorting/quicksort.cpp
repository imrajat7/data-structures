void swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
int partition(int input[],int si,int ei){
    int count = si;
    int pivot = input[si];
    for(int i=si;i<=ei;i++)
    {
        if(input[i]<pivot)
            count++;
    }
    swap(&input[si],&input[count]);
    int i = si;
    int j = ei;
    while(i<count||j>count){
        if(input[i]<pivot)
            i++;
        else if(input[j]>=pivot)
            j--;
        else{
            swap(&input[i],&input[j]);
            i++;
            j--;
        }
    }
    return count;
}
void quick_sort(int input[],int si,int ei){
    if(si==ei||si>ei)
        return;
    int pi = partition(input,si,ei);
    quick_sort(input,si,pi-1);
    quick_sort(input,pi+1,ei);
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    if(size==1)
        return;
    quick_sort(input,0,size-1);
}
