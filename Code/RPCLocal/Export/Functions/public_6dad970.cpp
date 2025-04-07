#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad970, internal_6dad970, public_6dad970);
extern "C" NAKED register_t __cdecl internal_6dad970()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6594]
        mov dword ptr ds : [public_6dbc3a0], eax
        ret 
        UNREACHABLE_TRAP(0x6dad970)
    }
}
