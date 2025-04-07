#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1330);
CLANG_FORWARD_PROC_SYMBOL(public_65d1340);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c6a);

PROC_DECLARE(0x65d1330, internal_65d1330, public_65d1330);
extern "C" NAKED register_t __cdecl internal_65d1330()
{
    __asm
    {
        call public_65d6c6a
        push eax
        call public_65d1340
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d1330)
    }
}
