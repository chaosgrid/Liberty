#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3f30);

PROC_DECLARE(0x437530, internal_437530, public_437530);
extern "C" NAKED register_t __cdecl internal_437530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_4c3f30
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x437530)
    }
}
