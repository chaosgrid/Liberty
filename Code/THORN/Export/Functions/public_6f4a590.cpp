#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a590, internal_6f4a590, public_6f4a590);
extern "C" NAKED register_t __cdecl internal_6f4a590()
{
    __asm
    {
        mov eax, offset public_6f60280
        ret 
        UNREACHABLE_TRAP(0x6f4a590)
    }
}
