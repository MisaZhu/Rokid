/*
 * NLP_test.cc
 *
 *  Created on: Apr 4, 2017
 *      Author: misa
 */

#include "NLP/NLP.hh"
#include <iostream>

using namespace Rokid;

void forAll(const NLPOption& option) {
	std::cout << "domain: " << option.getDomain()
			<< ", intent: " << option.getIntent()
			<< ", score: "  << option.getScore() << "\n";
}

class MyNLP: public NLP {
public:
	bool parse(const string& input, NLPResult& res) {
		return true;
	}
};

int main(int argc, char** argv) {
	MyNLP nlp;
	NLPResult res;

	nlp.parse("", res);

	res.add(NLPOption("domain1", "intent1", 0.1));
	res.add(NLPOption("domain1", "intent2", 0.4));
	res.add(NLPOption("domain2", "intent1", 0.3));
	res.add(NLPOption("domain2", "intent2", 0.9));

	res.sort();

	res.forAll(forAll);
	return 0;
}
