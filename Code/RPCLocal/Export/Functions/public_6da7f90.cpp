#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7f90, internal_6da7f90, public_6da7f90);
extern "C" NAKED register_t __cdecl internal_6da7f90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db622c]
        mov dword ptr ds : [public_6dbc0cc], eax
        ret 
        UNREACHABLE_TRAP(0x6da7f90)
    }
}
