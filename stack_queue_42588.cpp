#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<int> solution(vector<int> heights);


void main() {
	vector<int> heights, result;

	heights = { 1,5,3,6,7,6,5 };

	//result = heights;
	//result.pop_back();
	//cout << heights.size() << ":" << result.size();  // ��������

	result = solution(heights);

	for (int r : result)  cout << r << " : ";

}

// i�ڸ��� ���� �� �� ���� �� => ������ �ʾƵ� ��
vector<int> solution(vector<int> heights) {
	vector<int> answer ;  // answer(size, 0) �� �ʱ�ȭ ����

	answer.push_back(0);

	int t = heights.size();
	for (int i = 0; i < t; i++) {
		for (int j = i - 1; j > -1; j--) {
			if (heights[j] > heights[i]) {
				answer.push_back(j+1);
				break;
			}
			else if (j==0){
				answer.push_back(0);
			}
		}
	}

	return answer;
}

// �ڿ��� ���� �� - ������ �ؼ��� �״�� ����
//vector<int> solution(vector<int> heights) {
//	vector<int> answer , ans;
//
//	int t = heights.size();
//	while (t--) {
//		int i;
//		for (i = t - 1; i > -1; i--) {
//			if (heights[i] > heights[t]) {
//				ans.push_back(i+1);
//				break;
//			}
//		}
//		if (i == -1)  ans.push_back(0);
//	}
//
//	while (!ans.empty()) {  // reverse(answer.begin(), answer.end());
//		answer.push_back(ans.back());
//		ans.pop_back();
//	}
//
//	return answer;
//}