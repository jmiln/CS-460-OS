/**
 * This function assumes that the trees rooted at left_child(i) and right_child(i)
 * already satisfy the min-heap property, but that A[i] may be larger than its children.
 * This function should trickle A[i] down in place such that the tree rooted at i
 * satisfies the min-heap property.
 * @param i - Index of element to 'heapify'
 * @param n - Length of heap
 */
void heapify( int A[], int index, int len );
/**
 * Given an array A[...] of n arbitrary integers, this function will leave the
 * tree rooted at A[0] satisfying the min-heap property. Hint: Nodes
 * without children by definition trivially satisfy the min-heap property
 */
void buildHeap( int A[], int len );
/**
 * Assumes A[...] is a min-heap, this function returns the minimum value
 * stored in the heap
 */
int getMin( int A[] );
/**
 * Prints all values of the list
 */
void printList( int A[], int n );

/**
 * Given an index in the heap, gives the location where the left child will be
 */
int leftChild( int index );
/**
 * Given an index in the heap, gives the location where the right child will be
 */
int rightChild( int index );
