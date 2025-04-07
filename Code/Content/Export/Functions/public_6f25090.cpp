#include "Content-PCH.h"

PROC_DECLARE(0x6f25090, internal_6f25090, public_6f25090);
extern "C" NAKED register_t __cdecl internal_6f25090()
{
    __asm
    {
        mov eax, 0x15
        ret 
        UNREACHABLE_TRAP(0x6f25090)
    }
}
