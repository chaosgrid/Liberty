#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23a60);

PROC_DECLARE(0x6d23a50, internal_6d23a50, public_6d23a50);
extern "C" NAKED register_t __cdecl internal_6d23a50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d23a60
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d23a50)
    }
}
