#include "Common-PCH.h"

PROC_DECLARE(0x631d610, internal_631d610, public_631d610);
extern "C" NAKED register_t __cdecl internal_631d610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3bf4]
        mov dword ptr ds : [public_6401800], eax
        ret 
        UNREACHABLE_TRAP(0x631d610)
    }
}
