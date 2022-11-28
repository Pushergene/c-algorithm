#include <iostream>
    struct Rectangle {
        int length;
        int breath;
};
int main() {
    struct Rectangle *p;
    p = (struct Rectangle *) malloc (sizeof(struct Rectangle));
    p->length = 30;
    p->breath = 5;
    std::cout << p->length;
    std::cout << p->breath;
}
