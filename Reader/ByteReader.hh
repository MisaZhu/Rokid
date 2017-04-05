#ifndef ByteReader_hh
#define ByteReader_hh

#include "utils/utils.hh"

class ByteReader {
public:
	virtual ~ByteReader() { }

	virtual Byte read() = 0;
};



#endif
