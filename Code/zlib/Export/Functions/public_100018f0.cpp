#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001840);

PROC_DECLARE(0x100018f0, internal_100018f0, public_100018f0);
extern "C" NAKED register_t __cdecl internal_100018f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push 0xFFFFFFFF
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        call public_10001840
        ret 0x10
        UNREACHABLE_TRAP(0x100018f0)
    }
}
