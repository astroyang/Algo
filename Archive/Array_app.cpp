/*
 * Array_app.cpp
 *
 *  Created on: Nov 25, 2015
 *      Author: astroy
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "HelpFunc.hpp"

using namespace std;



int main()
{

/*
	int ip[15];
	string iput;
	getline(cin,iput);
	int i=0;

	while (iput!=""){
		if(iput.find(" ")!=string::npos){
		ip[i++]=stoi(iput.substr(0,iput.find(" ")));
		iput=iput.substr(iput.find(" ")+1);
		}else{
			ip[i++]=stoi(iput);
			iput="";
		}
	}

	for(int j=0; j<i; j++){
		cout<<ip[j]<<endl;
	}
	cin>>iput;
*/

	int n;
	string tmp;
	while(getline(cin,tmp)){
		vector<int> vector_of_int;
		stringstream tmpss(tmp);
		while(tmpss >> n)	  vector_of_int.push_back(n);
		typedef vector<int>::iterator index;
		int size = vector_of_int.size();

		// Insertion sort
		insertionSort(vector_of_int,size );
		for(index i=vector_of_int.begin();i!=vector_of_int.end();i++){
			cout<<*i<<" ";
		}
		cout << endl;
	}

return 0;
}



