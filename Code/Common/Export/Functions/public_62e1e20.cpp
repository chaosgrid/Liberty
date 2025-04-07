#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1e20);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62e1eb2 _public_62e1eb2
#define public_62e1ec6 _public_62e1ec6
#define public_62e1f17 _public_62e1f17
#define public_62e1f30 _public_62e1f30

PROC_DECLARE(0x62e1e20, internal_62e1e20, public_62e1e20);
extern "C" NAKED register_t __cdecl internal_62e1e20()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp]
        fsub dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e1eb2
        fld dword ptr ds : [public_639a1d0]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x20]
        jmp public_62e1ec6
        public_62e1eb2 : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [public_6399408]
        public_62e1ec6 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        fxch st(3)
        fmul st, st(3)
        fxch st(4)
        fmul st, st(1)
        faddp st(4), st
        fxch 
        fmul st, st(4)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e1f17
        mov dword ptr ss : [esp+0x20], 0x3F800000
        fld dword ptr ss : [esp+0x20]
        call public_6391fc2
        fabs 
        add esp, 0x18
        ret 
        public_62e1f17 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e1f30
        mov dword ptr ss : [esp+0x20], 0xBF800000
        public_62e1f30 : nop
        fld dword ptr ss : [esp+0x20]
        call public_6391fc2
        fabs 
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62e1e20)
    }
}

#undef public_62e1eb2
#undef public_62e1ec6
#undef public_62e1f17
#undef public_62e1f30
