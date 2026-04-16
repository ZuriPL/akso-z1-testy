
#include "rstack.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

#undef NDEBUG

/** MAKRA SKRACAJĄCE IMPLEMENTACJĘ TESTÓW **/

// To są możliwe wyniki testu.
#define PASS 0
#define FAIL 1
#define WRONG_TEST 2

// Oblicza liczbę elementów tablicy x.
#define SIZE(x) (sizeof x / sizeof x[0])

#define ASSERT(f)            \
  do {                       \
    if (!(f))                \
      return FAIL;           \
  } while (0)

#define ASSERT_RESULT(c, f, ...)          \
  do {                                    \
    result_t r = c;                       \
    if (r.flag != (f))                    \
      return FAIL;                        \
    if ((f) && r.value != __VA_ARGS__ -0) \
      return FAIL;                        \
  } while (0)

#define CHECK_IF_NO_ERROR(f) \
  do {                       \
    if ((f) != 0)            \
      return FAIL;           \
  } while (0)

#define V(code, where) (((unsigned long)code) << (3 * where))

int test41(void) {
rstack_t* rs0 = rstack_new();
rstack_t* rs1 = rstack_new();
rstack_t* rs2 = rstack_new();
rstack_t* rs3 = rstack_new();
rstack_t* rs4 = rstack_new();
rstack_t* rs5 = rstack_new();
rstack_t* rs6 = rstack_new();
rstack_t* rs7 = rstack_new();
rstack_t* rs8 = rstack_new();
rstack_t* rs9 = rstack_new();
CHECK_IF_NO_ERROR(rstack_push_rstack(rs3, rs6));
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
ASSERT(rstack_empty(rs4) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs6, rs1));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs4, rs0));
ASSERT_RESULT(rstack_front(rs1), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs6, rs0));
ASSERT_RESULT(rstack_front(rs8), false, 0UL);
ASSERT_RESULT(rstack_front(rs2), false, 0UL);
ASSERT_RESULT(rstack_front(rs8), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_16.result.out", rs9));
ASSERT_RESULT(rstack_front(rs9), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_12.result.out", rs6));
ASSERT(rstack_empty(rs8) == true);
ASSERT_RESULT(rstack_front(rs8), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs3, rs1));
ASSERT_RESULT(rstack_front(rs3), false, 0UL);
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_1.result.out", rs6));
ASSERT(rstack_empty(rs4) == true);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_14.result.out", rs6));
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_19.result.out", rs0));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs7, rs9));
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs0, rs3));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs1, rs9));
ASSERT(rstack_empty(rs9) == true);
ASSERT_RESULT(rstack_front(rs8), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs0, rs4));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs1, rs1));
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_13.result.out", rs8));
ASSERT_RESULT(rstack_front(rs1), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs0, rs9));
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
ASSERT(rstack_empty(rs2) == true);
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
ASSERT_RESULT(rstack_front(rs8), false, 0UL);
ASSERT(rstack_empty(rs6) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs3, rs6));
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_10.result.out", rs9));
ASSERT_RESULT(rstack_front(rs8), false, 0UL);
ASSERT_RESULT(rstack_front(rs7), false, 0UL);
ASSERT_RESULT(rstack_front(rs1), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs8, rs5));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs6, rs2));
ASSERT(rstack_empty(rs5) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs8, rs9));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs9, rs4));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs7, rs7));
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_2.result.out", rs9));
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_15.result.out", rs7));
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_18.result.out", rs4));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs9, rs3));
ASSERT_RESULT(rstack_front(rs1), false, 0UL);
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs7, rs4));
ASSERT_RESULT(rstack_front(rs4), false, 0UL);
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs1, rs9));
ASSERT_RESULT(rstack_front(rs4), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_0.result.out", rs1));
ASSERT_RESULT(rstack_front(rs4), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs4, rs7));
ASSERT_RESULT(rstack_front(rs4), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs0, rs4));
ASSERT(rstack_empty(rs2) == true);
ASSERT_RESULT(rstack_front(rs2), false, 0UL);
ASSERT(rstack_empty(rs4) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs9, rs6));
ASSERT_RESULT(rstack_front(rs3), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs7, rs5));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs5, rs1));
ASSERT(rstack_empty(rs5) == true);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_9.result.out", rs2));
ASSERT_RESULT(rstack_front(rs4), false, 0UL);
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs7, rs7));
ASSERT(rstack_empty(rs7) == true);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_8.result.out", rs9));
ASSERT_RESULT(rstack_front(rs7), false, 0UL);
ASSERT(rstack_empty(rs7) == true);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_5.result.out", rs6));
ASSERT(rstack_empty(rs5) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs3, rs1));
ASSERT_RESULT(rstack_front(rs1), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_17.result.out", rs4));
ASSERT_RESULT(rstack_front(rs1), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs3, rs5));
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs5, rs8));
ASSERT(rstack_empty(rs2) == true);
ASSERT_RESULT(rstack_front(rs5), false, 0UL);
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_6.result.out", rs4));
ASSERT(rstack_empty(rs2) == true);
ASSERT_RESULT(rstack_front(rs7), false, 0UL);
ASSERT(rstack_empty(rs9) == true);
ASSERT(rstack_empty(rs5) == true);
ASSERT(rstack_empty(rs9) == true);
ASSERT_RESULT(rstack_front(rs2), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_4.result.out", rs8));
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs2, rs5));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs0, rs0));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs3, rs7));
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
ASSERT(rstack_empty(rs1) == true);
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
ASSERT_RESULT(rstack_front(rs2), false, 0UL);
ASSERT(rstack_empty(rs0) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs1, rs7));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs9, rs0));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs4, rs1));
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs4, rs0));
ASSERT_RESULT(rstack_front(rs7), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs5, rs8));
ASSERT_RESULT(rstack_front(rs5), false, 0UL);
ASSERT(rstack_empty(rs4) == true);
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
ASSERT(rstack_empty(rs4) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs2, rs8));
ASSERT_RESULT(rstack_front(rs5), false, 0UL);
ASSERT(rstack_empty(rs1) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs4, rs8));
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_7.result.out", rs9));
ASSERT_RESULT(rstack_front(rs9), false, 0UL);
ASSERT_RESULT(rstack_front(rs2), false, 0UL);
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs4, rs0));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs6, rs4));
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs4, rs9));
ASSERT_RESULT(rstack_front(rs3), false, 0UL);
ASSERT(rstack_empty(rs9) == true);
ASSERT_RESULT(rstack_front(rs3), false, 0UL);
ASSERT(rstack_empty(rs4) == true);
ASSERT(rstack_empty(rs4) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs8, rs3));
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
ASSERT(rstack_empty(rs9) == true);
ASSERT_RESULT(rstack_front(rs9), false, 0UL);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_3.result.out", rs9));
ASSERT_RESULT(rstack_front(rs0), false, 0UL);
ASSERT_RESULT(rstack_front(rs3), false, 0UL);
ASSERT(rstack_empty(rs6) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs6, rs7));
ASSERT(rstack_empty(rs8) == true);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs3, rs2));
ASSERT_RESULT(rstack_front(rs7), false, 0UL);
ASSERT_RESULT(rstack_front(rs9), false, 0UL);
ASSERT_RESULT(rstack_front(rs6), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs7, rs4));
ASSERT_RESULT(rstack_front(rs1), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs6, rs9));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs1, rs2));
ASSERT(rstack_empty(rs1) == true);
CHECK_IF_NO_ERROR(rstack_write("tests/output/test41_11.result.out", rs1));
CHECK_IF_NO_ERROR(rstack_push_rstack(rs9, rs0));
ASSERT(rstack_empty(rs5) == true);
ASSERT(rstack_empty(rs3) == true);
ASSERT(rstack_empty(rs5) == true);
ASSERT_RESULT(rstack_front(rs5), false, 0UL);
CHECK_IF_NO_ERROR(rstack_push_rstack(rs2, rs3));
ASSERT(rstack_empty(rs9) == true);
rstack_delete(rs0);
rstack_delete(rs1);
rstack_delete(rs2);
rstack_delete(rs3);
rstack_delete(rs4);
rstack_delete(rs5);
rstack_delete(rs6);
rstack_delete(rs7);
rstack_delete(rs8);
rstack_delete(rs9);
    
    return PASS;
}