#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4021b0);
CLANG_FORWARD_PROC_SYMBOL(public_4022f0);

PROC_DECLARE(0x4022f0, internal_4022f0, public_4022f0);
extern "C" NAKED register_t __cdecl internal_4022f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        call public_4021b0
        ret 
        UNREACHABLE_TRAP(0x4022f0)
    }
}
