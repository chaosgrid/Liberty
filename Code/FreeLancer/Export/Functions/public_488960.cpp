#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

PROC_DECLARE(0x488960, internal_488960, public_488960);
extern "C" NAKED register_t __cdecl internal_488960()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45a9f0
        mov ecx, esi
        pop esi
        jmp public_5a0760
        UNREACHABLE_TRAP(0x488960)
    }
}
