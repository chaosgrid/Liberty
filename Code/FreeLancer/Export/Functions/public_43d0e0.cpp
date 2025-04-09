#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d0e0, internal_43d0e0, public_43d0e0);
extern "C" NAKED register_t __cdecl internal_43d0e0()
{
    __asm
    {
        mov word ptr ds : [public_668790], 3
        mov byte ptr ds : [public_668792], 1
        ret 
        UNREACHABLE_TRAP(0x43d0e0)
    }
}
