#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9a1a0, internal_6d9a1a0, public_6d9a1a0);
extern "C" NAKED register_t __cdecl internal_6d9a1a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db4068]
        mov dword ptr ds : [public_6dbbef0], eax
        ret 
        UNREACHABLE_TRAP(0x6d9a1a0)
    }
}
