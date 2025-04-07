#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf140, internal_6daf140, public_6daf140);
extern "C" NAKED register_t __cdecl internal_6daf140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db663c]
        mov dword ptr ds : [public_6dbc470], eax
        ret 
        UNREACHABLE_TRAP(0x6daf140)
    }
}
