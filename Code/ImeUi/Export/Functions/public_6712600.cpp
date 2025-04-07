#include "ImeUi-PCH.h"

PROC_DECLARE(0x6712600, internal_6712600, public_6712600);
extern "C" NAKED register_t __cdecl internal_6712600()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x6712600)
    }
}
