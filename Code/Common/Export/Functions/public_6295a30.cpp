#include "Common-PCH.h"

PROC_DECLARE(0x6295a30, internal_6295a30, public_6295a30);
extern "C" NAKED register_t __cdecl internal_6295a30()
{
    __asm
    {
        lea eax, ds:[ecx+0x34]
        ret 
        UNREACHABLE_TRAP(0x6295a30)
    }
}
