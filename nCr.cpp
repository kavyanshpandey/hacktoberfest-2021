#include <bits/stdc++.h>
using namespace std;

int binomialCoeff(int N, int K)
{
	if (K > N)
		return 0;
	if (K == 0 || K == N)
		return 1;

	return binomialCoeff(N - 1, K - 1)
		+ binomialCoeff(N - 1, K);
}


int main()
{
	int N = 5, K = 2;
	cout << "Value of C(" << N << ", " << K << ") is "
		<< binomialCoeff(N, K);
	return 0;
}
