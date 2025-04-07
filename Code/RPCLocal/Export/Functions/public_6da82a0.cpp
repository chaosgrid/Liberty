#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da82a0, internal_6da82a0, public_6da82a0);
extern "C" NAKED register_t __cdecl internal_6da82a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db625c]
        mov dword ptr ds : [public_6dbc0fc], eax
        ret 
        UNREACHABLE_TRAP(0x6da82a0)
    }
}
