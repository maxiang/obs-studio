#pragma once

#include <windows.h>

void mssapi_thread(OBSWeakSource source, HANDLE stop_event,
		std::string lang_name);
