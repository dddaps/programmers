// hashing
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution_cmp(vector<string> phone_book);
bool solution_sort(vector<string> phone_book);
bool solution_hash(vector<string> phone_book);

int main() {
	vector<string> phone_book[4];

	phone_book[0] = { "1192","119" };
	phone_book[1] = { "12","123","1235","567","88" };
	phone_book[2] = { "123","456","789" };
	phone_book[3] = {"119", "97674223", "1195524421"};

	solution_sort(phone_book[1]);

	for (int i = 0; i < 4; i++) {
		cout << solution_cmp(phone_book[i]) << '\n';
		cout << solution_sort(phone_book[i]);
	}
	return 0;
}

bool solution_cmp(vector<string> phone_book) {
	bool answer = true;

	for (string cmp : phone_book) {
		for (string str : phone_book) {
			if (str.size() <= cmp.size())  continue;
			if (cmp == str.substr(0, cmp.size()))  return false;
		}
	}
	return answer;
}

bool solution_sort(vector<string> phone_book) {
	bool answer = true;

	sort(phone_book.begin(), phone_book.end());

	for (int i = 0; i < phone_book.size(); i++) {
		if (phone_book[i].size() >= phone_book[i + 1].size())  continue;
		if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size()))  return false;
	}
	return answer;
}

bool solution_hash(vector<string> phone_book) {
	bool answer = true;



	return answer;
}