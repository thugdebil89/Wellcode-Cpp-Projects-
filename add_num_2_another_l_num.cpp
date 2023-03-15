void aduna(int a[], int b[]) {
    int carry = 0;
    int i = 1, j = 1;

    while (i <= a[0] || j <= b[0] || carry) {
        if (i <= a[0]) carry += a[i];
        if (j <= b[0]) carry += b[j];

        a[i++] = carry % 10;
        carry /= 10;
        j++;
    }

    a[0] = i - 1;
}
