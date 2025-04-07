#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be10);

PROC_DECLARE(0x628be10, internal_628be10, public_628be10);
extern "C" NAKED register_t __cdecl internal_628be10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [ecx]
        fxch 
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        ret 8
        UNREACHABLE_TRAP(0x628be10)
    }
}
