#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d95b30, internal_6d95b30, public_6d95b30);
extern "C" NAKED register_t __cdecl internal_6d95b30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3da0]
        mov dword ptr ds : [public_6dbbdfc], eax
        ret 
        UNREACHABLE_TRAP(0x6d95b30)
    }
}
