/* we consider the best profit is d-a = (b-a) + (c-b) + (d-c), with sequence is `a<=b<=c<=d`, this is the key, because we cant sell and buy in the same day.*/
int maxProfit(vector<int> &prices) {
    int ret = 0;
    for (size_t p = 1; p < prices.size(); ++p) 
      ret += max(prices[p] - prices[p - 1], 0);    
    return ret;
}

