# Matrix Structure

Matrices are well know mathematical objects that enable us to compute data easier and almost always, a lot faster. This implementation assumes that the user is following the rules of applying operations such as matrix multiplication when multiplying them. For example, if we multiply A and B, we need the number of columns of A to be equal to the number of rows of B.

This structure, along with defining a matrix, enables us to perform the following operations:

(i) Multiplying two matrices. Complexity depends on the size of the matrices.

(ii) Taking the power of a matrix. For example for a matrix M we can find M^n. Complexity depends on the size of matrices but it takes O(logn) steps.

These operations allow us to compute a lot faster. The file given in this repository finds the nth fibonacci number in O(logn) time whereas a usual implementation would find it in O(n) time.
