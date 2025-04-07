#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81000, internal_6d81000, public_6d81000);
extern "C" NAKED register_t __cdecl internal_6d81000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3240]
        mov dword ptr ds : [public_6dbb8ec], eax
        ret 
        UNREACHABLE_TRAP(0x6d81000)
    }
}
