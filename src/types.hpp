/*
 * Copyright 2015 gtalent2@gmail.com
 * 
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef MEMFUSE_TYPES_CPP
#define MEMFUSE_TYPES_CPP

namespace jsonio {

typedef std::string string;
typedef long long int64_t;
typedef unsigned long long uint64_t;

enum Error {
	Ok = 0,
	TypeMismatch = 1,
	MissingField = 2,
	CouldNotAccessFile = 4,
	GenericParsingError = 8
};


inline Error operator^(Error a, Error b) {
	return (Error) (((uint64_t) a) ^ ((uint64_t) b));
}

inline Error operator|(Error a, Error b) {
	return (Error) (((uint64_t) a) | ((uint64_t) b));
}

inline Error operator&(Error a, Error b) {
	return (Error) (((uint64_t) a) & ((uint64_t) b));
}

inline const Error &operator^=(Error &a, Error b) {
	return a = a ^ b;
}

inline const Error &operator|=(Error &a, Error b) {
	return a = a | b;
}

inline const Error &operator&=(Error &a, Error b) {
	return a = a & b;
}

enum Type {
	None,
	Bool,
	Int,
	Double,
	String,
	Object
};

class Model {
};

}

#endif
