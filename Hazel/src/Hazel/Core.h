#pragma once

// Macro to simplify __declspec(dllexport) and __declspec(dllimport)

#ifdef HZ_PLATFORM_WINDOWS
	#pragma warning(disable: 4251)
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else	
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows!
#endif

// RESEARCH THIS, bit fields

#define BIT(x) (1 << x)