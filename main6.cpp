#include <iostream>
#include <list>
#include <algorithm> // для std::minmax_element

using namespace std;

int main() {
    list<double> numbers = { 12.5, 20.3, 15.0, 30.1, 10.0, 27.8, 14.5, 35.0 };

    if (!numbers.empty()) {
        auto [min_it, max_it] = minmax_element(numbers.begin(), numbers.end());
        cout << "Мінімальний елемент: " << *min_it << endl;
        cout << "Максимальний елемент: " << *max_it << endl;
    }

    cout << "Список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}