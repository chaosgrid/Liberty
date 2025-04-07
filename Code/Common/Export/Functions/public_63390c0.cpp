#include "Common-PCH.h"

PROC_DECLARE(0x63390c0, internal_63390c0, public_63390c0);
extern "C" NAKED register_t __cdecl internal_63390c0()
{
    __asm
    {
        lea eax, ds:[ecx+0x78]
        ret 
        UNREACHABLE_TRAP(0x63390c0)
    }
}
