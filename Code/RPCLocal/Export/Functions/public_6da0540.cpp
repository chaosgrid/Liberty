#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da0540, internal_6da0540, public_6da0540);
extern "C" NAKED register_t __cdecl internal_6da0540()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db5380]
        mov dword ptr ds : [public_6dbbf40], eax
        ret 
        UNREACHABLE_TRAP(0x6da0540)
    }
}
