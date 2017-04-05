/*
 * NLPResult.hh
 *
 *  Created on: Apr 4, 2017
 *      Author: Misa.Z (misa.zhu@gmail.com)
 */

#ifndef SOURCES_NLPRESULT_HH_
#define SOURCES_NLPRESULT_HH_

#include <vector>
#include <map>
#include <string>

using namespace std;

namespace Rokid {

class NLPSlots {
	map<string, string> slots;
public:
	void clear() {
		slots.clear();
	}

	void addSlot(const string& key, const string& value);

	bool getSlot(const string& key, string& value);
};

class NLPOption {
	float score;
	string domain;
	string intent;
	NLPSlots slots;
public:
	NLPOption() {
		score = 0.0f;
	}

	NLPOption(const string& domain, const string& intent, float score) {
		this->domain = domain;
		this->intent = intent;
		this->score = score;
	}

	const string& getDomain() const {
		return domain;
	}

	void setDomain(const string& domain) {
		this->domain = domain;
	}

	const string& getIntent() const {
		return intent;
	}

	void setIntent(const string& intent) {
		this->intent = intent;
	}

	const NLPSlots& getSlots() const {
		return slots;
	}

	void addSlot(const string& key, const string& value);

	bool getSlot(const string& key, string& value);

	void clear() {
		score = 0.0f;
		domain = "";
		intent = "";
		slots.clear();
	}

	float getScore() const {
		return score;
	}

	void setScore(float score) {
		this->score = score;
	}
};

typedef void (*ForAllResFunc)(const NLPOption& option);

class NLPResult {
	vector<NLPOption> options;
public:
	NLPResult();
	virtual ~NLPResult();

	void clear() {
		options.clear();
	}

	const vector<NLPOption>& getOptions() const {
		return options;
	}

	void add(const NLPOption & option) {
		options.push_back(option);
	}

	/**
	 * sort the nlp result options by the socre.
	 */
	void sort();

	/**
	 * Traverse the whole options from begin to end, and execute func with each option.
	 */
	void forAll(ForAllResFunc func);
};

} /* namespace Rokid */

#endif /* SOURCES_NLPRESULT_HH_ */
