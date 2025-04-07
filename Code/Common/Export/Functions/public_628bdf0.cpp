#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bdf0);

PROC_DECLARE(0x628bdf0, internal_628bdf0, public_628bdf0);
extern "C" NAKED register_t __cdecl internal_628bdf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        fstp dword ptr ds : [ecx]
        fxch 
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        ret 4
        UNREACHABLE_TRAP(0x628bdf0)
    }
}
