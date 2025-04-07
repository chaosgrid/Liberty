#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6ff0, internal_6da6ff0, public_6da6ff0);
extern "C" NAKED register_t __cdecl internal_6da6ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61ec]
        mov dword ptr ds : [public_6dbc07c], eax
        ret 
        UNREACHABLE_TRAP(0x6da6ff0)
    }
}
