// test1 - sort func
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void main() {
	vector<string> v;
	v.push_back("4");
	v.push_back("3");
	v.push_back("2");
	v.push_back("1");

	sort(v.begin(), v.end());
	for (string i : v) {
		cout << i <<'\n';
	}
	//for (int i : vec) {
	//	cout << i <<'\n';
	//	if (i == 3)  vec.
	//}
}

// test2 - unordered_map
#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

string name[3] = { "#1", "#2", "#3" };

int main() {
	unordered_map<string, int> um;

	for (int i = 0; i < 3; i++) {
		um[name[i]];
		//++um["my" + i];
	}

	unordered_map<string, int>::iterator it = um.begin();
	for (; it != um.end(); ++it) {
		cout << it->first << " : " << it->second << '\n';
	}

	cout << um.count("#4");  //0
	cout << um.count("#2");  //1
	return 0;
}


// no hashing
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";

	sort(participant.front(), participant.end());
	sort(completion.front(), completion.end());
	for (int i = 0; i < completion.size(); i++) {
		if (participant[i] != completion[i])  break;
	}
	answer = participant[i];
	return answer;
}

// hashing
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";

	unordered_map<string, int> runner;
	for (string p : participant) {
		++runner[p];
	}
	for (string c : completion) {
		--runner[c];
	}
	for (auto r : runner) {
		if (r.second)  answer = r.first;
	}

	return answer;
}