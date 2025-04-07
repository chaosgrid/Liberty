#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9a1b0, internal_6d9a1b0, public_6d9a1b0);
extern "C" NAKED register_t __cdecl internal_6d9a1b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db4068]
        mov dword ptr ds : [public_6dbbef4], eax
        ret 
        UNREACHABLE_TRAP(0x6d9a1b0)
    }
}
