#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db0300, internal_6db0300, public_6db0300);
extern "C" NAKED register_t __cdecl internal_6db0300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6748]
        mov dword ptr ds : [public_6dbc53c], eax
        ret 
        UNREACHABLE_TRAP(0x6db0300)
    }
}
