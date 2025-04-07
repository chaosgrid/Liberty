#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf1b0, internal_6daf1b0, public_6daf1b0);
extern "C" NAKED register_t __cdecl internal_6daf1b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6654]
        mov dword ptr ds : [public_6dbc494], eax
        ret 
        UNREACHABLE_TRAP(0x6daf1b0)
    }
}
