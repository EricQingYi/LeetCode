#include <iostream>
#include "RansomNote.h"

int main()
{
  RansomNote sol;
  std::cout << sol.canConstruct(std::string("aacb"), std::string("aabbcc")) << std::endl;
  return 0;
}
