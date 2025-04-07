#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98630, internal_6d98630, public_6d98630);
extern "C" NAKED register_t __cdecl internal_6d98630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3fac]
        mov dword ptr ds : [public_6dbbe9c], eax
        ret 
        UNREACHABLE_TRAP(0x6d98630)
    }
}
