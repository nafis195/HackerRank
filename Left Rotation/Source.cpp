// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// HackerRank - Left Rotation
// Problem Statement - https://www.hackerrank.com/challenges/array-left-rotation/problem
// Main.cpp


#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	int n, d, userInput, temp, i = 0;
	queue <int> arrayQueue;
	cin >> n >> d;

	while (i < n)
	{
		cin >> userInput;
		arrayQueue.push(userInput);
		i++;
	}

	i = 0;

	while (i < d)
	{
		temp = arrayQueue.front();
		arrayQueue.pop();
		arrayQueue.push(temp);
		i++;
	}

	while (!arrayQueue.empty())
	{
		cout << arrayQueue.front() << ' ';
		arrayQueue.pop();
	}

	return 0;
}