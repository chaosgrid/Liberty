#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db18e0, internal_6db18e0, public_6db18e0);
extern "C" NAKED register_t __cdecl internal_6db18e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db679c]
        mov dword ptr ds : [public_6dbc5ac], eax
        ret 
        UNREACHABLE_TRAP(0x6db18e0)
    }
}
