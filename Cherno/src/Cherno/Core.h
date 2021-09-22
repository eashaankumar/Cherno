#pragma once

#ifdef CN_PLATFORM_WINDOWS
	#ifdef CN_BUILD_DLL
		#define CHERNO_API __declspec(dllexport)
	#else
		#define CHERNO_API __declspec(dllimport)
	#endif
#else
	#error Cherno only supports Windows!
#endif
