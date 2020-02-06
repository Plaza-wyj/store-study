//样例二

#include<stdio.h>//必备
#include<string.h>//必备
//定义整数字符串
char integer[100][100] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九", "十"};
int A(char a[]) {
    int i;
    for (i = 0; i < 11; i++) {
        if (strcmp(integer[i], a) == 0) {
            return i;
        }
    }
    return 0;
}//汉字转数字

int compare(char a[], char b[], char c[]) {
    int x;
    x = A(a);
    if (strcmp(a, "大于") == 0)
        printf("%s", b);
    else if (strcmp(a, "小于") == 0)
        printf("%s", c);
}//本来是要给自己增加难度分两种情况 但是后面发现没用到

int figure(int n, char a[], char b[]) {
    int sum;
    sum = A(b);
    if (strcmp(a, "增加") == 0)
        return n + sum;
    if (strcmp(a, "减少") == 0)
        return n - sum;
    return 0;
}//运算

int main() {
    int outcome;
    char a[100], b[100], c[100], d[100], e[100], f[100], g[100], h[100], i[100], j[100],k[100];
    scanf("%s %s %s %s", a, b, c, d);
    //  printf("\n");
    outcome = A(d);
    while (scanf("%s %s", b, c) != EOF) {
        if (strcmp(b, "看看") != 0) {
            scanf("%s", d);
            outcome = figure(outcome, c, d);
        } else {
            scanf("%s %s %s %s %s %s %s %s %s %s",e,c,f,g,h,b,i,j,b,k);
            if (outcome < A(g)) {
                printf("%s\n", integer[outcome]);
                printf(i);
            } else if (A(g) < outcome<10 ) {
                printf("%s\n", integer[outcome]);
                printf(k);
            } else if (10 < outcome < 20) {
                printf("十%s\n", integer[outcome - 10]);
                printf(k);
            }

        }
    }
    return 0;
}

//样例2

#include<stdio.h>//必备
#include<string.h>//必备
//定义整数字符串
char integer1[100][100] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九", "十"};
char integer2[100][100] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九", "十"};

int A1(char a[]) {
    int i;
    for (i = 0; i < 11; i++) {
        if (strcmp(integer1[i], a) == 0) {
            return i;
        }
    }
    return 0;
}//汉字转数字1year
int A2(char a[]) {
    int i;
    for (i = 0; i < 11; i++) {
        if (strcmp(integer2[i], a) == 0) {
            return i;
        }
    }
    return 0;
}//汉字转数字2money
int compare(char a[], char b[], char c[]) {
    int x;
    x = A1(a);
    if (strcmp(a, "大于") == 0)
        printf("%s", b);
    else if (strcmp(a, "小于") == 0)
        printf("%s", c);
}//本来是要给自己增加难度分两种情况 但是后面发现没用到

int figure(int n, char a[], char b[]) {
    int sum;
    sum = A1(b);
    if (strcmp(a, "增加") == 0)
        return n + sum;
    if (strcmp(a, "减少") == 0)
        return n - sum;
    return 0;
}//运算

int main() {
    int outcome1, outcome2;
    char a[100], b[100], c[100], d[100], e[100], f[100], g[100], h[100], j[100], k[100];
    scanf("%s %s %s %s %s %s %s %s %s %s %s", a, b, c, d, a, g, c, h, b, j, k);
    printf("\n");
    outcome1 = A1(d);
    outcome2 = A2(h);
    scanf("%s %s", f, g);
    while (scanf("%s %s", f, g) != EOF) {
        if (strcmp(f, "看看") != 0) {
            scanf("%s", k);
            outcome1 = figure(outcome1, j, k);
            if (outcome1 > A1(d))
                printf("%s", integer2[outcome2 +1]);
        }
    }
}