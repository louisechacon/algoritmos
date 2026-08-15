void merge(int a[], int i1, int j1, int i2, int j2) {
    int* temp = new int[(j1 - i1) + (j2 - i2) + 2];
    int i, j, k;
    i = i1; // início da metade esq.
    j = i2; // início da metade dir.
    k = 0;

    while (i <= j1 && j <= j2) {
        if (a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }

    while (i <= j1) {
        temp[k++] = a[i++];
    }
    while (j <= j2) {
        temp[k++] = a[j++];
    }

    for (i = i1, j = 0; i <= j2; i++, j++) {
        a[i] = temp[j];
    }
    delete[] temp;
}

void merge_sort(int a[], unsigned int t) {
    if (t > 1) {
        merge_sort(a, t/2);
        merge_sort(a + t/2, t - t/2);
        merge(a, 0, t/2 - 1, t/2, t-1);
    }
}