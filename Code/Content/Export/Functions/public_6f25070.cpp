#include "Content-PCH.h"

PROC_DECLARE(0x6f25070, internal_6f25070, public_6f25070);
extern "C" NAKED register_t __cdecl internal_6f25070()
{
    __asm
    {
        mov eax, 0xA
        ret 
        UNREACHABLE_TRAP(0x6f25070)
    }
}
