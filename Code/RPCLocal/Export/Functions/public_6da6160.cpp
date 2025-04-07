#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6160, internal_6da6160, public_6da6160);
extern "C" NAKED register_t __cdecl internal_6da6160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61ac]
        mov dword ptr ds : [public_6dbc030], eax
        ret 
        UNREACHABLE_TRAP(0x6da6160)
    }
}
