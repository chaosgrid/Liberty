#include "Common-PCH.h"

PROC_DECLARE(0x62afa60, internal_62afa60, public_62afa60);
extern "C" NAKED register_t __cdecl internal_62afa60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e540]
        mov dword ptr ds : [public_63fc44c], eax
        ret 
        UNREACHABLE_TRAP(0x62afa60)
    }
}
