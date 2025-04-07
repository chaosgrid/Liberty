#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da49b0, internal_6da49b0, public_6da49b0);
extern "C" NAKED register_t __cdecl internal_6da49b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db60e4]
        mov dword ptr ds : [public_6dbbf80], eax
        ret 
        UNREACHABLE_TRAP(0x6da49b0)
    }
}
