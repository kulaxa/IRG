#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

int main() {
	std::cout << "Hello World!" << std::endl;
	glm::vec3 vector1 = glm::vec3(1.0f, 2.0f, 3.0f);
	glm::vec3 vector2 = glm::vec3(4.0f, 5.0f, 6.0f);
	std::cout << glm::to_string(vector1 * vector2) << std::endl;
}