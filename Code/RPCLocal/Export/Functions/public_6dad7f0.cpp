#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad7f0, internal_6dad7f0, public_6dad7f0);
extern "C" NAKED register_t __cdecl internal_6dad7f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6574]
        mov dword ptr ds : [public_6dbc380], eax
        ret 
        UNREACHABLE_TRAP(0x6dad7f0)
    }
}
