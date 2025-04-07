#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6120, internal_6da6120, public_6da6120);
extern "C" NAKED register_t __cdecl internal_6da6120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6198]
        mov dword ptr ds : [public_6dbc00c], eax
        ret 
        UNREACHABLE_TRAP(0x6da6120)
    }
}
