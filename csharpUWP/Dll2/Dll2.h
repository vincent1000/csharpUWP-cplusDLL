#ifndef __DLL2_H__
#define __DLL2_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#ifdef SDK2_EXPORTS
#define SDK2_API __declspec(dllexport)
#else // SDK1_EXPORTS
#define SDK2_API __declspec(dllimport)
#endif // SDK1_EXPORTS
#else
#define SDK1_API
#endif // #ifdef _WIN32
	SDK2_API void DLL2Init();

#ifdef __cplusplus
}
#endif

#endif //
