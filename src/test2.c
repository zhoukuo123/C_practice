#include <stdio.h>
#include <string.h>

int addchar(char c1, char c2, int f, char *s) {//1位加法,f表示进位
    int t = c1 + c2 + f;
    if (t < 106) {
        *s = (char) (t - 48);
        return 0;
    } else {
        *s = (char) (t - 58);
        return 1;
    }
}

void bignumadd(const char *num1, const char *num2, char *sum) {//大数相加
    size_t len1 = strlen(num1), len2 = strlen(num2), i = 0;//得到输入字符串长度
    int f = 0;//用于保存进位
    if (len1 > len2) {//如果第一个字符串长
        for (; i < len2; ++i) {//len2比较小,先遍历完
            f = addchar(num1[len1 - i - 1], num2[len2 - i - 1], f, &sum[i]);
        }
        for (; i < len1; ++i) {//剩下部分
            f = addchar(num1[len1 - i - 1], '0', f, &sum[i]);//第一个字符串多出来的直接和0加
        }
    } else {//如果第二个字符串长
        for (; i < len1; ++i) {//len1比较小,先遍历完
            f = addchar(num1[len1 - i - 1], num2[len2 - i - 1], f, &sum[i]);
        }
        for (; i < len2; ++i) {//剩下部分
            f = addchar('0', num2[len2 - i - 1], f, &sum[i]);//第二个字符串多出来的直接和0加
        }
    }
    //别忘记最高位还可能会进位
    for (; f > 0; ++i) {
        f = addchar('0', '0', f, &sum[i]);
    }
}

void showsum(const char *s) {//显示计算结果
    size_t len = strlen(s);
    for (int i = len - 1; i > -1; --i) {//从最后一位开始逆序输出
        putchar(s[i]);
    }
}

int main() {
    const char *num1 = "87";
    const char *num2 = "9999";
    char s[100] = {0};//分配100字节的栈空间存放结果
    printf(" %s+%s\n=", num1, num2);
    bignumadd(num1, num2, s);
    showsum(s);
    getchar();
    return 0;
}
