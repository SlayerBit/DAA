#include <stdio.h>

void pattern1() {
    // Star pattern - Pyramid
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("*");
        printf("\n");
    }
}

void pattern2() {
    // Alphabetic pattern - A B C
    char ch = 'A';
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) printf("%c ", ch++);
        printf("\n");
    }
}

void pattern3() {
    // Numeric pattern - Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
}

void pattern4() {
    // Star pattern - Square
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) printf("* ");
        printf("\n");
    }
}

void pattern5() {
    // Alphabetic pattern - Reversed Pyramid
    for (int i = 5; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) printf("%c ", ch++);
        printf("\n");
    }
}

void pattern6() {
    // Numeric pattern - Diamond
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%d", j);
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%d", j);
        printf("\n");
    }
}

void pattern7() {
    // Star pattern - Inverted triangle
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

void pattern8() {
    // Alphabetic pattern - Increasing columns
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("%c ", 'A' + i - 1);
        printf("\n");
    }
}

void pattern9() {
    // Numeric pattern - Inverted numbers
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
}

void pattern10() {
    // Star pattern - Left Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

void pattern11() {
    // Alphabetic pattern - Diamond
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%c", 'A' + j - 1);
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%c", 'A' + j - 1);
        printf("\n");
    }
}

void pattern12() {
    // Numeric pattern - Increasing Pyramid
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", i);
        printf("\n");
    }
}

void pattern13() {
    // Star pattern - Hollow Square
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern14() {
    // Alphabetic pattern - Single line
    for (int i = 0; i < 5; i++) {
        printf("%c ", 'A' + i);
    }
    printf("\n");
}

void pattern15() {
    // Numeric pattern - Full Pyramid
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
}

void pattern16() {
    // Star pattern - Right Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

void pattern17() {
    // Alphabetic pattern - Full Pyramid
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%c", 'A' + j - 1);
        printf("\n");
    }
}

void pattern18() {
    // Numeric pattern - Hollow Square
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern19() {
    // Star pattern - Diamond
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("*");
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("*");
        printf("\n");
    }
}

void pattern20() {
    // Alphabetic pattern - Hollow Diamond
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) {
            if (j == 1 || j == (2*i-1)) 
                printf("%c", 'A' + j - 1);
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) {
            if (j == 1 || j == (2*i-1)) 
                printf("%c", 'A' + j - 1);
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern21() {
    // Numeric pattern - Hollow Diamond
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) {
            if (j == 1 || j == (2*i-1)) 
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) {
            if (j == 1 || j == (2*i-1)) 
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern22() {
    // Star pattern - Half Diamond
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

void pattern23() {
    // Alphabetic pattern - Hollow Square
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                printf("%c ", 'A' + j - 1);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern24() {
    // Numeric pattern - Reverse Pyramid
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%d", j);
        printf("\n");
    }
}

void pattern25() {
    // Star pattern - Hollow Pyramid
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) {
            if (j == 1 || j == (2*i-1) || i == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern26() {
    // Alphabetic pattern - Right Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("%c ", 'A' + j - 1);
        printf("\n");
    }
}

void pattern27() {
    // Numeric pattern - Full Pyramid
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%d", i);
        printf("\n");
    }
}

void pattern28() {
    // Star pattern - Right-aligned Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

void pattern29() {
    // Alphabetic pattern - Diamond (lowercase)
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%c", 'a' + j - 1);
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("%c", 'a' + j - 1);
        printf("\n");
    }
}

void pattern30() {
    // Numeric pattern - Center-aligned Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("%d ", i);
        printf("\n");
    }
}

void pattern31() {
    // Star pattern - Hollow Inverted Pyramid
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) {
            if (j == 1 || j == (2*i-1) || i == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern32() {
    // Alphabetic pattern - Centered Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("%c ", 'A' + j - 1);
        printf("\n");
    }
}

void pattern33() {
    // Numeric pattern - Hollow Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 5)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern34() {
    // Star pattern - Hollow Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 5)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern35() {
    // Alphabetic pattern - Reverse Triangle
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("%c ", 'A' + j - 1);
        printf("\n");
    }
}

void pattern36() {
    // Numeric pattern - Repeated numbers
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", i);
        printf("\n");
    }
}

void pattern37() {
    // Star pattern - Left-aligned Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

void pattern38() {
    // Alphabetic pattern - Centered Reversed Triangle
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= i; j++) printf("%c ", 'A' + j - 1);
        printf("\n");
    }
}

void pattern39() {
    // Numeric pattern - Left-aligned Triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
}

void pattern40() {
    // Star pattern - Reverse Pyramid
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        for (int j = 1; j <= (2*i-1); j++) printf("*");
        printf("\n");
    }
}
int main() {
    // Calling functions
    pattern1(); printf("\n");
    pattern2(); printf("\n");
    pattern3(); printf("\n");
    pattern4(); printf("\n");
    pattern5(); printf("\n");
    pattern6(); printf("\n");
    pattern7(); printf("\n");
    pattern8(); printf("\n");
    pattern9(); printf("\n");
    pattern10(); printf("\n");
    pattern11(); printf("\n");
    pattern12(); printf("\n");
    pattern13(); printf("\n");
    pattern14(); printf("\n");
    pattern15(); printf("\n");
    pattern16(); printf("\n");
    pattern17(); printf("\n");
    pattern18(); printf("\n");
    pattern19(); printf("\n");
    pattern20(); printf("\n");
    pattern21(); printf("\n");
    pattern22(); printf("\n");
    pattern23(); printf("\n");
    pattern24(); printf("\n");
    pattern25(); printf("\n");
    pattern26(); printf("\n");
    pattern27(); printf("\n");
    pattern28(); printf("\n");
    pattern29(); printf("\n");
    pattern30(); printf("\n");
    pattern31(); printf("\n");
    pattern32(); printf("\n");
    pattern33(); printf("\n");
    pattern34(); printf("\n");
    pattern35(); printf("\n");
    pattern36(); printf("\n");
    pattern37(); printf("\n");
    pattern38(); printf("\n");
    pattern39(); printf("\n");
    pattern40(); printf("\n");

    return 0;
}
