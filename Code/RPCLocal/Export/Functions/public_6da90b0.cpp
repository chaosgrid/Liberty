#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da90b0, internal_6da90b0, public_6da90b0);
extern "C" NAKED register_t __cdecl internal_6da90b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62b8]
        mov dword ptr ds : [public_6dbc140], eax
        ret 
        UNREACHABLE_TRAP(0x6da90b0)
    }
}
