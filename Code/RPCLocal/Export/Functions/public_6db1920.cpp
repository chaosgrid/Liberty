#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1920, internal_6db1920, public_6db1920);
extern "C" NAKED register_t __cdecl internal_6db1920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67b0]
        mov dword ptr ds : [public_6dbc5d0], eax
        ret 
        UNREACHABLE_TRAP(0x6db1920)
    }
}
