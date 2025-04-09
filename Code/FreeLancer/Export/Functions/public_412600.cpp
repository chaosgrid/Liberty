#include "FreeLancer-PCH.h"

PROC_DECLARE(0x412600, internal_412600, public_412600);
extern "C" NAKED register_t __cdecl internal_412600()
{
    __asm
    {
        mov dword ptr ds : [public_616684], 0
        ret 
        UNREACHABLE_TRAP(0x412600)
    }
}
