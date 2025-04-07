#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23990);

PROC_DECLARE(0x6d23980, internal_6d23980, public_6d23980);
extern "C" NAKED register_t __cdecl internal_6d23980()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d23990
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d23980)
    }
}
