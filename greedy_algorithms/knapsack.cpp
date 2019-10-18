int knapsack(int* weights, int* values, int n, int maxWeight){
    if(n<=0||maxWeight<=0){
        return 0;
    }
    
    if(weights[0]>maxWeight){
        return knapsack(weights+1,values+1,n-1,maxWeight);
    }
    
    
    int a = knapsack(weights+1,values+1, n-1, maxWeight-weights[0]) + values[0];
    int b = knapsack(weights+1,values+1, n-1, maxWeight);
    
    return max(a,b);
}
