#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf1e0, internal_6daf1e0, public_6daf1e0);
extern "C" NAKED register_t __cdecl internal_6daf1e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6660]
        mov dword ptr ds : [public_6dbc4a4], eax
        ret 
        UNREACHABLE_TRAP(0x6daf1e0)
    }
}
