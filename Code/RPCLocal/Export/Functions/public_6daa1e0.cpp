#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daa1e0, internal_6daa1e0, public_6daa1e0);
extern "C" NAKED register_t __cdecl internal_6daa1e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6318]
        mov dword ptr ds : [public_6dbc1a0], eax
        ret 
        UNREACHABLE_TRAP(0x6daa1e0)
    }
}
