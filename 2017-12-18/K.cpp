#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s; cin >> s;

	if(s.find("ACM") != string::npos) {
		cout << "Fun!" << endl;
	} else {
		cout << "boring..." << endl;
	}
	
	return 0;
}