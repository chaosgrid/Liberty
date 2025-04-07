#include "Common-PCH.h"

PROC_DECLARE(0x6337040, internal_6337040, public_6337040);
extern "C" NAKED register_t __cdecl internal_6337040()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x6337040)
    }
}
