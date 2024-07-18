#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateBinaryStrings(int n) {
    vector<char> current(n, '0');
    function<void(int)> generateStringsHelper = [&](int index) {
        if (index == n) {
          
            for (char c : current) {
                cout << c;
            }
            cout << endl;
            return;
        }

        
        current[index] = '0';
        generateStringsHelper(index + 1);

        if (index == 0 || current[index - 1] == '0') {
            current[index] = '1';
            generateStringsHelper(index + 1);
        }
    };
       
    generateStringsHelper(0);
}

int main() {
    int n = 3;
    generateBinaryStrings(n);
    return 0;
}  
