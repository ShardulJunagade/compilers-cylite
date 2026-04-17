int main() {
    int start; int end; int cur; int max;
    start = 1;
    end = 100;
    max = 80;
    while (start < end) {
        if (start > max) {
            max = start;
        } else {
            max = max + 1;
        }
        start = start + 1;
    }
}
