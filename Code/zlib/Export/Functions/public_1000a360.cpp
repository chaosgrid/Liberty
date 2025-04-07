#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10009ed0);

PROC_DECLARE(0x1000a360, internal_1000a360, public_1000a360);
extern "C" NAKED register_t __cdecl internal_1000a360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push eax
        call public_10009ed0
        ret 0x28
        UNREACHABLE_TRAP(0x1000a360)
    }
}
