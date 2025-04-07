#include "Common-PCH.h"

PROC_DECLARE(0x62bb5b0, internal_62bb5b0, public_62bb5b0);
extern "C" NAKED register_t __cdecl internal_62bb5b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ecc0]
        mov dword ptr ds : [public_63fc48c], eax
        ret 
        UNREACHABLE_TRAP(0x62bb5b0)
    }
}
