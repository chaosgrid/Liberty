#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da49d0, internal_6da49d0, public_6da49d0);
extern "C" NAKED register_t __cdecl internal_6da49d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db60e8]
        mov dword ptr ds : [public_6dbbf7c], eax
        ret 
        UNREACHABLE_TRAP(0x6da49d0)
    }
}
