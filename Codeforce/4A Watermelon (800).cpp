#include <iostream>

int main() {
	int slice;

	std::cin >> slice;

	if(slice % 2 == 0){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}

	return 0;
}
