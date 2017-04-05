/*
 * NLPResult.cc
 *
 *  Created on: Apr 4, 2017
 *      Author: misa
 */

#include "NLPResult.hh"
#include <algorithm>

namespace Rokid {

void NLPSlots::addSlot(const string& key, const string& value) {
	slots.insert(map<string, string>::value_type(key, value));
}

bool NLPSlots::getSlot(const string& key, string& value) {
	std::map<string, string>::iterator it = slots.find(key);
	if(it == slots.end())
		return false;

	return true;
}

void NLPOption::addSlot(const string& key, const string& value) {
	slots.addSlot(key, value);
}

bool NLPOption::getSlot(const string& key, string& value) {
	return slots.getSlot(key, value);
}

NLPResult::NLPResult() {
	// TODO Auto-generated constructor stub

}

NLPResult::~NLPResult() {
	// TODO Auto-generated destructor stub
}

static bool _optionSort(const NLPOption& o1, const NLPOption& o2) {
	return o1.getScore() > o2.getScore();
}

void NLPResult::sort() {
	std::sort(options.begin(), options.end(), _optionSort);
}


void NLPResult::forAll(ForAllResFunc func) {
	for(vector<NLPOption>::iterator it = options.begin(); it != options.end(); it++) {
		func(*it);
	}
}

} /* namespace Rokid */
