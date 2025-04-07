#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63661a0);

PROC_DECLARE(0x63661a0, internal_63661a0, public_63661a0);
extern "C" NAKED register_t __cdecl internal_63661a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        add eax, 0xC
        and eax, 0xFFFFFFF0
        mov dword ptr ds : [ecx+0xC], eax
        ret 
        UNREACHABLE_TRAP(0x63661a0)
    }
}
