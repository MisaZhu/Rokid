/*
 * NLP_test.cc
 *
 *  Created on: Apr 4, 2017
 *      Author: Misa.Z (misa.zhu@gmail.com)
 */

#include <NLP/PatternNLP/PatternNLP.hh>
#include <iostream>

using namespace Rokid;

void forAll(const NLPOption& option) {
	std::cout << "domain: " << option.getDomain()
			<< ", intent: " << option.getIntent()
			<< ", score: "  << option.getScore() << "\n";
}


int main(int argc, char** argv) {
	PatternNLP nlp;
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
