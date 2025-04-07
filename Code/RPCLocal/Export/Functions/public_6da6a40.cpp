#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6a40, internal_6da6a40, public_6da6a40);
extern "C" NAKED register_t __cdecl internal_6da6a40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61c8]
        mov dword ptr ds : [public_6dbc04c], eax
        ret 
        UNREACHABLE_TRAP(0x6da6a40)
    }
}
