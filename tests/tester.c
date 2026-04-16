
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#undef NDEBUG

int test1(void);
int test2(void);
int test3(void);
int test4(void);
int test5(void);
int test6(void);
int test7(void);
int test8(void);
int test9(void);
int test10(void);
int test11(void);
int test12(void);
int test13(void);
int test14(void);
int test15(void);
int test16(void);
int test17(void);
int test18(void);
int test19(void);
int test20(void);
int test21(void);
int test22(void);
int test23(void);
int test24(void);
int test25(void);
int test26(void);
int test27(void);
int test28(void);
int test29(void);
int test30(void);
int test31(void);
int test32(void);
int test33(void);
int test34(void);
int test35(void);
int test36(void);
int test37(void);
int test38(void);
int test39(void);
int test40(void);

int (*tests[40])(void) = { test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11, test12, test13, test14, test15, test16, test17, test18, test19, test20, test21, test22, test23, test24, test25, test26, test27, test28, test29, test30, test31, test32, test33, test34, test35, test36, test37, test38, test39, test40 };

int do_test(int i) {
    int result = tests[i-1]();
    printf("===============================================\n");
    printf("Test %d\n", i);
    printf("-----------------------------------------------\n");
    
    if (result != 0) {
        printf("Assertions (rstack_front / rstack_empty) failed\n");
    } else {
        printf("Assertions (rstack_front / rstack_empty) passed\n");
    }

    return result;
}

int main(int argc, char *argv[]) {
    int code = 1;
    if (argc == 2) {
        code = do_test(atoi(argv[1]));
    } else {
        printf("Podaj numer testu jako argument\n");
    }

    return code;
}

