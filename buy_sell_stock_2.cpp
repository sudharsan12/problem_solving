//here you can buy multiple stocks  but you should buy the stock before you sell your old stock

#include<bits/stdc++.h>
using namespace std;


// 1 -->buy
// 2 -->not buy



//recursion solution
//time complexcity = O(2)^n
//sp=O(N)
int recursion_fun(vector<int>stocks,int n,int index,int buy)
{
   if(index==n)
	   return 0;
   int profit;
   if(buy)
   {
   profit=max(-stocks[index]+recursion_fun(stocks,n,index+1,0),0+recursion_fun(stocks,n,index+1,1));//max(if you buy the stock,if not buy the stock)
   }else
   {
   profit=max(stocks[index]+recursion_fun(stocks,n,index+1,1),0+recursion_fun(stocks,n,index+1,0));//max(if you sell the stock,if not sell the stock)
   }
return profit;
}


//time complexcity = O(2 X N)
//sp=O(NX2)+O(n)

int memoization_fun(vector<int>stocks,int n,int index,int buy,vector<vector<int>>dp)
{
   if(index==n)
	   return 0;
   if(dp[index][buy]!=-1)
       return dp[index][buy];
	   

   int profit;
   if(buy)
   {
   profit=max(-stocks[index]+recursion_fun(stocks,n,index+1,0),0+recursion_fun(stocks,n,index+1,1));//max(if you buy the stock,if not buy the stock)
   }else
   {
   profit=max(stocks[index]+recursion_fun(stocks,n,index+1,1),0+recursion_fun(stocks,n,index+1,0));//max(if you sell the stock,if not sell the stock)
   }
return dp[index][buy]=profit;

}

//time complexcity = O(n)
//sp=O(N*2)


int tabulation_fun(vector<int>stocks,int n)
{
vector<vector<int>>dp(n+1,vector<int>(2,0));

dp[n][0]=dp[n][1]=0;
for(int index=n-1;index>=0;index--)
{
	for(int buy=0;buy<2;buy++)
	{
		int profit;
   if(buy)
   {
   profit=max(-stocks[index]+dp[index+1][0],0+dp[index+1][1]);//max(if you buy the stock,if not buy the stock)
   }else
   {
   profit=max(stocks[index]+dp[index+1][1],0+dp[index+1][0]);//max(if you sell the stock,if not sell the stock)
   }
		dp[index][buy]=profit;
       }
}

return dp[0][1];
}


//time complexcity = O(n)
//sp=O(1)
int spaceopti_fun(vector<int>stocks,int n)
{
vector<int>cur(2,0),prv(2,0);

prv[0]=prv[1]=0;

for(int ind=n-1;ind>=0;ind--)
{
for(int buy=0;buy<2;buy++)
{
int profit;
   if(buy)
   {
   cur[buy]=max(-stocks[ind]+prv[0],0+prv[1]);//max(if you buy the stock,if not buy the stock)
   }else
   {
   cur[buy]=max(stocks[ind]+prv[1],0+prv[0]);//max(if you sell the stock,if not sell the stock)
   }
}
		prv=cur;

}
return prv[1];
}

//time complexcity = O(n)
//sp=O(1)

int mostopt_fun(vector<int>stocks,int n)
{
	int prv_buy,prv_notbuy,cur_buy,cur_notbuy;

	prv_buy=prv_notbuy=0;

	for(int ind=n-1;ind>=0;ind--)
	{
		cur_buy=max(-stocks[ind]+prv_notbuy,0+prv_buy);
		cur_notbuy=max(stocks[ind]+prv_buy,0+prv_notbuy);

		prv_buy=cur_buy;
		prv_notbuy=cur_notbuy;
	}
	return prv_buy;
}

int maximum_profit(vector<int>stocks,int n)
{
	vector<vector<int>>dp(n,vector<int>(2,-1));
	//return recursion_fun(stocks,n,0,1);   //(stocks array,array_len,index,buy)
	//return memoization_fun(stocks,n,0,1,dp);   //(stocks array,array_len,index,buy,dp_table)
	//return tabulation_fun(stocks,n);
        //return spaceopti_fun(stocks,n);
	return mostopt_fun(stocks,n);
}



int main()
{
	int n;
	cin>>n;
	vector<int>stocks(n);
	for(int i=0;i<n;i++)
		cin>>stocks[i];

	int res=maximum_profit(stocks,n);

	cout<<"the maximum profit is "<<res<<endl;
}
