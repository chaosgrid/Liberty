#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634da50);

#define public_634da81 _public_634da81

PROC_DECLARE(0x634da50, internal_634da50, public_634da50);
extern "C" NAKED register_t __cdecl internal_634da50()
{
    __asm
    {
        push ecx
        fld dword ptr ss : [esp+8]
        mov eax, 0x3F
        fmul dword ptr ds : [public_63a5464]
        mov dword ptr ss : [esp], eax
        lea edx, ds:[ecx+0x104]
        fst dword ptr ds : [ecx]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63a53fc]
        faddp 
        fst dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+0x108]
        public_634da81 : nop
        fld dword ptr ds : [ecx+0x108]
        dec eax
        fsub dword ptr ds : [ecx+4]
        sub edx, 4
        test eax, eax
        fild dword ptr ss : [esp]
        mov dword ptr ss : [esp], eax
        fmul dword ptr ds : [public_63a55a0]
        fmulp 
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ds : [edx+4]
        jge public_634da81
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [ecx+0x108]
        fst dword ptr ds : [ecx+0x10C]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63a559c]
        fadd st, st(1)
        fst dword ptr ds : [ecx+0x110]
        fsub dword ptr ds : [ecx+4]
        fmul dword ptr ds : [public_63a5598]
        fsqrt 
        fstp dword ptr ds : [ecx+0x114]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63a5404]
        fstp dword ptr ds : [ecx+0x118]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63a5594]
        fadd st, st(1)
        fstp dword ptr ds : [ecx+0x11C]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63a543c]
        fadd st, st(1)
        fstp dword ptr ds : [ecx+0x120]
        fstp st(0)
        fld dword ptr ss : [esp+8]
        fadd st(0), st
        fstp dword ptr ds : [ecx+0x128]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [public_63a5464]
        fstp dword ptr ds : [ecx+0x124]
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x634da50)
    }
}

#undef public_634da81
