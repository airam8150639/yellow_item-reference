#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <ctime>
#include <utility>
using namespace std;

template <typename First, typename Second>
Second& GetRefStrict(map<First, Second>& m, First key);

template <typename First, typename Second> 
Second& GetRefStrict(map<First, Second>& m, First key) {
	try {
		m.at(key);
	}
	catch (out_of_range e) {
		throw runtime_error("runtime_error!!!");
	}
	return m[key];
}

/*int main() {
	try {
		map<double, int> m = { {1.09, 1}};
		int& item = GetRefStrict(m, 1.19);
		item = 2;
		cout << m[1.09] << endl; // выведет newvalue
	}
	catch (runtime_error e) {
		cout << e.what() << endl;
	}

	return 0;
}*/
