#include "Content-PCH.h"

PROC_DECLARE(0x6eea870, internal_6eea870, public_6eea870);
extern "C" NAKED register_t __cdecl internal_6eea870()
{
    __asm
    {
        mov eax, 0x19
        ret 
        UNREACHABLE_TRAP(0x6eea870)
    }
}
