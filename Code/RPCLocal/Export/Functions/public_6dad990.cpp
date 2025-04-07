#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad990, internal_6dad990, public_6dad990);
extern "C" NAKED register_t __cdecl internal_6dad990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6598]
        mov dword ptr ds : [public_6dbc39c], eax
        ret 
        UNREACHABLE_TRAP(0x6dad990)
    }
}
