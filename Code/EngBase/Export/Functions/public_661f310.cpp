#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f310);

PROC_DECLARE(0x661f310, internal_661f310, public_661f310);
extern "C" NAKED register_t __cdecl internal_661f310()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+0x44], 0
        mov dword ptr ds : [eax], offset public_66295d0
        ret 
        UNREACHABLE_TRAP(0x661f310)
    }
}
