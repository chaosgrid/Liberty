#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d36b91);
CLANG_FORWARD_PROC_SYMBOL(public_6d36fbf);

PROC_DECLARE(0x6d36fbf, internal_6d36fbf, public_6d36fbf);
extern "C" NAKED register_t __cdecl internal_6d36fbf()
{
    __asm
    {
        jmp public_6d36b91
        UNREACHABLE_TRAP(0x6d36fbf)
    }
}
