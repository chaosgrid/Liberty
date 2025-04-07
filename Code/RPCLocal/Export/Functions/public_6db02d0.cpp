#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db02d0, internal_6db02d0, public_6db02d0);
extern "C" NAKED register_t __cdecl internal_6db02d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db673c]
        mov dword ptr ds : [public_6dbc52c], eax
        ret 
        UNREACHABLE_TRAP(0x6db02d0)
    }
}
