#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = { 14, 22, 31, 40, 47 };

    cout << "Початковий список: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    numbers.push_front(8);
    numbers.push_back(90);
    numbers.pop_front();

    cout << "Після змін: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}