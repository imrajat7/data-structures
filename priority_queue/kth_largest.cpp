int kthLargest (vector<int> arr, int n, int k){
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int i=0;
    for(i=0;i<k-1;i++){
        pq.pop();
    }
    return pq.top();
}

