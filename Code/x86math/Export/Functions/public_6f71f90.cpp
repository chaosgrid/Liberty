#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71f90);

PROC_DECLARE(0x6f71f90, internal_6f71f90, public_6f71f90);
extern "C" NAKED register_t __cdecl internal_6f71f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        ret 4
        UNREACHABLE_TRAP(0x6f71f90)
    }
}
