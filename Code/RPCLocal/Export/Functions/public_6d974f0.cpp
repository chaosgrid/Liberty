#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d974f0, internal_6d974f0, public_6d974f0);
extern "C" NAKED register_t __cdecl internal_6d974f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ef8]
        mov dword ptr ds : [public_6dbbe50], eax
        ret 
        UNREACHABLE_TRAP(0x6d974f0)
    }
}
