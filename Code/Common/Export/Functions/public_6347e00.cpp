#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e00);

PROC_DECLARE(0x6347e00, internal_6347e00, public_6347e00);
extern "C" NAKED register_t __cdecl internal_6347e00()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [public_63a53d0]
        mov eax, dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx+4]
        faddp 
        fxch 
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx]
        faddp 
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp]
        fstp dword ptr ds : [ecx+8]
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6347e00)
    }
}
