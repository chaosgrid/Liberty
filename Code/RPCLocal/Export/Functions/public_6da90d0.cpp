#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da90d0, internal_6da90d0, public_6da90d0);
extern "C" NAKED register_t __cdecl internal_6da90d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62bc]
        mov dword ptr ds : [public_6dbc13c], eax
        ret 
        UNREACHABLE_TRAP(0x6da90d0)
    }
}
