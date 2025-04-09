#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d630, internal_43d630, public_43d630);
extern "C" NAKED register_t __cdecl internal_43d630()
{
    __asm
    {
        mov dword ptr ds : [public_668804], 0
        mov dword ptr ds : [public_668808], 0xBEB33333
        mov dword ptr ds : [public_66880c], 0
        ret 
        UNREACHABLE_TRAP(0x43d630)
    }
}
