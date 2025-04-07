#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f3f0, internal_6d8f3f0, public_6d8f3f0);
extern "C" NAKED register_t __cdecl internal_6d8f3f0()
{
    __asm
    {
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6d8f3f0)
    }
}
