#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);

PROC_DECLARE(0x628be60, internal_628be60, public_628be60);
extern "C" NAKED register_t __cdecl internal_628be60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        fadd dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+8]
        fadd dword ptr ds : [edx+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax]
        fadd dword ptr ds : [edx]
        fstp dword ptr ds : [ecx]
        fxch 
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        ret 0xC
        UNREACHABLE_TRAP(0x628be60)
    }
}
