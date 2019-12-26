// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Hackerrank - Queue using Two Stacks
// Problem Statement - https://www.hackerrank.com/challenges/queue-using-two-stacks/problem
// Main.cpp


#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	queue <long long int> q;
	int type, query;
	long long int x;

	cin >> query;
	for (int i = 0; i < query; i++)
	{
		cin >> type;
		if (type == 1)
		{
			cin >> x;
			q.push(x);
		}
		else if (type == 2)
			q.pop();
		else if (type == 3)
		{
			cout << q.front() << endl;
		}
	}

	return 0;
}