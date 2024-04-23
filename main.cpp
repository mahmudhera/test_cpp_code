#include <iostream>
#include <thread>

using namespace std;

void show_num_of_threads() {
    cout << "Number of threads: " << thread::hardware_concurrency() << endl;
}

int main() {
    show_num_of_threads();
    return 0;
}