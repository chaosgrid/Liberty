#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6f70, internal_6da6f70, public_6da6f70);
extern "C" NAKED register_t __cdecl internal_6da6f70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61d0]
        mov dword ptr ds : [public_6dbc060], eax
        ret 
        UNREACHABLE_TRAP(0x6da6f70)
    }
}
