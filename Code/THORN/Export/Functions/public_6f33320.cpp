#include "THORN-PCH.h"

PROC_DECLARE(0x6f33320, internal_6f33320, public_6f33320);
extern "C" NAKED register_t __cdecl internal_6f33320()
{
    __asm
    {
        mov eax, offset public_6f5ff34
        ret 
        UNREACHABLE_TRAP(0x6f33320)
    }
}
