class Solution
{
public:
    int findDays(vector<int> &weights, int cap)
    {

        int n = weights.size();
        int days = 1, load = 0;
        for (int i = 0; i < n; i++)
        {
            if (load + weights[i] > cap)
            {
                days++;
                load = weights[i];
            }

            else
            {
                load += weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int> &weights, int D)
    {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(),0);

        while (l <= h)
        {
            int m = (l + h) / 2;
            if (findDays(weights, m) <= D)

                h = m - 1;
            else
                l = m + 1;
        }

        return l;
    }
};