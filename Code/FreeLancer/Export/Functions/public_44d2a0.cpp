#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44d2a0, internal_44d2a0, public_44d2a0);
extern "C" NAKED register_t __cdecl internal_44d2a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc074]
        mov dword ptr ds : [public_668ad8], eax
        ret 
        UNREACHABLE_TRAP(0x44d2a0)
    }
}
