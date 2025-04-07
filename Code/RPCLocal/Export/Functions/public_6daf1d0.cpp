#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf1d0, internal_6daf1d0, public_6daf1d0);
extern "C" NAKED register_t __cdecl internal_6daf1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6660]
        mov dword ptr ds : [public_6dbc4a0], eax
        ret 
        UNREACHABLE_TRAP(0x6daf1d0)
    }
}
