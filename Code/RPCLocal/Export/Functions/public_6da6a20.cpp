#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6a20, internal_6da6a20, public_6da6a20);
extern "C" NAKED register_t __cdecl internal_6da6a20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61c4]
        mov dword ptr ds : [public_6dbc050], eax
        ret 
        UNREACHABLE_TRAP(0x6da6a20)
    }
}
