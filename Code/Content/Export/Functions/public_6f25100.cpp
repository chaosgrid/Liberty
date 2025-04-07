#include "Content-PCH.h"

PROC_DECLARE(0x6f25100, internal_6f25100, public_6f25100);
extern "C" NAKED register_t __cdecl internal_6f25100()
{
    __asm
    {
        mov eax, 0xE
        ret 
        UNREACHABLE_TRAP(0x6f25100)
    }
}
