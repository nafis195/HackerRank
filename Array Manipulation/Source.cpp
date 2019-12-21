// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// HackerRank - Array Manipulation
// Problem Statement - https://www.hackerrank.com/challenges/crush/problem
// Main.cpp


#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
	long long int n, m, a, b, k;
	cin >> n >> m;

	long long int Array[n] = { 0 };

	for (long long int i = 0; i < m; i++)
	{
		cin >> a >> b >> k;
		if (a != b)
		{
			for (long long int j = a - 1; j < b; j++)
			{
				Array[j] = Array[j] + k;
			}
		}
		else
		{
			Array[a - 1] = Array[a - 1] + k;
		}
	}
	cout << *max_element(Array, Array + n) << endl;

	return 0;
}