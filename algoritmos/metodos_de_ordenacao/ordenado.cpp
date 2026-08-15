bool ordenado(int a[], unsigned int t) {
    if (t == 0) {
        return true;
    }

    int qtd = 0;

    for (unsigned int i = 1; i < t; i++) {
        if (a[i-1] <= a[i]) {
            qtd++;
        }
    }

    return (unsigned int)qtd == t - 1;
}