#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6780, internal_6da6780, public_6da6780);
extern "C" NAKED register_t __cdecl internal_6da6780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61b8]
        mov dword ptr ds : [public_6dbc044], eax
        ret 
        UNREACHABLE_TRAP(0x6da6780)
    }
}
