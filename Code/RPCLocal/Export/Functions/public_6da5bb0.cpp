#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5bb0, internal_6da5bb0, public_6da5bb0);
extern "C" NAKED register_t __cdecl internal_6da5bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6150]
        mov dword ptr ds : [public_6dbbfac], eax
        ret 
        UNREACHABLE_TRAP(0x6da5bb0)
    }
}
