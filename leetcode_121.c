int maxProfit(int* prices, int pricesSize) {
    int min = prices[0];
    int prof = 0;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<min){
            min = prices[i];
        }
        else if(prices[i]>min){
            if(prices[i]-min>prof) prof = prices[i]-min;
        }
    }
    return prof;
}
