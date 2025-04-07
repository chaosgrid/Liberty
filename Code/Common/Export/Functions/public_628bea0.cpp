#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bea0);

PROC_DECLARE(0x628bea0, internal_628bea0, public_628bea0);
extern "C" NAKED register_t __cdecl internal_628bea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+8]
        fsub dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edx+8]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edx]
        fstp dword ptr ds : [ecx]
        fxch 
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        ret 8
        UNREACHABLE_TRAP(0x628bea0)
    }
}
