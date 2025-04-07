#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71e80);

PROC_DECLARE(0x6f71e80, internal_6f71e80, public_6f71e80);
extern "C" NAKED register_t __cdecl internal_6f71e80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        fadd dword ptr ds : [eax+8]
        fadd dword ptr ds : [eax]
        ret 4
        UNREACHABLE_TRAP(0x6f71e80)
    }
}
