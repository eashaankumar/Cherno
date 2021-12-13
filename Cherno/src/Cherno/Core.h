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

#ifdef CN_ENABLE_ASSERTS
	#define CN_ASSERT(x,...) { if(!(x)) { CN_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define CN_CORE_ASSERT(x, ...) { if(!(x)) { CN_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define CN_ASSERT(x, ...)
	#define CN_CORE_ASSERT(x, ...)
#endif // CN_ENABLE_ASSERTS

#define BIT(x) (1 << x)
