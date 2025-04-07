#include "EngBase-PCH.h"

PROC_DECLARE(0x661ad80, internal_661ad80, public_661ad80);
extern "C" NAKED register_t __cdecl internal_661ad80()
{
    __asm
    {
        mov eax, 8
        ret 
        UNREACHABLE_TRAP(0x661ad80)
    }
}
