char * intToRoman(int n){
    char *a;
    a = (char *)malloc(200);
    int m = 0, d = 0, c = 0, l = 0, x = 0, v = 0, i = 0;
    m = n / 1000;
    n %= 1000;
    d = n / 500;
    n %= 500;  //3890  m = 3, d = 1, c = 3, l = 1, x = 4; MMMDCССLXL
    c = n / 100;
    n %= 100;
    l = n / 50;
    n %= 50;
    x = n / 10;
    n %= 10;
    v = n / 5;
    n %= 5;
    i = n;
    int q = 0;
    for(int j = 0; j < m; j++){
        a[q] = 'M';
        q++;
    }
    if(d*500 + l*50 + c*100 == 950 && d*500 + l*50 + c*100 + x*10 != 990){
        a[q] = 'C';
        q++;
        a[q] = 'M';
        q++;
        a[q] = 'L';
        q++;
    } else if((d*500 + c*100) == 900 ) {
        a[q] = 'C';
        q++;
        a[q] = 'M';
        q++;
    } else {
        for(int j = 0; j < d; j++){
            a[q] = 'D';
            q++;
        }
        if(c == 4){
            a[q] = 'C';
            q++;
            a[q] = 'D';
            q++;
        } else {
            for(int j = 0; j < c; j++){
                a[q] = 'C';
                q++;
            }
        }
        if(l * 50 + x * 10 != 90){
            for(int j = 0; j < l; j++){
                a[q] = 'L';
                q++;
            }
        }
    }
    if(l * 50 + x * 10 == 90){
        a[q] = 'X';
        q++;
        a[q] = 'C';
        q++;
    }else if(x == 4){
        a[q] = 'X';
        q++;
        a[q] = 'L';
        q++;
    } else {
        for(int j = 0; j < x; j++){
            a[q] = 'X';
            q++;
        }
    }
    if(v * 5 + i == 9){
        a[q] = 'I';
        q++;
        a[q] = 'X';
        q++;
    } else {
        for(int j = 0; j < v; j++){
            a[q] = 'V';
            q++;
        }
        if(i == 4){
            a[q] = 'I';
            q++;
            a[q] = 'V';
            q++;
        } else {
            for(int j = 0; j < i; j++){
                a[q] = 'I';
                q++;
            }
        }
    }
    a[q] = NULL;
    return a;
}
