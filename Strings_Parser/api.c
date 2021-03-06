#include "api.h"

char api_list[364][40] = {"RegDeleteKeyExA", "SetThreadPriority", "EnumProcessModules", 
		"SizeOfResource", "CryptGetHashParam", "HttpSendRequestExA", "PathFileExistsA", "VirtualAlloc", 
		"VirtualProtectFromApp", "GetClipboardData", "RegDeleteKeyTransactedA", "AttachThreadInput", 
		"RegRestoreKeyA", "CreateMutexA", "TerminateProcess", "CreateServiceA", "InternetOpenA", 
		"CryptDeriveKey", "RtlCreateHeap", "GetTempFileNameA", "ShowWindow", "DuplicateToken", 
		"RegCreateKeyTransactedA", "VirtualProtect", "RegOpenKeyTransactedA", "Wow64SetThreadContext", 
		"QueryPerformanceFrequency", "VirtualAllocFromApp", "NtDeleteValueKey", "WSACleanup", "ControlService", 
		"QueueUserAPC", "EnumResourceTypesA", "GetProcessHeaps", "NtQueryDirectoryFile", "RtlCopyMemory", 
		"RtlSetProcessIsCritical", "NetShareSetInfo", "RegCreateKeyExA", "SetWaitableTimer", "DecryptFileA", 
		"WriteFile", "RegGetKeySecurity", "NtCreateProcessEx", "RegDeleteKeyValueA", "NtReadVirtualMemory", 
		"WaitForSingleObjectEx", "Thread32First", "Module32Next", "CreatePipe", "PeekNamedPipe", "RegFlushKey", 
		"Sleep", "SuspendThread", "NtDeleteKey", "DeleteService", "SleepEx", "FindFirstFileA", "GetCurrentThread", 
		"SetCurrentDirectory", "MapViewOfFile", "VirtualAllocExNuma", "GetThreadInformation", "IsDebuggerPresent", 
		"GetKeyboardState", "Process32Next", "Gethostbyname", "LocalAlloc", "URLOpenStream", "NtCreateFile", 
		"RegisterHotKey", "RegLoadMUIStringA", "BringWindowToTop", "GetTickCount", "FindNextFileA", 
		"NtDelayExecution", "NtQueryInformationProcess", "GetThreadContext", "NtProtectVirtualMemory", 
		"SendMessageA", "GetDC", "Closesocket", "MapViewOfFile2", "GetDesktopWindow", "MoveFileExA", 
		"CallWindowProcA", "OpenFileMappingA", "NtSetSystemEnvironmentValueEx", "GetWindowsDirectoryA", 
		"GetRawInputData", "GetDriveTypeA", "Listen", "KeInsertQueueApc", "WinExec", "EncryptFileA", 
		"SetProcessDEPPolicy", "SetTimer", "OpenClipboard", "LockResource", "DnsQuery_A", "RegReplaceKeyA", 
		"GetFileTime", "CryptCreateHash", "GetCurrentHwProfileA", "NtAllocateVirtualMemory", "RegSaveKeyA", 
		"NtContinue", "GlobalAlloc", "MapViewOfFileEx", "SetThreadToken", "CryptDecrypt", "NtTerminateThread", 
		"GetProcAddress", "SetPropA", "FindWindowExA", "GetThreadId", "FlushEfsCache", "URLDownloadToFile", 
		"GetTempPathA", "GetModuleHandleA", "GetCurrentThreadId", "VirtualQueryEx", "FindNextUrlCacheEntryA", 
		"HeapAlloc", "CopyFileExA", "RtlGetVersion", "BitBlt", "LookupPrivilegeValueA", "GetComputerNameA", 
		"GetWindowDC", "NtWriteVirtualMemory", "SetClipboardData", "CreateFile2", "WNetAddConnection2A", 
		"MoveFileA", "Module32First", "CreateFileA", "UnhookWindowsHookEx", "GetSystemDirectoryA", 
		"GetIpNetTable", "RegSetValueExA", "WSAIoctl", "NtCreateUserProcess", "IcmpSendEcho", "RegDeleteTreeA", 
		"NtReadVirtualMemoryEx", "Bind", "StartServiceA", "GetVersionExA", "EnumResourceTypesExA", 
		"VirtualAlloc2", "RegisterRawInputDevices", "SetFocus", "PostThreadMessageA", "CryptBinaryToString", 
		"CallNextHookEx", "RegGetValueA", "VirtualAlloc2FromApp", "RegDeleteValueA", "PostMessageA", 
		"NtSetInformationProcess", "InternetCloseHandle", "GetLogicalProcessorInformationEx", "NetShareGetInfo", 
		"Select", "CountClipboardFormats", "SetWindowLongPtrA", "ConnectNamedPipe", "CreateRemoteThreadEx", 
		"SetFileAttributesA", "StretchBlt", "FindResourceExA", "DrawTextExA", "CryptStringToBinary", 
		"IsWoW64Process", "NtCreateSection", "RegConnectRegistryA", "DeviceIoControl", "GetSystemDefaultLangId", 
		"LookupAccountNameA", "CheckRemoteDebuggerPresent", "GetCurrentProcessId", "RegOpenKeyExA", "NtClose", 
		"CreateTimerQueueTimer", "GetModuleBaseNameA", "Send", "NtQueueApcThreadEx2", "RegSetKeySecurity", 
		"WaitForMultipleObjectsEx", "NtMakeTemporaryObject", "OpenProcessToken", "CryptAcquireContextA", 
		"RegSetKeyValueA", "MapVirtualKeyA", "lstrcatA", "CreateWaitableTimer", "GetAsyncKeyState", "PeekMessageA", 
		"WNetCloseEnum", "WSASocketA", "LoadResource", "GetLogicalProcessorInformation", "RegLoadKeyA", 
		"CreateFileMappingA", "InternetOpenUrlA", "NtAdjustPrivilegesToken", "WSAStartup", "GetAdaptersInfo", 
		"NtQueryTimer", "CryptDestroyKey", "StartServiceCtrlDispatcherA", "FindFirstUrlCacheEntryA", 
		"NtWaitForMultipleObjects", "NtWaitForSingleObject", "GetUserNameA", "OpenSCManagerA", "InternetReadFile", 
		"QueryPerformanceCounter", "SearchPathA", "ReadFile", "Connect", "AdjustTokenPrivileges", "CreateThread", 
		"RegEnumKeyExA", "SetWinEventHook", "GetLogicalDrives", "WaitForSingleObject", "FindResourceA", 
		"CopyFile2", "NtOpenProcess", "RegEnumValueA", "Accept", "HeapReAlloc", "RtlMoveMemory", 
		"InternetConnectA", "GetKeynameTextA", "RegQueryMultipleValuesA", "Recv", "HttpAddRequestHeaders", 
		"NtSetValueKey", "LockResource", "Inet_addr", "NtDuplicateObject", "OpenThread", "RegUnLoadKeyA", 
		"InternetReadFileExA", "CryptSetKeyParam", "CreateToolhelp32Snapshot", "GetSystemTimeAsFileTime", 
		"ExitWindowsEx", "OpenProcess", "OutputDebugStringA", "HttpSendRequestA", "GetNativeSystemInfo", 
		"RegQueryInfoKeyA", "HttpOpenRequestA", "NtQueueApcThread", "DeleteFileA", "NtResumeThread", 
		"GetKeyState", "WriteProcessMemory", "WaitForMultipleObjects", "RegDeleteKeyA", "NtCreateThread", 
		"FtpPutFileA", "GetFileAttributesA", "RegSaveKeyExA", "SetEnvironmentVariableA", "NtUnmapViewOfSection", 
		"EnumDeviceDrivers", "NtSetInformationThread", "NtOpenThread", "RegCopyTreeA", 
		"NtQuerySystemEnvironmentValueEx", "GetTickCount64", "NetShareEnum", "VirtualProtectEx", 
		"SendMessageCallbackA", "CreateProcessWithTokenW", "DnsQueryEx", "GetForegroundWindow", "CreateMutexExA", 
		"GetDCEx", "RegOpenKeyA", "SetWindowsHookExA", "CryptDestroyHash", "NtCreateThreadEx", 
		"RegOverridePredefKey", "CreateProcessAsUserA", "RegCreateKeyA", "EnumProcessModulesEx", 
		"NtShutdownSystem", "ShellExecuteA", "GetProcessIdOfThread", "GetMessageA", "SetThreadContext", 
		"FindClose", "ReadProcessMemory", "URLOpenBlockingStream", "WNetOpenEnumA", "Socket", "LoadLibraryA", 
		"TerminateThread", "LdrLoadDll", "MapVirtualKeyExA", "MapViewOfFile3", "NtTerminateProcess", 
		"EnumWindows", "WNetAddConnectionA", "RegEnumKeyA", "NtSetContextThread", "GetSystemTime", 
		"CreateProcessA", "CryptEncrypt", "SetWindowLongA", "NtSuspendProcess", "OpenServiceA", "GetProcessId", 
		"ShellExecuteExA", "Thread32Next", "GetProcessHeap", "CryptReleaseContext", "ResumeThread", 
		"LoadLibraryExA", "FindWindowA", "NtCreateProcess", "SendMessageTimeoutA", "ImpersonateLoggedOnUser", 
		"RegOpenUserClassesRoot", "CopyFileA", "timeSetEvent", "Gethostname", "InternetWriteFile", 
		"UnmapViewOfFile", "CreateWindowExA", "Toolhelp32ReadProcessMemory", "CreateRemoteThread", 
		"CryptHashData", "RegOpenCurrentUser", "NetShareAdd", "VirtualAllocEx", "HeapCreate", 
		"WNetEnumResourceA", "NtResumeProcess", "CryptGenRandom", "InternetSetOptionA", "SetForegroundWindow", 
		"URLDownloadToCacheFile", "SetFileTime", "EnumDesktopWindows", "ControlServiceExA", "RegCloseKey", 
		"ioctlsocket", "NtMapViewOfSection", "NtQueueApcThreadEx", "EnumProcesses", "RegQueryValueExA", 
		"GetCurrentProcess", "NetShareCheck", "Process32First", "GetModuleFileNameA", "GetModuleFileNameExA", 
		"SendNotifyMessageA"};