#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits)
        {
            bool carry = false;
            int index = digits.size() - 1;
            while(carry == false)
            {
                if (digits[index] != 9)
                {
                    digits[index]++;
                    return digits;
                }
                else
                {
                    digits[index] = 0;
                    if (index != 0)
                    {
                        index--;
                        carry = false;
                    }
                    else
                    {
                        digits.insert(digits.begin(), 1);
                        return digits;
                    }
                }
            }
        }
};

int main()
{
    Solution Solution;
    vector<int> vin;
    int num;

    cout << "/* Please enter the number of inputs. */" << '\n';
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int data;
        cout << "enter an integer." << '\n';
        cin >> data;
        vin.push_back(data);
    }
    Solution.plusOne(vin);
    cout << "Show the vector:" << '\n';
    vector<int>::iterator v = vin.begin();
    while(v != vin.end())
    {
        cout << *v << "-";
        v++;
    }
    cout << '\n';

    return 0;
}
