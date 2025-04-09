#include "FreeLancer-PCH.h"

PROC_DECLARE(0x555a30, internal_555a30, public_555a30);
extern "C" NAKED register_t __cdecl internal_555a30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1208]
        mov dword ptr ds : [public_67998c], eax
        ret 
        UNREACHABLE_TRAP(0x555a30)
    }
}
