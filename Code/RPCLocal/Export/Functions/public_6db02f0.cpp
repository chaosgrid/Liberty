#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db02f0, internal_6db02f0, public_6db02f0);
extern "C" NAKED register_t __cdecl internal_6db02f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6744]
        mov dword ptr ds : [public_6dbc544], eax
        ret 
        UNREACHABLE_TRAP(0x6db02f0)
    }
}
