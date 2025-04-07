#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6790, internal_6da6790, public_6da6790);
extern "C" NAKED register_t __cdecl internal_6da6790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61bc]
        mov dword ptr ds : [public_6dbc03c], eax
        ret 
        UNREACHABLE_TRAP(0x6da6790)
    }
}
