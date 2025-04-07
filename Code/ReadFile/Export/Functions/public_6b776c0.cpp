#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76410);

PROC_DECLARE(0x6b776c0, internal_6b776c0, public_6b776c0);
extern "C" NAKED register_t __cdecl internal_6b776c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push edx
        call public_6b76410
        ret 0x10
        UNREACHABLE_TRAP(0x6b776c0)
    }
}
