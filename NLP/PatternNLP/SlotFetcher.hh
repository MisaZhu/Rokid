/*
 * SlotFetcher.hh
 *
 *  Created on: Apr 5, 2017
 *      Author: Misa.Z (misa.zhu@gmail.com)
 */

#ifndef NLP_PATTERNNLP_SLOTFETCHER_HH_
#define NLP_PATTERNNLP_SLOTFETCHER_HH_

#include "NLP/NLPResult.hh"

namespace Rokid {

class SlotFetcher {
public:
	SlotFetcher();
	virtual ~SlotFetcher();

	/**
	* load slots patterns.
	* @param input, slots pattern input string.
	*/
	virtual bool loadPatterns(const string& pattern);

	/**
	* fetch slots and replace the slot value with slot label(name);
	* @param input, input string;
	* @param output, output string with slot label replaced;
	* @param slots, fetched slot key/value pairs.
	*/
	virtual bool fetch(const string& input, string& output, NLPSlots& slots);
};

} /* namespace Rokid */

#endif /* NLP_PATTERNNLP_SLOTFETCHER_HH_ */
