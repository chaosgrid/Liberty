#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4fcbd0, internal_4fcbd0, public_4fcbd0);
extern "C" NAKED register_t __cdecl internal_4fcbd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9e14]
        mov dword ptr ds : [public_674f5c], eax
        ret 
        UNREACHABLE_TRAP(0x4fcbd0)
    }
}
