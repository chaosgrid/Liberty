#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf3f0, internal_6daf3f0, public_6daf3f0);
extern "C" NAKED register_t __cdecl internal_6daf3f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db66a0]
        mov dword ptr ds : [public_6dbc4e4], eax
        ret 
        UNREACHABLE_TRAP(0x6daf3f0)
    }
}
