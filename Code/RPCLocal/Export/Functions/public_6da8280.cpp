#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8280, internal_6da8280, public_6da8280);
extern "C" NAKED register_t __cdecl internal_6da8280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6258]
        mov dword ptr ds : [public_6dbc100], eax
        ret 
        UNREACHABLE_TRAP(0x6da8280)
    }
}
