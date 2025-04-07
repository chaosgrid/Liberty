#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf1c0, internal_6daf1c0, public_6daf1c0);
extern "C" NAKED register_t __cdecl internal_6daf1c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6658]
        mov dword ptr ds : [public_6dbc48c], eax
        ret 
        UNREACHABLE_TRAP(0x6daf1c0)
    }
}
