#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db02b0, internal_6db02b0, public_6db02b0);
extern "C" NAKED register_t __cdecl internal_6db02b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6738]
        mov dword ptr ds : [public_6dbc530], eax
        ret 
        UNREACHABLE_TRAP(0x6db02b0)
    }
}
