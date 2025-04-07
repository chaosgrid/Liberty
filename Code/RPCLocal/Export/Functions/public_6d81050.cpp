#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81050, internal_6d81050, public_6d81050);
extern "C" NAKED register_t __cdecl internal_6d81050()
{
    __asm
    {
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6d81050)
    }
}
