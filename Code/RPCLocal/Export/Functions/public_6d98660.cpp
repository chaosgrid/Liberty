#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98660, internal_6d98660, public_6d98660);
extern "C" NAKED register_t __cdecl internal_6d98660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3fec]
        mov dword ptr ds : [public_6dbbeb0], eax
        ret 
        UNREACHABLE_TRAP(0x6d98660)
    }
}
