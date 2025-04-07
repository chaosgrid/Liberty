#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d314d0);

PROC_DECLARE(0x6d314a0, internal_6d314a0, public_6d314a0);
extern "C" NAKED register_t __cdecl internal_6d314a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d314d0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d314a0)
    }
}
