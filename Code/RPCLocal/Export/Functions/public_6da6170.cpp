#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6170, internal_6da6170, public_6da6170);
extern "C" NAKED register_t __cdecl internal_6da6170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61ac]
        mov dword ptr ds : [public_6dbc034], eax
        ret 
        UNREACHABLE_TRAP(0x6da6170)
    }
}
