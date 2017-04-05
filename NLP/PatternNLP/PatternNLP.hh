/*
 * PatternNLP.hh
 *
 *  Created on: Apr 5, 2017
 *      Author: Misa.Z (misa.zhu@gmail.com)
 */

#ifndef NLP_PATTERNNLP_HH_
#define NLP_PATTERNNLP_HH_

#include "NLP/NLP.hh"
#include "NLP/NLPResult.hh"

namespace Rokid {

class PatternNLP: public NLP {
protected:
	/**
	 * fetch public slots and replace the slot value with slot label(name);
	 * public slots like time/people/location......
	 * @param input, input string;
	 * @param output, output string with slot label replaced;
	 * @param slots, fetched slot key/value pairs.
	 */
	virtual bool fetchPublicSlots(const string& input, string& output, NLPSlots& slots);
public:
	PatternNLP();
	virtual ~PatternNLP();

	virtual bool parse(const string& input, NLPResult& res);
};

} /* namespace Rokid */

#endif /* NLP_PATTERNNLP_HH_ */
