int main() {
    int a; int b; int c;
    a = 1; b = 2; c = 3;
    if (a < b) {
        if (b < c) {
            a = c;
        } else {
            a = 0;
        }
    }
}
