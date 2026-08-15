void insercao(int a[], unsigned int t) {
    int x, j;

    for (unsigned int i = 0; i < t; i++) {
        x = a[i];
        for (j = (i - 1); j >= 0 && a[j] > x; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = x;
    }
}