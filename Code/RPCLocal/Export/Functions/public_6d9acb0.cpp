#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9acb0, internal_6d9acb0, public_6d9acb0);
extern "C" NAKED register_t __cdecl internal_6d9acb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db40bc]
        mov dword ptr ds : [public_6dbbf20], eax
        ret 
        UNREACHABLE_TRAP(0x6d9acb0)
    }
}
