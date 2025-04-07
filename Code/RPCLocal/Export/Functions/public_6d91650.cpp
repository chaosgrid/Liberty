#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91650, internal_6d91650, public_6d91650);
extern "C" NAKED register_t __cdecl internal_6d91650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d04]
        mov dword ptr ds : [public_6dbbdc0], eax
        ret 
        UNREACHABLE_TRAP(0x6d91650)
    }
}
