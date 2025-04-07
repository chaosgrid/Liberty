#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9bc60, internal_6d9bc60, public_6d9bc60);
extern "C" NAKED register_t __cdecl internal_6d9bc60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db44cc]
        mov dword ptr ds : [public_6dbbf34], eax
        ret 
        UNREACHABLE_TRAP(0x6d9bc60)
    }
}
