#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6110, internal_6da6110, public_6da6110);
extern "C" NAKED register_t __cdecl internal_6da6110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6194]
        mov dword ptr ds : [public_6dbc014], eax
        ret 
        UNREACHABLE_TRAP(0x6da6110)
    }
}
