#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8af0, internal_6da8af0, public_6da8af0);
extern "C" NAKED register_t __cdecl internal_6da8af0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6298]
        mov dword ptr ds : [public_6dbc120], eax
        ret 
        UNREACHABLE_TRAP(0x6da8af0)
    }
}
