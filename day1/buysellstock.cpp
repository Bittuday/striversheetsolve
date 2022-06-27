/*Problem Statement
You are given an array/list 'prices' where the elements of the array represent the prices of the stock as they were yesterday and
indices of the array represent minutes. Your task is to find and return the maximum profit you can make by buying and selling the stock. 
You can buy and sell the stock only once.*/
int maximumProfit(vector<int> &p){
   int mprofit=0;
    int minprice=INT_MAX;
    for(int i=0;i<p.size();i++)
    {
        minprice=min(minprice,p[i]);
        mprofit=max(mprofit,p[i]-minprice);
    }
    return mprofit;
}
