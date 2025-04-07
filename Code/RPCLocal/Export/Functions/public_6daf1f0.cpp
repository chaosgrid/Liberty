#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf1f0, internal_6daf1f0, public_6daf1f0);
extern "C" NAKED register_t __cdecl internal_6daf1f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6664]
        mov dword ptr ds : [public_6dbc49c], eax
        ret 
        UNREACHABLE_TRAP(0x6daf1f0)
    }
}
