#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6130, internal_6da6130, public_6da6130);
extern "C" NAKED register_t __cdecl internal_6da6130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61a0]
        mov dword ptr ds : [public_6dbc020], eax
        ret 
        UNREACHABLE_TRAP(0x6da6130)
    }
}
