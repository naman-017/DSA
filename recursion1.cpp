//print name N time using recursion
void print_name(int n)
{
	if(n==0)
		return;
	cout << "Naman" << endl;
	n--;
	print_name(n);

}

//print 1 to N using recursion
void print_1_to_N(int i, int n)
{
	if(i>n)
		return;
	cout << i << endl;
	i++;
	print_1_to_N(i, n);
}

//print N to 1 using recursion
void print_N_to_1(int n)
{
	if(n<1)
		return;
	cout << n << endl;
	n--;
	print_N_to_1(n);
}

//print 1 to N using backtrack through recursion, cant use + operator
void print_1_to_N_backtrack(int n)
{
	if(n<1)
		return;
	print_1_to_N_backtrack(n-1);
	cout << n << endl;
}

//print N t 1 using backtrack through recursion, cant use - operator
void print_N_to_1_backtrack(int i, int n)
{
	if(i>n)
		return;
	print_N_to_1_backtrack(i+1, n);
	cout << i << endl;
}

//print 1 to N using backtrack
void ptr(int i, int n)
{
	if(i>n)
		return;
	ptr(i+1, n);
	cout << i << endl;
}

//sum of n terms
void sum_N_terms1(int i, int sum)
{
	if(i<1){
		cout << sum << endl;
		return;
	}
	sum_N_terms1(i-1, sum+i);
}

//sum of n terms
int sum_N_terms2(int n)
{
	if(n==0)
		return 0;
	return n+sum_N_terms2(n-1);

}

//factorial of nth term, for 0th term ans is 0
int factorial(int n)
{
	if(n==1){
		return 1;
	}
	return n*factorial(n-1);
}

//reverse an array using recursion
void reverse_array1(int arr[], int l, int r)
{
	if(l>=r)
		return;
	swap(arr[l], arr[r]);
	reverse_array1(arr, l+1, r-1);
}

//reverse an array using recursion
void reverse_array2(int arr[], int i, int n)
{
	if(i>=n/2)
		return;
	swap(arr[i], arr[n-i-1]);
	reverse_array2(arr, i+1, n-1);
}

//reverse an string using recursion
void reverse_str(string &s, int l, int r)
{
	if(l>=r)
		return;
	char temp=s[l];
	s[l]=s[r];
	s[r]=temp;
	reverse_str(s, l+1, r-1);
}

string reverseWord(string str)
    {
       if(str.size() == 0 || str.size()== 1) return str;
       return reverseWord(str.substr(1)) + str[0];
        
    }

int largest(vector<int> &arr, int n)
    {
        if(arr.size()==1)
            return arr[0];
        int p = arr[n-1];
        arr.pop_back();
        return max(largest(arr, n-1),p);
    }

//check for palindrome string using recursion
bool check_palin_str(string s, int l, int n)
{
	if(l>=n/2)
		return true;
	
	if(s[l] != s[n-l-1])
		return false;
	return check_palin_str(s, l+1, n);
}

//fibonacci array
int main()
{
	//fibonacci array
	int n;
	cin >> n;
	int arr[n+1];
	arr[0]=0;
	arr[1]=1;
	
	for(int i=2; i<n+1; i++){
		arr[i]=arr[i-1]+arr[i-2];
	}

	for(int i=0; i<n+1; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//fibonacci using recursion
int fibo(int n)
{
	if(n<=1)
		return n;
	int last=n-1;
	int slast=n-2;
	return fibo(last)+fibo(slast);
}


//tower of hanoi
long long cnt=0;
    long long f(int n, int from, int to, int aux)
    {
        if(n>0){
            f(n-1, from, aux, to);
            cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
            cnt++;
            f(n-1, aux, to, from);
        }
    }
    long long toh(int N, int source, int dest, int aux){
        f(N, source, dest, aux);
        return cnt;
    }
