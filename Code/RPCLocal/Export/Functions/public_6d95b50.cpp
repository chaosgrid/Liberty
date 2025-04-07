#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d95b50, internal_6d95b50, public_6d95b50);
extern "C" NAKED register_t __cdecl internal_6d95b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3da4]
        mov dword ptr ds : [public_6dbbdf8], eax
        ret 
        UNREACHABLE_TRAP(0x6d95b50)
    }
}
