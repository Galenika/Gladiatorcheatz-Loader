#include <Windows.h>
#include <tchar.h>

#define STATUS_NO_YIELD_PERFORMED 0x40000024 

BOOL NtYieldExecutionAPI();