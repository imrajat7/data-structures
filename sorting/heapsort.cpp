void insert(int input[],int n){
    for(int size=2;size<=n;size++){
        int childIndex = size - 1;
        while(childIndex>0){
            int parentIndex = (childIndex-1)/2;
            if(input[childIndex]<input[parentIndex]){
                int temp = input[childIndex];
                input[childIndex] = input[parentIndex];
                input[parentIndex] = temp;
            }
            childIndex = parentIndex;
        }
    }
}

void removeMin(int input[],int n){
    int size = n;
    while(size>1){
        int temp = input[0];
        input[0] = input[size-1];
        input[size-1] = temp;
        size--;
        int minIndex;
        int parentIndex = 0;
        int child1 = 2*parentIndex+1;
        int child2 = 2*parentIndex+2;
        while(child1<size){
            minIndex = parentIndex;
            if(input[minIndex]>input[child1])
                minIndex=child1;
            if(child2<size&&input[minIndex]>input[child2])
                minIndex = child2;
            if(minIndex == parentIndex)
                break;
            int temp = input[minIndex];
            input[minIndex] = input[parentIndex];
            input[parentIndex] = temp;
            parentIndex = minIndex;
            child1 = 2*parentIndex + 1;
            child2 = 2*parentIndex + 2;
        }
    }
}

void inplaceHeapSort(int input[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * Taking input and printing output is handled automatically.
     */
    insert(input,n);
    removeMin(input,n);
}
