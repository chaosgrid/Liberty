#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71f00);

PROC_DECLARE(0x6f71f00, internal_6f71f00, public_6f71f00);
extern "C" NAKED register_t __cdecl internal_6f71f00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        fadd dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6f71f00)
    }
}
