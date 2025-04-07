#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5d90, internal_6da5d90, public_6da5d90);
extern "C" NAKED register_t __cdecl internal_6da5d90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6170]
        mov dword ptr ds : [public_6dbbfe4], eax
        ret 
        UNREACHABLE_TRAP(0x6da5d90)
    }
}
