void findMedian(int arr[], int n){
    priority_queue<int,vector<int>,greater<int>> min;
    priority_queue<int> max;
    max.push(arr[0]);
    int mid = arr[0];
    cout<<max.top()<<endl;
    for(int i=1;i<n;i++){
        if(max.size()>min.size()){
            if(arr[i]<mid){
                min.push(max.top());
                max.pop();
                max.push(arr[i]);
            }else
                min.push(arr[i]);
            mid = (max.top()+min.top())/2;
        }else if(max.size()==min.size()){
            if(arr[i]<min.top()){
                max.push(arr[i]);
                mid = max.top();
            }else{
                min.push(arr[i]);
                mid = min.top();
            }
        }else{
            if(arr[i]>mid){
                max.push(min.top());
                min.pop();
                min.push(arr[i]);
            }else
                max.push(arr[i]);
            mid = (max.top()+min.top())/2;
        }
        cout<<mid<<endl;
    }
}

