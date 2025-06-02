#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Prototipos
void come(vector<bool>& queue, int k);
void worry(vector<bool>& queue, int index);
void quiet(vector<bool>& queue, int index);
int worry_count(const vector<bool>& queue);

int main() {
    int q;
    cin >> q;

    vector<bool> queue; // false = tranquila, true = preocupada

    for (int i = 0; i < q; i++) {
        string operation;
        cin >> operation;

        if (operation == "COME") {
            int k;
            cin >> k;
            come(queue, k);
        } else if (operation == "WORRY") {
            int index;
            cin >> index;
            worry(queue, index);
        } else if (operation == "QUIET") {
            int index;
            cin >> index;
            quiet(queue, index);
        } else if (operation == "WORRY_COUNT") {
            cout << worry_count(queue) << endl;
        }
    }

    return 0;
}

// Implementaciones
void come(vector<bool>& queue, int k) {
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            queue.push_back(false); // persona tranquila
        }
    } else {
        for (int i = 0; i < -k; i++) {
            queue.pop_back(); // quitar personas del final
        }
    }
}

void worry(vector<bool>& queue, int index) {
    queue[index] = true;
}

void quiet(vector<bool>& queue, int index) {
    queue[index] = false;
}

int worry_count(const vector<bool>& queue) {
    int count = 0;
    for (int i = 0; i < queue.size(); i++) {
        if (queue[i] == true) {
            count++;
        }
    }
    return count;
}
