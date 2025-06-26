#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while (n != 0) {
        v.push_back(n);
        cin >> n;
    }

    if (!v.empty()) {
        cout << "Front: " << v.front() << endl;
        cout << "Back: " << v.back() << endl;
    }

    for (auto it = v.begin(); it != v.end(); ) {
        if (*it < 10) {
            it = v.erase(it);
        } else {
            it++;
        }
    }
    if (v.size() >= 1) {
        v.insert(v.begin() + 1, 33);
    }
    if (v.size() >= 2) {
        v.insert(v.end() - 1, 55);
    }
    cout << "Final vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
