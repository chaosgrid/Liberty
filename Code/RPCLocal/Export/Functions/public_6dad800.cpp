#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad800, internal_6dad800, public_6dad800);
extern "C" NAKED register_t __cdecl internal_6dad800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6574]
        mov dword ptr ds : [public_6dbc384], eax
        ret 
        UNREACHABLE_TRAP(0x6dad800)
    }
}
