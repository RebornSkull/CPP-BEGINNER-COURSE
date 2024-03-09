#include <iostream>

/*Namespace = provides a solution preventing name conflicts
in large projects. Each entity needs a unique name.
A namespace allows for indentically named entities
as long as as the namespaces are different. */
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {
    using namespace first;

    std::cout << second::x;

    return 0;
}

/*int main() {
    using namespace first;

    std::cout << x;

    return 0;
} */
/*int main() {
    using namespace first;

    std::cout << second::x;

    return 0;
} */