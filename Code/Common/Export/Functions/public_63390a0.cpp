#include "Common-PCH.h"

PROC_DECLARE(0x63390a0, internal_63390a0, public_63390a0);
extern "C" NAKED register_t __cdecl internal_63390a0()
{
    __asm
    {
        lea eax, ds:[ecx+0x30]
        ret 
        UNREACHABLE_TRAP(0x63390a0)
    }
}
