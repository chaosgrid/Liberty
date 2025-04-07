#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6fc0, internal_6da6fc0, public_6da6fc0);
extern "C" NAKED register_t __cdecl internal_6da6fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61e0]
        mov dword ptr ds : [public_6dbc06c], eax
        ret 
        UNREACHABLE_TRAP(0x6da6fc0)
    }
}
