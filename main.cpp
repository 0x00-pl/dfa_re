#include <iostream>
#include "src/config.h"
#include "src/parser.h"
#include "src/nfa.h"
#include "src/dfa.h"

using namespace std;
using namespace parser;


int main(int argc, char **argv) {
  (void)argc;(void)argv;
  std::cout << "Hello, world!" << std::endl;
  
  node* parsed= parser_str("(aaa|aab)b");
  parsed->print(cout);
  cout<<endl;
  
  graph::graph nfa;
  nfa.print(cout);
  set<size_t> nfa_end_state_set;
  nfa::build_nfa(nfa,parsed,nfa_end_state_set);
  
  graph::graph dfa;
  set<size_t> dfa_end_state_set;
  dfa::build_dfa(nfa,nfa_end_state_set, dfa,dfa_end_state_set);
  return 0;
}
