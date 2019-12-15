//REFERENCE:https://www.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html#zz-2.4
#include <iostream>


//contains all functions to test
namespace functions{
	/*tests the addition via pointer(C-style)
	result: works exactly as in C*/
	void add_number_ptr(int number_to_add,int *dest){
		*dest=*dest+number_to_add;
	}
	/*tests the addition via reference(unique to C++)
	result:	works fine*/
	void add_number_ref(int number_to_add,int &dest){
		dest+=number_to_add;
	}
	/*tests reference creation and its' change  inside the function.
	result: doesn't produce any errors, but doesn't change the original
	number as well*/
	void make_a_reference_inside_function(int number){
		int &ref=number;
		std::cout<<"this is a reference\t"<<ref<<std::endl;
		ref++;
		std::cout<<"after the change, the reference is\t"<<ref<<std::endl;
		std::cout<<"after the change, the number is\t"<<number<<std::endl;

	}
	
	/*You can avoid pointer syntax and pass a reference to the variable, thus safely changing
	the value of the variable
	result: works as intended
	P.S You can either pass a reference or the the variable itself
	example:change_a_value(number) OR change_a_value(ref_to_number) */
	void change_a_value(int &ref){
	ref++;
	}
	
	/*Shows that it's impossible to make a pointer of a constant variable
	void pointer_to_a_constant_variable(){
		const int value = 5; // value is const
		int *ptr = &value; // compile error: cannot convert const int* to int*
		*ptr = 6; // change value to 6
	} */

	/*You can make a constant pointer to a constant variable but can't change its' value
	void constant_pointer_to_a_constant_variable(){
		const int value = 5;
		const int *ptr = &value; // this is okay, ptr is a non-const pointer that is pointing to a "const int"
		*ptr = 6; // not allowed, we can't change a const value
	} */
	
	/*swaps 2 variables solely using pointers
	P.S DOESN'T WORK AS INTENDED YET
	*/
	void swap(int **ptr1,int **ptr2){
	int *temp=*ptr1;
	*ptr2=*ptr1;
	*ptr1=temp;
	}

}

int main(void){
	int number=5;
	int *ptr=&number;
	int &ref=number;
	int number2=10;
	int *ptr2=&number2;
	functions::swap(&ptr,&ptr2);
	std::cout<<"after the swap, ptr points to "<<*ptr<<" while ptr2 to "<<*ptr2<<std::endl;
	std::cout<<"after the swap, num1 is"<<number<<" while num2 is "<<number2<<std::endl;

}
