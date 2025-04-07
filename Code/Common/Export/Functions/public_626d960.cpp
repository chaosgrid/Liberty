#include "Common-PCH.h"

PROC_DECLARE(0x626d960, internal_626d960, public_626d960);
extern "C" NAKED register_t __cdecl internal_626d960()
{
    __asm
    {
        mov eax, 0x17
        ret 
        UNREACHABLE_TRAP(0x626d960)
    }
}
