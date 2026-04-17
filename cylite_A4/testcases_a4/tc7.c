int main() {
    int i; int j; int count;
    i = 0; j = 0; count = 0;
    while (i < 3) {
        while (j < 3) {
            count = count + 1;
            j = j + 1;
        }
        i = i + 1;
        j = 0;
    }
}
