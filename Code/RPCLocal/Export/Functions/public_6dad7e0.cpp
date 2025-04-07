#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad7e0, internal_6dad7e0, public_6dad7e0);
extern "C" NAKED register_t __cdecl internal_6dad7e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6568]
        mov dword ptr ds : [public_6dbc36c], eax
        ret 
        UNREACHABLE_TRAP(0x6dad7e0)
    }
}
