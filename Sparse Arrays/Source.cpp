// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// HackerRank - Sparse Arrays
// Problem Statement - https://www.hackerrank.com/challenges/sparse-arrays/problem
// Main.cpp


#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	int n, q, count = 0;
	queue <int> answer;

	cin >> n;
	string stringArray[n];
	for (int i = 0; i < n; i++)
		cin >> stringArray[i];

	cin >> q;
	string queryArray[q];
	for (int i = 0; i < q; i++)
		cin >> queryArray[i];

	for (int i = 0; i < q; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (queryArray[i] == stringArray[j])
				count++;
		}
		answer.push(count);
		count = 0;
	}

	while (!answer.empty())
	{
		cout << answer.front() << endl;
		answer.pop();
	}

	return 0;
}