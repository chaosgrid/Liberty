#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da0550, internal_6da0550, public_6da0550);
extern "C" NAKED register_t __cdecl internal_6da0550()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db5380]
        mov dword ptr ds : [public_6dbbf44], eax
        ret 
        UNREACHABLE_TRAP(0x6da0550)
    }
}
