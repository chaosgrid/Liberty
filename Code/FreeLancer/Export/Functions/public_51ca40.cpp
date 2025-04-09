#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51ca40, internal_51ca40, public_51ca40);
extern "C" NAKED register_t __cdecl internal_51ca40()
{
    __asm
    {
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x51ca40)
    }
}
