/*
Copyright (c) 2009 AxonEngine Team

This file is part of the AxonEngine project, and may only be used, modified, 
and distributed under the terms of the AxonEngine project license, license.txt.  
By continuing to use, modify, or distribute this file you indicate that you have
read the license and understand and accept it fully.
*/

#include "../private.h"

AX_BEGIN_NAMESPACE

const Vector3 Vector3::One = Vector3(1,1,1);
const Vector3 Vector3::Zero = Vector3(0,0,0);

std::string Vector3::toString() const {
	std::string result;
	StringUtil::sprintf(result, "%f %f %f", x, y, z);
	return result;
}

bool Vector3::fromString(const char *str) {
	int v = sscanf(str, "%f %f %f", &x, &y, &z);
	AX_ASSERT(v == 3);
	return v == 3;
}

AX_END_NAMESPACE
