/* 122. Best time to buy and sell stock: Say you have an array prices for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again). */ 

int maxProfit(int* prices, int pricesSize){
    int n = pricesSize;
    int diff = 0;
    for(int i=1; i < n; i++){
        if(prices[i] > prices[i-1]) {
            diff += prices[i] - prices[i-1];
        }
            
    }
    return diff;
}
