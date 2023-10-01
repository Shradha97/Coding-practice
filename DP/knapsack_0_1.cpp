#include <cstring>

//MEMOIZATION
int static t[1001][1001];

int solution(vector<int> &values, vector<int> &weights, int n, int w){
	if(n==0 || w==0){
			return 0;
	}
	if(t[n][w] != -1){
		return t[n][w];
	} 
	
	if(weights[n-1]<=w){
		return t[n][w] = max(values[n-1]+maxProfit(values, weights, n-1, w-weights[n-1]),
						maxProfit(values, weights, n-1, w));
	}
	else{
		return t[n][w] = maxProfit(values, weights, n-1, w);
	}
}

// memoization 
// memset cannot be set outside a function
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	memset(t, -1, sizeof(t));
	return solution(values, weights, n, w);
}



//***************************


//BOTTOM UP (TABULATION)
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	for(int i=0; i<n+1; i++){
		t[i][0]=0;
	}
	for(int j=0; j<w+1;j++){
		t[0][j]=0;
	}

	for(int items=1; items<n+1; items++){
		for(int cap=1; cap<w+1; cap++){
			if(weights[items-1]<=cap){
				t[items][cap]=max(values[items-1]+t[items-1][cap-weights[items-1]],
						t[items-1][cap]);
			}
			else{
				t[items][cap]=t[items-1][cap];
			}
		}
	}

	return t[n][w];
}