#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cdb0, internal_6d8cdb0, public_6d8cdb0);
extern "C" NAKED register_t __cdecl internal_6d8cdb0()
{
    __asm
    {
        mov eax, offset public_6dbbbb0
        ret 
        UNREACHABLE_TRAP(0x6d8cdb0)
    }
}
