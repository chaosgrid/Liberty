#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71ec0);

PROC_DECLARE(0x6f71ec0, internal_6f71ec0, public_6f71ec0);
extern "C" NAKED register_t __cdecl internal_6f71ec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        ret 4
        UNREACHABLE_TRAP(0x6f71ec0)
    }
}
