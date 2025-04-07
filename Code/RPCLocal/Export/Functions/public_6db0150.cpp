#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db0150, internal_6db0150, public_6db0150);
extern "C" NAKED register_t __cdecl internal_6db0150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6730]
        mov dword ptr ds : [public_6dbc51c], eax
        ret 
        UNREACHABLE_TRAP(0x6db0150)
    }
}
