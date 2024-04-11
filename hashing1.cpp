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


int main()
{
	/*
abcdabehf
5 : queries
a
g
h
b
c
output:
a = 2
g = 0
h = 1
b = 2
c = 1

 */
	string s;
	cin >> s;
	int hash[26]={0};
	for(int i=0; i<s.size(); i++){
		hash[s[i]-'a']++;
	}

	int q;
	cin >> q;
	while(q--){
		char ch;
		cin >> ch;
		cout << ch << " = " << hash[ch-'a'] << endl;
	}
}


int main()
{
	/*
 	hash array for all 256 characters
abcd,,,,abehf
6
a
g
h
b
c
,
output:
a = 2
g = 0
h = 1
b = 2
c = 1
, = 4
 	*/
	string s;
	cin >> s;
	int hash[256]={0};
	for(int i=0; i<s.size(); i++){
		hash[s[i]]++;
	}

	int q;
	cin >> q;
	while(q--){
		char ch;
		cin >> ch;
		cout << ch << " = " << hash[ch] << endl;
	}
}


/*we can also use "map<key, value>" or "unordered_map<key, value>" from C++ STL
map takes O(log N) time complexity for best, average and worst case
unordered_map takes O(1) for best and average TC but O(N) for the worst case
*/
int n;
cin >> n;
vactor<int> v(n);
unordered_map<int, int> m1;
map<int, int> m2;
for(int i=0; i<n; i++){
	cin >> v[i];
	m[v[i]]++;
}
for(auto it: m1){
	cout << it.first << " -> " << it.second << endl;
}
