#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53e920, internal_53e920, public_53e920);
extern "C" NAKED register_t __cdecl internal_53e920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df810]
        mov dword ptr ds : [public_678a0c], eax
        ret 
        UNREACHABLE_TRAP(0x53e920)
    }
}
