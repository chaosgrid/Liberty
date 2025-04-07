#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9a6e);
CLANG_FORWARD_PROC_SYMBOL(public_65dbaaf);
CLANG_FORWARD_PROC_SYMBOL(public_65dd390);
CLANG_FORWARD_PROC_SYMBOL(public_65de658);

PROC_DECLARE(0x65dd390, internal_65dd390, public_65dd390);
/* CHUNK of public_65d9068 */
extern "C" NAKED register_t __cdecl internal_65dd390()
{
    __asm
    {
        push 0xA
        call public_65dbaaf
        push 0x16
        call public_65de658
        pop ecx
        pop ecx
        push 3
        call public_65d9a6e
        UNREACHABLE_TRAP(0x65dd390)
    }
}
