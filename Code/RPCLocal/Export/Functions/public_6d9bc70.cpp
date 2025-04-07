#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9bc70, internal_6d9bc70, public_6d9bc70);
extern "C" NAKED register_t __cdecl internal_6d9bc70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db44d0]
        mov dword ptr ds : [public_6dbbf2c], eax
        ret 
        UNREACHABLE_TRAP(0x6d9bc70)
    }
}
