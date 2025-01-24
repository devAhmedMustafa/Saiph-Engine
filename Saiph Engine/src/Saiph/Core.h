#pragma once

#ifdef SP_PLATFORM_WINDOWS

	#if SP_BUILD_DLL
		#define SAIPH_API __declspec(dllexport)
	#else
		#define SAIPH_API __declspec(dllimport)
	#endif

#else
	#error Saiph only supports Windows!

#endif