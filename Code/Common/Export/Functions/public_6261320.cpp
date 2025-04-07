#include "Common-PCH.h"

PROC_DECLARE(0x6261320, internal_6261320, public_6261320);
extern "C" NAKED register_t __cdecl internal_6261320()
{
    __asm
    {
        lea eax, ds:[ecx+0x1C8]
        ret 
        UNREACHABLE_TRAP(0x6261320)
    }
}
