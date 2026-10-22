#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = { 10, 22, 35, 44, 57, 70, 85 };

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it > 45) {
            numbers.erase(it);
            break;
        }
    }

    auto it = numbers.begin();
    while (it != numbers.end()) {
        if (*it % 7 == 0) {
            numbers.insert(it, 70);
            ++it;
        } else {
            ++it;
        }
    }

    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}