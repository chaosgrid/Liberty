#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30480);

#define public_6f30495 _public_6f30495
#define public_6f304aa _public_6f304aa
#define public_6f304ca _public_6f304ca

PROC_DECLARE(0x6f30480, internal_6f30480, public_6f30480);
extern "C" NAKED register_t __cdecl internal_6f30480()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_6f30495
        fld dword ptr ds : [ecx]
        ret 
        public_6f30495 : nop
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_6f304aa
        fld dword ptr ds : [edx]
        ret 
        public_6f304aa : nop
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, 0xFFFFFFFF
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [ecx+4]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0xC]
        jne public_6f304ca
        fstp st(0)
        fld dword ptr ds : [ecx]
        ret 
        public_6f304ca : nop
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld st(0)
        fadd st, st(1)
        fld st(2)
        fmul dword ptr ds : [public_6f5a1b4]
        fld st(3)
        fadd st(0), st
        fsubr st, st(3)
        fadd dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx+0xC]
        fmul st, st(5)
        fxch st(3)
        fsub st, st(4)
        fmul dword ptr ds : [edx+8]
        fmul st, st(5)
        faddp st(3), st
        fld st(1)
        fsub st, st(1)
        fadd dword ptr ds : [public_6f5a1b8]
        fmul dword ptr ds : [ecx]
        faddp st(3), st
        fsub st, st(1)
        fmul dword ptr ds : [edx]
        faddp st(2), st
        fxch 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6f30480)
    }
}

#undef public_6f30495
#undef public_6f304aa
#undef public_6f304ca
