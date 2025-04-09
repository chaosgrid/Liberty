#include "FreeLancer-PCH.h"

PROC_DECLARE(0x485920, internal_485920, public_485920);
extern "C" NAKED register_t __cdecl internal_485920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d1d30]
        mov dword ptr ds : [public_671f40], eax
        ret 
        UNREACHABLE_TRAP(0x485920)
    }
}
