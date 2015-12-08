/*
 * HelpFunc.cpp
 *
 *  Created on: Dec 8, 2015
 *      Author: astroy
 */
#include <iostream>
#include "HelpFunc.hpp"

using namespace std;





IndexOutOfBounds::IndexOutOfBounds(const string& err):errMsg(err){}
string IndexOutOfBounds::getError(){return errMsg;}



