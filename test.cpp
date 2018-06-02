#include <vector>
#include <string>
#include <iostream>

class MaxDiffLength
{
public:
    std::vector<std::string> &a1; 
    std::vector<std::string> &a2;
    int FindMax();
};

int MaxDiffLength::FindMax()
{
  if (a1.empty() || a2.empty())
    std::cout << "v is empty";
    return -1;
}

int main()
{
    MaxDiffLength 
    mdl_class.FindMax();
}

