class Solution
{
public:
    int reverse(int x)
    {

        while (x != 0)
        {
            int rem = x % 10;

            return rem;

            x = x / 10;
        }
    }
};