#include "Common-PCH.h"

PROC_DECLARE(0x62bb5d0, internal_62bb5d0, public_62bb5d0);
extern "C" NAKED register_t __cdecl internal_62bb5d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ecc4]
        mov dword ptr ds : [public_63fc484], eax
        ret 
        UNREACHABLE_TRAP(0x62bb5d0)
    }
}
