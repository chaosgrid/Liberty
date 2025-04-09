#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x442da0, internal_442da0, public_442da0);
extern "C" NAKED register_t __cdecl internal_442da0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x442da0)
    }
}
