#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71150);

PROC_DECLARE(0x6f71150, internal_6f71150, public_6f71150);
extern "C" NAKED register_t __cdecl internal_6f71150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6f71150)
    }
}
