// p_29.cpp
#include <iostream>
#include <vector>

class hoge {
};
class foo {
};

void func(hoge &h) {
}

int main() {
	std::vector<int> iwk;
	iwk.push_back(1);
	//iwk.push_back("abc"); // これは駄目

	std::vector<hoge *> hwk;
	hwk.push_back(new hoge());
	//hwk.push_back(new foo()); // これは駄目

	foo f;
	//func(f); // これは駄目

	return 0;
}