#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51dfb0, internal_51dfb0, public_51dfb0);
extern "C" NAKED register_t __cdecl internal_51dfb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc138]
        mov dword ptr ds : [public_6752bc], eax
        ret 
        UNREACHABLE_TRAP(0x51dfb0)
    }
}
