/*
 * SlotFetcher.cc
 *
 *  Created on: Apr 5, 2017
 *      Author: Misa.Z (misa.zhu@gmail.com)
 */

#include <NLP/PatternNLP/SlotFetcher.hh>

namespace Rokid {

SlotFetcher::SlotFetcher() {
	// TODO Auto-generated constructor stub

}

SlotFetcher::~SlotFetcher() {
	// TODO Auto-generated destructor stub
}

/**
 * pattern(s) input format:
 * each line will be the pattern(s) for one label;
 * LABEL1:PATTERN1;PATTERN2;....PATTERN(n)\n
 *
 * pattern format:
 *
 */
bool SlotFetcher::loadPatterns(const string& pattern) {
	return true;
}

bool SlotFetcher::fetch(const string& input, string& output, NLPSlots& slots) {
	return true;
}

} /* namespace Rokid */
