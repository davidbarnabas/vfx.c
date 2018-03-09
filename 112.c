{
 
    /* array must be static as we want to keep track
    of values stored in arr[] using current calls of
    printCompositions() in function call stack*/
    static int arr[ARR_SIZE];
     
    if (n == 0)
    {
        printArray(arr, i);
            }
    else if(n > 0)
    {
        int k; 
        for (k = 1; k <= MAX_POINT; k++)
        {
        
        arr[i]= k;
        printCompositions(n-k, i+1);
        }
        
    }
}
 
/* UTILITY FUNCTIONS */
/* Utility function to print array arr[] */
void printArray(int arr[], int arr_size)

{
    int i;
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
/* Driver function to test above functions */
int main()
{
    int n = 5;
     
    printf("Different compositions formed by 1, 2 and 3 of %d are\n", n);
    printCompositions(n, 0);
     
    getchar();
    
    return 0;
}
