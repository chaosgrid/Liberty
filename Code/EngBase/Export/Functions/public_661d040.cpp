#include "EngBase-PCH.h"

PROC_DECLARE(0x661d040, internal_661d040, public_661d040);
extern "C" NAKED register_t __cdecl internal_661d040()
{
    __asm
    {
        mov eax, 2
        ret 
        UNREACHABLE_TRAP(0x661d040)
    }
}
