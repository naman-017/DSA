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
