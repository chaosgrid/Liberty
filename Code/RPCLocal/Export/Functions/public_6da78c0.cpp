#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da78c0, internal_6da78c0, public_6da78c0);
extern "C" NAKED register_t __cdecl internal_6da78c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6204]
        mov dword ptr ds : [public_6dbc09c], eax
        ret 
        UNREACHABLE_TRAP(0x6da78c0)
    }
}
