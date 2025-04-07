#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344120);
CLANG_FORWARD_PROC_SYMBOL(public_6344130);

PROC_DECLARE(0x6344120, internal_6344120, public_6344120);
extern "C" NAKED register_t __cdecl internal_6344120()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6344130
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6344120)
    }
}
