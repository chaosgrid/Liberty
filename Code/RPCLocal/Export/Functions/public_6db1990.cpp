#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1990, internal_6db1990, public_6db1990);
extern "C" NAKED register_t __cdecl internal_6db1990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67c8]
        mov dword ptr ds : [public_6dbc5f4], eax
        ret 
        UNREACHABLE_TRAP(0x6db1990)
    }
}
