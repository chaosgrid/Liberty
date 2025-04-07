#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d95bb0, internal_6d95bb0, public_6d95bb0);
extern "C" NAKED register_t __cdecl internal_6d95bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ddc]
        mov dword ptr ds : [public_6dbbe08], eax
        ret 
        UNREACHABLE_TRAP(0x6d95bb0)
    }
}
