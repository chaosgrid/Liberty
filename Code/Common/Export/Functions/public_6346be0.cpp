#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63461a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346be0);

PROC_DECLARE(0x6346be0, internal_6346be0, public_6346be0);
extern "C" NAKED register_t __cdecl internal_6346be0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        lea edx, ds:[ecx+0x94]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        lea eax, ds:[ecx+0xA4]
        push eax
        push edx
        call public_63461a0
        ret 8
        UNREACHABLE_TRAP(0x6346be0)
    }
}
