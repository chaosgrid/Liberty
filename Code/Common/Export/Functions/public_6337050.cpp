#include "Common-PCH.h"

PROC_DECLARE(0x6337050, internal_6337050, public_6337050);
extern "C" NAKED register_t __cdecl internal_6337050()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x6337050)
    }
}
