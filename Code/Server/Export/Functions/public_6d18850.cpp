#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d18850);

PROC_DECLARE(0x6d18850, internal_6d18850, public_6d18850);
extern "C" NAKED register_t __cdecl internal_6d18850()
{
    __asm
    {
        call public_6d15650
        mov ecx, eax
        jmp public_6d13bf0
        UNREACHABLE_TRAP(0x6d18850)
    }
}
