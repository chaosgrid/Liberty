#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf360, internal_6daf360, public_6daf360);
extern "C" NAKED register_t __cdecl internal_6daf360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db667c]
        mov dword ptr ds : [public_6dbc4bc], eax
        ret 
        UNREACHABLE_TRAP(0x6daf360)
    }
}
