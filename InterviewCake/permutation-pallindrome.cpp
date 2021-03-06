#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();
	string s  = "ivicc";
	unordered_set<int> unPaired;
	int n = s.size();
	for(char x: s) {
		if(unPaired.find(x) != unPaired.end()) {
			unPaired.erase(x);
		}
		else {
			unPaired.insert(x);
		}
	}
	unPaired.size() <= 1 ? cout << true : cout << false;

   return 0;
}