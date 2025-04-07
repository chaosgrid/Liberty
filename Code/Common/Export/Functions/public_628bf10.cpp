#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bf10);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);

PROC_DECLARE(0x628bf10, internal_628bf10, public_628bf10);
extern "C" NAKED register_t __cdecl internal_628bf10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [eax+4]
        fsubp 
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        fxch 
        fsub st, st(1)
        fstp dword ptr ds : [ecx+8]
        fstp st(0)
        call public_6347ef0
        ret 8
        UNREACHABLE_TRAP(0x628bf10)
    }
}
