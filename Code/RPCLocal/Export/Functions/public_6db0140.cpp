#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db0140, internal_6db0140, public_6db0140);
extern "C" NAKED register_t __cdecl internal_6db0140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db672c]
        mov dword ptr ds : [public_6dbc524], eax
        ret 
        UNREACHABLE_TRAP(0x6db0140)
    }
}
