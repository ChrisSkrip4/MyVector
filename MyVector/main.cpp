#include <iostream>
#include "Vector.h"
 


using namespace MyVector;

int main()
{
	Vector<int> v1(10, 5);
	Vector<int> v2(v1);
	Vector<int> v3{ 1,2,3 };

	std::cout << "v1 = ";
	for (size_t i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << " ";
	} std::cout << std::endl;

	std::cout << "v2 = ";
	for (size_t i = 0; i < v2.size(); i++) {
		std::cout << v2[i] << " ";
	} std::cout << std::endl;

	std::cout << "v3 = ";
	for (size_t i = 0; i < v3.size(); i++) {
		std::cout << v3[i] << " ";
	} std::cout << std::endl;

	v3 = v1;

	std::cout << "v3 = ";
	for (size_t i = 0; i < v3.size(); i++) {
		std::cout << v3[i] << " ";
	} std::cout << std::endl;


	/*Vector<int> vec1{1,2};
	Vector<int> vec2 { 7, 8, 9, 4, 5 };


	std::cout << "vec1 = ";
	for (size_t i = 0; i < vec1.size(); i++) {
		std::cout << vec1.at(i) << " ";
	} std::cout << std::endl;

	std::cout << "vec2 = ";
	for (size_t i = 0; i < vec2.size(); i++) {
		std::cout << vec2.at(i) << " ";
	} std::cout << std::endl;

	//vec1.swap(vec2);
	vec1.clear();

	std::cout << "vec1 = ";
	for (size_t i = 0; i < vec1.size(); i++) {
		std::cout << vec1.at(i) << " ";
	} std::cout << std::endl;

	std::cout << "vec2 = ";
	for (size_t i = 0; i < vec2.size(); i++) {
		std::cout << vec2.at(i) << " ";
	} std::cout << std::endl;


	std::cout << "vec1 size = " << vec1.size() << std::endl;;
	std::cout << "vec2 size = " << vec2.size();

	*/

	/*Vector <double> v_d(4);

	for (auto x : v_d) {
		std::cout << x << " ";
	} std::cout << std::endl;

	v_d.push_back(5.7);

	for (size_t i = 0; i < v_d.size(); i++) {
		std::cout << v_d[i] << " ";
	}std::cout << std::endl;

	for (auto x : v_d) {
		std::cout << x << " ";
	} std::cout << std::endl;
	*/

}
