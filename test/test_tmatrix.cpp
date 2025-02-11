#include "tmatrix.h"

#include <gtest.h>

TEST(TDynamicMatrix, can_create_matrix_with_positive_length)
{
  ASSERT_NO_THROW(TDynamicMatrix<int> m(5));
}

TEST(TDynamicMatrix, cant_create_too_large_matrix)
{
  ASSERT_ANY_THROW(TDynamicMatrix<int> m(MAX_MATRIX_SIZE + 1));
}

TEST(TDynamicMatrix, throws_when_create_matrix_with_negative_length)
{
  ASSERT_ANY_THROW(TDynamicMatrix<int> m(-5));
}

TEST(TDynamicMatrix, can_create_copied_matrix)
{
  TDynamicMatrix<int> m(5);
  TDynamicMatrix<int> m1(m);
  EXPECT_EQ(m, m1);
  //ASSERT_NO_THROW(TDynamicMatrix<int> m1(m));
}

TEST(TDynamicMatrix, copied_matrix_is_equal_to_source_one)
{
    TDynamicMatrix<int> m(5);
    for (int i = 0; i < 5; i++) {
        for (int j=0;j<5;j++)
            m[i][j]=i;
    }
    TDynamicMatrix<int> m2(5);
    EXPECT_EQ(m2,m2);
}

TEST(TDynamicMatrix, copied_matrix_has_its_own_memory)
{
    TDynamicMatrix<int> m(5);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            m[i][j] = i;
    }
    TDynamicMatrix<int> m2(m);
    m[0][0]=10;
    EXPECT_NE(m[0][0], m2[0][0]);
}

TEST(TDynamicMatrix, can_get_size)
{
    TDynamicMatrix<int> m(5);
    ASSERT_NO_THROW(m.size());
}

TEST(TDynamicMatrix, can_set_and_get_element)
{
    TDynamicMatrix<int> m(5);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            m[i][j] = i;
    }
    ASSERT_NO_THROW(m[2][3]=9);
}

TEST(TDynamicMatrix, throws_when_set_element_with_negative_index)
{
    TDynamicMatrix<int> m(5);
    ASSERT_ANY_THROW(m[-2][3]=3);
}

TEST(TDynamicMatrix, throws_when_set_element_with_too_large_index)
{
    TDynamicMatrix<int> m(5);
    ASSERT_ANY_THROW(m[7][3] = 3);
}

TEST(TDynamicMatrix, can_assign_matrix_to_itself)
{
    TDynamicMatrix<int> m(5);
    ASSERT_NO_THROW(m=m);
}

TEST(TDynamicMatrix, can_assign_matrices_of_equal_size)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m(5);
    ASSERT_NO_THROW(m1 = m);
}

TEST(TDynamicMatrix, assign_operator_change_matrix_size)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m(6);
    m1=m;
    EXPECT_EQ(m1.size(),6);
}

TEST(TDynamicMatrix, can_assign_matrices_of_different_size)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m(6);
    ASSERT_NO_THROW(m1 = m);
}

TEST(TDynamicMatrix, compare_equal_matrices_return_true)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m(6);
    m1 = m;
    EXPECT_EQ(m1==m,1);
}

TEST(TDynamicMatrix, compare_matrix_with_itself_return_true)
{
    TDynamicMatrix<int> m(6);
    EXPECT_EQ(m == m, 1);
}

TEST(TDynamicMatrix, matrices_with_different_size_are_not_equal)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m(6);
    EXPECT_NE(m1 == m, 1);
}

TEST(TDynamicMatrix, can_add_matrices_with_equal_size)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m2(5);
    ASSERT_NO_THROW(m1=m1+m2);
}

TEST(TDynamicMatrix, cant_add_matrices_with_not_equal_size)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m2(6);
    ASSERT_ANY_THROW(m1 = m1 + m2);
}

TEST(TDynamicMatrix, can_subtract_matrices_with_equal_size)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m2(5);
    ASSERT_NO_THROW(m1 = m1 - m2);
}

TEST(TDynamicMatrix, cant_subtract_matrixes_with_not_equal_size)
{
    TDynamicMatrix<int> m1(5);
    TDynamicMatrix<int> m2(6);
    ASSERT_ANY_THROW(m1 = m1 - m2);
}

