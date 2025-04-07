#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71d70);

PROC_DECLARE(0x6f71d70, internal_6f71d70, public_6f71d70);
extern "C" NAKED register_t __cdecl internal_6f71d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6f71d70)
    }
}
