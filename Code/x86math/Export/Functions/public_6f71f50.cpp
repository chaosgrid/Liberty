#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71f50);

PROC_DECLARE(0x6f71f50, internal_6f71f50, public_6f71f50);
extern "C" NAKED register_t __cdecl internal_6f71f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        ret 4
        UNREACHABLE_TRAP(0x6f71f50)
    }
}
