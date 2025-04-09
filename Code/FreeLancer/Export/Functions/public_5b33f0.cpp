#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b33f0);

PROC_DECLARE(0x5b33f0, internal_5b33f0, public_5b33f0);
extern "C" NAKED register_t __cdecl internal_5b33f0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x5b33f0)
    }
}
