#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45b600, internal_45b600, public_45b600);
extern "C" NAKED register_t __cdecl internal_45b600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cea04]
        mov dword ptr ds : [public_66d3e4], eax
        ret 
        UNREACHABLE_TRAP(0x45b600)
    }
}
