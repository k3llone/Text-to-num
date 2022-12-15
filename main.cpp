#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string Data = "  5  ";
	vector<uint32_t> Out;

	cin >> Data;

	while ((Data.size()%4)) {
		Data.push_back('_');
	}

	for (size_t i = 0; i < Data.size()/4; i++) {
		uint32_t Number = 0;

		for (size_t x = 0; x < 4; x++) {
			if (Data[i * 4 + x] == ' ') {
				Data[i * 4 + x] == '_';
			}

			Number += uint8_t(Data[i * 4 + x]) << 24 - (8 * x);
		}

		Out.push_back(Number);
	}

	for (uint32_t x : Out) {
		cout << x << endl;
	}
}