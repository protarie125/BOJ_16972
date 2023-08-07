#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	random_device rd;
	mt19937_64 mt(rd());
	uniform_int_distribution<int> rng(-8140, 8140);

	for (auto i = 0; i < 814; ++i) {
		cout << rng(mt) << ' ' << rng(mt) << '\n';
	}

	return 0;
}