#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71de0);

PROC_DECLARE(0x6f71de0, internal_6f71de0, public_6f71de0);
extern "C" NAKED register_t __cdecl internal_6f71de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        ret 4
        UNREACHABLE_TRAP(0x6f71de0)
    }
}
