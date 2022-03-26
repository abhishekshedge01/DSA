#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector <string>& board, int col, int row, int n)
{
	int tempr = row;
	int tempc = col;
	while (tempc >= 0)
	{
		if (board[tempr][tempc] == '1')
		{
			return false;
		}
		--tempc;
	}

	tempr = row;
	tempc = col;
	while (tempc >= 0 && tempr >=0)
	{
		if (board[tempr][tempc] == '1')
		{
			return false;
		}
		--tempc;
		--tempr;
	}

	tempr = row;
	tempc = col;
	while (tempc >= 0 && tempr <n)
	{
		if (board[tempr][tempc] == '1')
		{
			return false;
		}
		--tempc;
		++tempr;
	}
	return true;
}

void nQueen(vector <vector <string>>& vec, vector <string>& board, int col, int n)
{
	if (col == n)
	{
		for (int i = 0; i < board.size(); ++i)
		{
			cout << board[i] << endl;
		}
		cout << endl;
		return;
	}
	for (int row = 0; row < n; ++row)
	{
		if (isSafe(board, col, row, n))
		{
			board[row][col] = '1';
			nQueen(vec, board, col+1, n);
			board[row][col] = '0';
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector <vector <string>> vec;
	vector <string> board;
	string str = "";
	for (int i = 0; i < n; ++i)
	{
		str += '0';
	}
	for (int i = 0; i < n; ++i)
	{
		board.push_back(str);
	}
	nQueen(vec, board, 0, n);
}
