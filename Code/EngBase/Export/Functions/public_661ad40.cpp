#include "EngBase-PCH.h"

PROC_DECLARE(0x661ad40, internal_661ad40, public_661ad40);
extern "C" NAKED register_t __cdecl internal_661ad40()
{
    __asm
    {
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x661ad40)
    }
}
