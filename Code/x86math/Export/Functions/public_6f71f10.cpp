#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71f10);

PROC_DECLARE(0x6f71f10, internal_6f71f10, public_6f71f10);
extern "C" NAKED register_t __cdecl internal_6f71f10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        fadd dword ptr ds : [eax+8]
        fadd dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6f71f10)
    }
}
