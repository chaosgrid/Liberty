#include "Common-PCH.h"

PROC_DECLARE(0x62959d0, internal_62959d0, public_62959d0);
extern "C" NAKED register_t __cdecl internal_62959d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ce30]
        mov dword ptr ds : [public_63fc14c], eax
        ret 
        UNREACHABLE_TRAP(0x62959d0)
    }
}
