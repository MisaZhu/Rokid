/*
 * PatternNLP.cc
 *
 *  Created on: Apr 5, 2017
 *      Author: Misa.Z (misa.zhu@gmail.com)
 */

#include "PatternNLP.hh"

namespace Rokid {

PatternNLP::PatternNLP() {
	// TODO Auto-generated constructor stub

}

PatternNLP::~PatternNLP() {
	// TODO Auto-generated destructor stub
}

bool PatternNLP::fetchPublicSlots(const string& input, string& output,
		NLPSlots& slots) {
	return true;
}

bool PatternNLP::parse(const string& input, NLPResult& res) {
	string pattern;
	NLPSlots slots;

	//fetch public slots first and make primitive pattern from input string with slot's labels.
	if(!fetchPublicSlots(input, pattern, slots))
		return false;

	return true;
}

} /* namespace Rokid */
