#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65deae9);
CLANG_FORWARD_PROC_SYMBOL(public_65deaf2);

PROC_DECLARE(0x65deae9, internal_65deae9, public_65deae9);
extern "C" NAKED register_t __cdecl internal_65deae9()
{
    __asm
    {
        push 1
        call public_65deaf2
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65deae9)
    }
}
