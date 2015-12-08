/*
 * GameEntry_Array.cpp
 *
 *  Created on: Dec 8, 2015
 *      Author: astroy
 */
#include <iostream>
#include "HelpFunc.hpp"
using namespace std;


class GameEntry{
public:
	GameEntry(const string& n="", int s=0);
	string getName() const; // accessor
	int getScore() const;

private:
	string name;
	int score;
};

GameEntry::GameEntry(const string& n, int s): name(n),score(s) {}

string GameEntry::getName() const {  return name;}

int GameEntry::getScore() const {  return score;}

class Scores{
public:
	Scores(int m=10, int n=0);
	~Scores();
	void add (const GameEntry& e);
	GameEntry remove(int i)
		throw(IndexOutOfBounds);
private:
	int maxEntries;			// max entries
	int numEntries;			// actual total of entries
	GameEntry* entries;	// array of entries
};

Scores::Scores(int m, int n): maxEntries(m), numEntries(n){
	entries = new GameEntry[maxEntries];
}
Scores::~Scores(){
	delete[] entries;
}
void Scores::add(const GameEntry& e){
	int newScore = e.getScore();
	
	if((numEntries < maxEntries)){
		entries[numEntries] = e;
		numEntries++;
	}else if(newScore > entries[maxEntries-1].getScore()){
		entries[maxEntries-1] = e;
	}else return;

	int i=numEntries-2;
	while((i>=0)&&(entries[i].getScore()<entries[i+1].getScore())){
		swap(entries[i],entries[i+1]);
		i--;
	}
}
GameEntry Scores::remove(int i) throw(IndexOutOfBounds){
	if((i<0)or(i>maxEntries-1))
		throw IndexOutOfBounds("Invalid Index");
	GameEntry e = entries[i];
	while(i<numEntries-1){
		entries[i] = entries[i+1];
		i++;
	}
	numEntries--;
	return e;
}


int main(){

	Scores s;
	GameEntry q("A",3), r("B",100), e("C",2);

	s.add(q);
	s.add(r);
	s.add(e);
	GameEntry t=s.remove(0);
	cout<<t.getScore()<<t.getName()<<endl;
	t=s.remove(0);
	cout<<t.getScore()<<t.getName()<<endl;
	t=s.remove(0);
	cout<<t.getScore()<<t.getName()<<endl;



	return 0;

}


