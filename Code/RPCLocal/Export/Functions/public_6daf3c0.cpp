#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf3c0, internal_6daf3c0, public_6daf3c0);
extern "C" NAKED register_t __cdecl internal_6daf3c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6684]
        mov dword ptr ds : [public_6dbc4d4], eax
        ret 
        UNREACHABLE_TRAP(0x6daf3c0)
    }
}
