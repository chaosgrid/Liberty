#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98620, internal_6d98620, public_6d98620);
extern "C" NAKED register_t __cdecl internal_6d98620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3fa8]
        mov dword ptr ds : [public_6dbbea4], eax
        ret 
        UNREACHABLE_TRAP(0x6d98620)
    }
}
