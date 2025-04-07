#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9bc50, internal_6d9bc50, public_6d9bc50);
extern "C" NAKED register_t __cdecl internal_6d9bc50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db44cc]
        mov dword ptr ds : [public_6dbbf30], eax
        ret 
        UNREACHABLE_TRAP(0x6d9bc50)
    }
}
