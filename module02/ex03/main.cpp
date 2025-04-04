#include <iostream>
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point inside(5, 5);
    Point outside(15, 5);
    Point edge(5, 0);
    Point vertex(0, 0);

    std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "Edge: " << bsp(a, b, c, edge) << std::endl;
    std::cout << "Vertex: " << bsp(a, b, c, vertex) << std::endl;

    return 0;
}
