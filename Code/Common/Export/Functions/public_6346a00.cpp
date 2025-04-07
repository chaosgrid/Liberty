#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346a00);

PROC_DECLARE(0x6346a00, internal_6346a00, public_6346a00);
extern "C" NAKED register_t __cdecl internal_6346a00()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+0x88]
        fld st(1)
        fmul dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+0x8C]
        fstp dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x8C], eax
        fadd dword ptr ds : [ecx+0x84]
        fstp dword ptr ds : [ecx+0x84]
        fstp dword ptr ds : [ecx+0x88]
        ret 8
        UNREACHABLE_TRAP(0x6346a00)
    }
}
