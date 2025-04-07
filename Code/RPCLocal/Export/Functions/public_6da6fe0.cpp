#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6fe0, internal_6da6fe0, public_6da6fe0);
extern "C" NAKED register_t __cdecl internal_6da6fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61e8]
        mov dword ptr ds : [public_6dbc084], eax
        ret 
        UNREACHABLE_TRAP(0x6da6fe0)
    }
}
