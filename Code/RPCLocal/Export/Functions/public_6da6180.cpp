#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6180, internal_6da6180, public_6da6180);
extern "C" NAKED register_t __cdecl internal_6da6180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61b0]
        mov dword ptr ds : [public_6dbc02c], eax
        ret 
        UNREACHABLE_TRAP(0x6da6180)
    }
}
