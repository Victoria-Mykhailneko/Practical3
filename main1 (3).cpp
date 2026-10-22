#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = { 14, 22, 31, 40, 47 };

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
