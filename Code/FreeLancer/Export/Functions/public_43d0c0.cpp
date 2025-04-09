#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d0c0, internal_43d0c0, public_43d0c0);
extern "C" NAKED register_t __cdecl internal_43d0c0()
{
    __asm
    {
        mov word ptr ds : [public_668794], 2
        mov byte ptr ds : [public_668796], 1
        ret 
        UNREACHABLE_TRAP(0x43d0c0)
    }
}
