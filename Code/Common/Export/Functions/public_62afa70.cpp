#include "Common-PCH.h"

PROC_DECLARE(0x62afa70, internal_62afa70, public_62afa70);
extern "C" NAKED register_t __cdecl internal_62afa70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e540]
        mov dword ptr ds : [public_63fc448], eax
        ret 
        UNREACHABLE_TRAP(0x62afa70)
    }
}
