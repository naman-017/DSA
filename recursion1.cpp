void print_name(int n)
{
	if(n==0)
		return;
	cout << "Naman" << endl;
	n--;
	print_name(n);

}

void print_1_to_N(int i, int n)
{
	if(i>n)
		return;
	cout << i << endl;
	i++;
	print_1_to_N(i, n);
}

void print_N_to_1(int n)
{
	if(n<1)
		return;
	cout << n << endl;
	n--;
	print_N_to_1(n);
}

void print_1_to_N_backtrack(int n)
{
	if(n<1)
		return;
	print_1_to_N_backtrack(n-1);
	cout << n << endl;
}

void print_N_to_1_backtrack(int i, int n)
{
	if(i>n)
		return;
	print_N_to_1_backtrack(i+1, n);
	cout << i << endl;
}

void ptr(int i, int n)
{
	if(i>n)
		return;
	
	ptr(i+1, n);
	cout << i << endl;
}

void sum_N_terms1(int i, int sum)
{
	if(i<1){
		cout << sum << endl;
		return;
	}
	sum_N_terms1(i-1, sum+i);
}

int sum_N_terms2(int n)
{
	if(n==0)
		return 0;
	return n+sum_N_terms2(n-1);

}

int factorial(int n)
{
	if(n==1){
		return 1;
	}
	return n*factorial(n-1);
}

void reverse_array1(int arr[], int l, int r)
{
	if(l>=r)
		return;
	swap(arr[l], arr[r]);
	reverse_array1(arr, l+1, r-1);
}
