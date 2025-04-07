#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_631daa8 _public_631daa8
#define public_631dac1 _public_631dac1

PROC_DECLARE(0x631da50, internal_631da50, public_631da50);
extern "C" NAKED register_t __cdecl internal_631da50()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ds : [public_6399308]
        call esi
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_63997d0]
        fstp dword ptr ss : [esp+8]
        call esi
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        pop esi
        fmul dword ptr ds : [public_63997d0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+4]
        fadd st(0), st
        fsub qword ptr ds : [public_6399410]
        fst dword ptr ss : [esp]
        fcomp qword ptr ds : [public_63a03f0]
        fnstsw ax
        test ah, 5
        jp public_631daa8
        mov dword ptr ss : [esp], 0xBF800000
        public_631daa8 : nop
        fld dword ptr ss : [esp]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jne public_631dac1
        mov dword ptr ss : [esp], 0x3F800000
        public_631dac1 : nop
        fld dword ptr ss : [esp]
        call public_6391fc2
        fld dword ptr ss : [esp+8]
        fmul qword ptr ds : [public_639c9e0]
        mov eax, dword ptr ss : [esp+0x1C]
        fld st(1)
        mov ecx, eax
        fsin 
        fld st(1)
        fsin 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fxch st(2)
        mov dword ptr ds : [ecx], edx
        fcos 
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        fcos 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        fstp st(0)
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x631da50)
    }
}

#undef public_631daa8
#undef public_631dac1
