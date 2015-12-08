/*
 * HelpFunc.hpp
 *
 *  Created on: Dec 8, 2015
 *      Author: astroy
 */

#ifndef HELPFUNC_HPP_
#define HELPFUNC_HPP_

#include <iostream>
using namespace std;


template <typename T>
void swapping(T & i, T & j){
	T tmp;
	tmp = i;
	i = j;
	j = tmp;
}

template <typename T>
void insertionSort(T& array, int size){
	for (int i=1;i<size;i++){
		for (int j=i;j>0;j--){
			if (array[j]<array[j-1]){
				swapping(array[j],array[j-1]);
			}else{
				break;
			}
		}
	}
}

class IndexOutOfBounds{
public:
	IndexOutOfBounds(const string& err);
	string getError();
private:
	string errMsg;
};


#endif /* HELPFUNC_HPP_ */
