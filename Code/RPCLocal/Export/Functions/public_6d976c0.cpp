#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d976c0, internal_6d976c0, public_6d976c0);
extern "C" NAKED register_t __cdecl internal_6d976c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f18]
        mov dword ptr ds : [public_6dbbe64], eax
        ret 
        UNREACHABLE_TRAP(0x6d976c0)
    }
}
