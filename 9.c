// Returns sum of all digits in numbers from 1 to n
int countNumbersWith4(int n)
{
    int result = 0; // initialize result
 
    // One by one compute sum of digits in every number from
    // 1 to n
    for (int x=1; x<=n; x++)
        result += has4(x)? 1 : 0;
 
    return result;
}
 
// A utility function to compute sum of digits in a
// given number x
bool has4(int x)
{
    while (x != 0)
    {
        if (x%10 == 4)
           return true;
        x   = x /10;
    }
    return false;
}
 
// Driver Program

int main()

{

   int n = 328;
   
   cout << "Count of numbers from 1 to " << n 
   
        << " that have 4 as a a digit is "
        
        << countNumbersWith4(n) << endl;
   return 0;
   
   ]
   
