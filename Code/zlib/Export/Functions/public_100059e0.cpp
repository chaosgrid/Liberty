#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100058e0);
CLANG_FORWARD_PROC_SYMBOL(public_100059e0);

PROC_DECLARE(0x100059e0, internal_100059e0, public_100059e0);
extern "C" NAKED register_t __cdecl internal_100059e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push ecx
        push 0xF
        push edx
        call public_100058e0
        ret 0xC
        UNREACHABLE_TRAP(0x100059e0)
    }
}
