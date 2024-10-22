// E -> TE'
// E'-> +TE'/@
// T -> FT'
// T'-> *FT'/@
// F -> (E)/id

#include<stdio.h>
#include<ctype.h>
#include<string.h>

char input[100];
int i = 0;

int e();
int ep();
int t();
int tp();
int f();

void main() {
    printf("Enter your string: ");
    scanf("%s", input);
    if (e()) {
        if (input[i] == '\0')  // Corrected comparison
            printf("String is accepted\n");
        else
            printf("String is not accepted\n");
    } else {
        printf("String is not accepted\n");
    }
}

int e() {
    if (t()) {
        if (ep())
            return 1;
        else
            return 0;
    } else
        return 0;
}

int ep() {
    if (input[i] == '+') {  // Corrected comparison
        i++;
        if (t()) {
            if (ep())
                return 1;
            else
                return 0;
        } else
            return 0;
    } else
        return 1;
}

int t() {
    if (f()) {
        if (tp())
            return 1;
        else
            return 0;
    } else
        return 0;
}

int tp() {
    if (input[i] == '*') {  // Corrected comparison
        i++;
        if (f()) {
            if (tp())
                return 1;
            else
                return 0;
        } else
            return 0;
    } else
        return 1;
}

int f() {
    if (input[i] == '(') {  // Corrected comparison
        i++;
        if (e()) {
            if (input[i] == ')') {  // Corrected comparison
                i++;
                return 1;
            } else
                return 0;
        } else
            return 0;
    } else if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {  // Corrected comparison
        i++;
        return 1;
    } else
        return 0;
}
