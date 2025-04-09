#include "FreeLancer-PCH.h"

PROC_DECLARE(0x50c560, internal_50c560, public_50c560);
extern "C" NAKED register_t __cdecl internal_50c560()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db530]
        mov dword ptr ds : [public_67518c], eax
        ret 
        UNREACHABLE_TRAP(0x50c560)
    }
}
