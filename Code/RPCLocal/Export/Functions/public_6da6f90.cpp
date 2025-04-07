#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6f90, internal_6da6f90, public_6da6f90);
extern "C" NAKED register_t __cdecl internal_6da6f90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61d4]
        mov dword ptr ds : [public_6dbc05c], eax
        ret 
        UNREACHABLE_TRAP(0x6da6f90)
    }
}
