#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1cc0, internal_6db1cc0, public_6db1cc0);
extern "C" NAKED register_t __cdecl internal_6db1cc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67f0]
        mov dword ptr ds : [public_6dbc61c], eax
        ret 
        UNREACHABLE_TRAP(0x6db1cc0)
    }
}
