#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63461a0);

PROC_DECLARE(0x63461a0, internal_63461a0, public_63461a0);
extern "C" NAKED register_t __cdecl internal_63461a0()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [eax+4]
        fsubp 
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+0x118]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0x114]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [ecx+0x11C]
        fsubp 
        fld dword ptr ds : [ecx+0x104]
        mov dword ptr ss : [esp+0x14], eax
        fld dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+0x10C]
        mov dword ptr ss : [esp], edx
        fld dword ptr ds : [ecx+0xFC]
        fmul st, st(4)
        fld dword ptr ds : [ecx+0xF8]
        fmul st, st(6)
        faddp 
        fld dword ptr ds : [ecx+0xF4]
        fmul st, st(7)
        faddp 
        fstp dword ptr ds : [eax]
        fld st(3)
        fmul st, st(1)
        fld st(5)
        fmul st, st(3)
        faddp 
        fxch st(3)
        fmul st, st(6)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fxch 
        fstp st(0)
        mov dword ptr ds : [eax+4], ecx
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ss : [esp]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul st, st(2)
        faddp 
        fstp st(1)
        fst dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ecx+4]
        fxch 
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [eax]
        mov dword ptr ds : [eax+8], edx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x63461a0)
    }
}
