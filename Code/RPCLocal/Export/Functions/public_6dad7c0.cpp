#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad7c0, internal_6dad7c0, public_6dad7c0);
extern "C" NAKED register_t __cdecl internal_6dad7c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6564]
        mov dword ptr ds : [public_6dbc370], eax
        ret 
        UNREACHABLE_TRAP(0x6dad7c0)
    }
}
