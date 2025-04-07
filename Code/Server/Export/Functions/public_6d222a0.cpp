#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d222b0);

PROC_DECLARE(0x6d222a0, internal_6d222a0, public_6d222a0);
extern "C" NAKED register_t __cdecl internal_6d222a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d222b0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d222a0)
    }
}
