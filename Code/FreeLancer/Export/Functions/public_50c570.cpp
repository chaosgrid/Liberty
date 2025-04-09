#include "FreeLancer-PCH.h"

PROC_DECLARE(0x50c570, internal_50c570, public_50c570);
extern "C" NAKED register_t __cdecl internal_50c570()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db534]
        mov dword ptr ds : [public_675188], eax
        ret 
        UNREACHABLE_TRAP(0x50c570)
    }
}
