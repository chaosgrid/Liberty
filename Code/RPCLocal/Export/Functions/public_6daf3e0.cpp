#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf3e0, internal_6daf3e0, public_6daf3e0);
extern "C" NAKED register_t __cdecl internal_6daf3e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db66a0]
        mov dword ptr ds : [public_6dbc4e0], eax
        ret 
        UNREACHABLE_TRAP(0x6daf3e0)
    }
}
