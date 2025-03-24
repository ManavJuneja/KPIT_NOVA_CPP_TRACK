#include<iostream>
using namespace std;

class Marks{
    int mark;

    public:
        Marks() : mark(0) {}
        Marks(int mark) {
            this->mark = mark;
        }
        void operator++() {
            mark += 1;
        }
        friend void operator--(Marks &m);
    };
void operator--(Marks &m) {
    m.mark -= 1;
}
int main() {
    Marks m1(10);
    ++m1; // Increment mark
    operator--(m1); // Decrement mark
    return 0;
}
