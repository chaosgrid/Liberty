#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b2b90, internal_4b2b90, public_4b2b90);
extern "C" NAKED register_t __cdecl internal_4b2b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d51ac]
        mov dword ptr ds : [public_67223c], eax
        ret 
        UNREACHABLE_TRAP(0x4b2b90)
    }
}
