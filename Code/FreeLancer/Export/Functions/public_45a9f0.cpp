#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417f10);
CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_559c10);
CLANG_FORWARD_PROC_SYMBOL(public_559c20);
CLANG_FORWARD_PROC_SYMBOL(public_5a29b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2a20);

PROC_DECLARE(0x45a9f0, internal_45a9f0, public_45a9f0);
extern "C" NAKED register_t __cdecl internal_45a9f0()
{
    __asm
    {
        call public_5a2a20
        call public_5a29b0
        call public_559c20
        call public_559c10
        jmp public_417f10
        UNREACHABLE_TRAP(0x45a9f0)
    }
}
