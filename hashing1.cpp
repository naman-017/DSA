/*
input
5
1 3 2 1 3  array elements with size N
5 query
1
4
2
3
12

we will create a hash array with the size of the maximum_query + 1
default : all index = 0 for the hash array
we will run a loop for N times
next, will increment the index(denoting the array element) value by 1 in the hash array
last, will take input the queries and simply print the index query from the hash array

output
2
0
1
2
0
  */

int main()
{
  int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	int hash[13]={0};
	
	for(int i=0; i<n; i++){
		hash[arr[i]]+=1;
	}

	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		cout << hash[x] << endl;
	}
}
