#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1950, internal_6db1950, public_6db1950);
extern "C" NAKED register_t __cdecl internal_6db1950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67bc]
        mov dword ptr ds : [public_6dbc5e0], eax
        ret 
        UNREACHABLE_TRAP(0x6db1950)
    }
}
