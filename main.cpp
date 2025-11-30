#include <iostream>

#include "src/linked_list.hpp"
using namespace std;
int main() {
  Link gold = Link("Gold");
  Node* node_one = new Node(&gold);

  Link silver = Link("Silver");
  Node* node_two = new Node(&silver);

  Link bronze = Link("Bronze");
  Node* node_three = new Node(&bronze);

  node_one->append(node_two);
  node_two->append(node_three);

  Node* node_two_found = node_one->next();
  Node* node_three_found = node_one->next()->next();

  cout << "Node one material: " << node_one->get_link()->get_material() << endl;
  cout << "Node two material: " << node_two_found->get_link()->get_material() << endl;
  cout << "Node three material: " << node_three_found->get_link()->get_material() << endl;
}
