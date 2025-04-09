#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a8020, internal_5a8020, public_5a8020);
extern "C" NAKED register_t __cdecl internal_5a8020()
{
    __asm
    {
        mov word ptr ds : [public_67ea20], 2
        mov byte ptr ds : [public_67ea22], 1
        ret 
        UNREACHABLE_TRAP(0x5a8020)
    }
}
