#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fd560);

PROC_DECLARE(0x4fd560, internal_4fd560, public_4fd560);
extern "C" NAKED register_t __cdecl internal_4fd560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea eax, ds:[eax+eax*4]
        lea eax, ds : [eax*8+public_612a68]
        ret 
        UNREACHABLE_TRAP(0x4fd560)
    }
}
