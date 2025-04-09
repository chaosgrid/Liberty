#include "FreeLancer-PCH.h"

PROC_DECLARE(0x454140, internal_454140, public_454140);
extern "C" NAKED register_t __cdecl internal_454140()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 
        UNREACHABLE_TRAP(0x454140)
    }
}
