#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/linked_list.hpp"

TEST_CASE( "Can create node" ) {
    Link gold = Link("Gold");
    Node* node_one = new Node(&gold);

    REQUIRE(node_one->get_link()->get_material() == "Gold");
}

TEST_CASE(" Can attach nodes "){
    Link gold = Link("Gold");
    Node* node_one = new Node(&gold);
    
    Link silver = Link("Silver");
    Node* node_two = new Node(&silver);

    node_one->append(node_two);

    Node* found_node_two = node_one->next();

    REQUIRE(found_node_two->get_link()->get_material() == "Silver");
}

TEST_CASE(" Can traverse the list starting from the head"){
    Link gold = Link("Gold");
    Node* node_one = new Node(&gold);

    Link silver = Link("Silver");
    Node* node_two = new Node(&silver);

    Link bronze = Link("Bronze");
    Node* node_three = new Node(&bronze);

    node_one->append(node_two);
    node_two->append(node_three);

    REQUIRE(node_one->next() == node_two);
    REQUIRE(node_two->next() == node_three);

}
