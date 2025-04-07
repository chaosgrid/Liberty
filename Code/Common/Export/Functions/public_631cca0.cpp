#include "Common-PCH.h"

PROC_DECLARE(0x631cca0, internal_631cca0, public_631cca0);
extern "C" NAKED register_t __cdecl internal_631cca0()
{
    __asm
    {
        mov eax, offset public_6401768
        ret 
        UNREACHABLE_TRAP(0x631cca0)
    }
}
