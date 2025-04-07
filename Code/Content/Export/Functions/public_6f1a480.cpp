#include "Content-PCH.h"

PROC_DECLARE(0x6f1a480, internal_6f1a480, public_6f1a480);
extern "C" NAKED register_t __cdecl internal_6f1a480()
{
    __asm
    {
        mov eax, 8
        ret 
        UNREACHABLE_TRAP(0x6f1a480)
    }
}
