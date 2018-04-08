#include<iostream>
#include<cmath>
#include<time.h>
void func(int n,int m) 
{
	int *a = new int[n];
	int *b = new int[m];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
	for (int i = 0; i < m; i++)
	{
		b[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << "  ";
		
	}
	std::cout << std::endl;
	for (int i = 0; i < m; i++)
	{
		std::cout << std::endl;
		std::cout << b[i] << " ";
		
	}

}
int main()
{
	int n, m;
	std::cin >> n >> m;
	srand(time(0));
	func(n, m);
	//std::cout << func(n, m);
	system("pause");
	return 0;
}