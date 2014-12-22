#include <iostream>
#include "src/re.h"
using namespace std;


int main(int argc, char **argv) {
  (void)argc;(void)argv;
  std::cout << "Hello, world!" << std::endl;
  dfa_re::regex test_patt(".*(aaa|aab)*c");
  size_t pos= 0;
  bool match_result= test_patt.match_to_end_state("aaaabc",pos);
  cout<<"match result:"<< match_result<<endl;
  return 0;
}
