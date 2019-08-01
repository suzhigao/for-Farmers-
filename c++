#include <iostream>
#include <cstring>

using namespace std;

class Farmers {
	string farmers;
	string contribution;//贡献
public:
	Farmers() {
		string farmers = "最辛苦，最朴素的人";
		string contribution = "勤勞的行為，平凡的劳作，贡献绝不低于任何人";
		cout << "最辛苦，最朴素的人"<< endl;
		cout << "勤勞的行為，平凡的劳作，贡献绝不低于任何人"<< endl;
	}
};

int main() {
	Farmers();
	cout << "让我们给辛苦的农民多点尊重与帮助，愿中国农业早日实现机械化，农民不用那么辛苦，愿农民们生活越来越好" << endl;

	return 0;
}

//初学c++，简单实现下哈哈
