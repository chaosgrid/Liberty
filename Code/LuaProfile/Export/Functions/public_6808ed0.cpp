#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);
CLANG_FORWARD_PROC_SYMBOL(public_68061c0);
CLANG_FORWARD_PROC_SYMBOL(public_6808ed0);

#define public_6808f15 _public_6808f15
#define public_6808f21 _public_6808f21

PROC_DECLARE(0x6808ed0, internal_6808ed0, public_6808ed0);
extern "C" NAKED register_t __cdecl internal_6808ed0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi]
        xor eax, eax
        cmp cl, 0x2D
        sete al
        push edi
        mov edi, eax
        lea ecx, ds:[edi+esi]
        push ecx
        call public_68061c0
        fst qword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_680c180]
        add esp, 4
        fnstsw ax
        test ah, 1
        je public_6808f15
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push esi
/*FIXUP push offset public_680dd8c @0x6808f08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dd8c
        call public_6805fb0
        add esp, 0xC
        public_6808f15 : nop
        fld qword ptr ss : [esp+8]
        test edi, edi
        pop edi
        pop esi
        je public_6808f21
        fchs 
        public_6808f21 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6808ed0)
    }
}

#undef public_6808f15
#undef public_6808f21
