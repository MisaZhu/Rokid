/*
 * NLP.hh
 *
 *  Created on: Apr 4, 2017
 *      Author: misa
 */

#ifndef SOURCES_NLP_HH_
#define SOURCES_NLP_HH_

#include <string>
#include "NLPResult.hh"

using namespace std;

namespace Rokid {

class NLPParser;

class NLP {
public:
	NLP();
	virtual ~NLP();

	virtual bool parse(const string& input, NLPResult &res) = 0;
};

} /* namespace Rokid */

#endif /* SOURCES_NLP_HH_ */
