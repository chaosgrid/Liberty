#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae250, internal_6dae250, public_6dae250);
extern "C" NAKED register_t __cdecl internal_6dae250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65e8]
        mov dword ptr ds : [public_6dbc400], eax
        ret 
        UNREACHABLE_TRAP(0x6dae250)
    }
}
