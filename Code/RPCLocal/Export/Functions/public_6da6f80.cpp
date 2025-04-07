#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6f80, internal_6da6f80, public_6da6f80);
extern "C" NAKED register_t __cdecl internal_6da6f80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61d0]
        mov dword ptr ds : [public_6dbc064], eax
        ret 
        UNREACHABLE_TRAP(0x6da6f80)
    }
}
