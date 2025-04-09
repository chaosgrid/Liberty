#include "FreeLancer-PCH.h"

PROC_DECLARE(0x422b50, internal_422b50, public_422b50);
extern "C" NAKED register_t __cdecl internal_422b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c97e8]
        mov dword ptr ds : [public_6649bc], eax
        ret 
        UNREACHABLE_TRAP(0x422b50)
    }
}
