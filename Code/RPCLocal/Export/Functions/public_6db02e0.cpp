#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db02e0, internal_6db02e0, public_6db02e0);
extern "C" NAKED register_t __cdecl internal_6db02e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6744]
        mov dword ptr ds : [public_6dbc540], eax
        ret 
        UNREACHABLE_TRAP(0x6db02e0)
    }
}
