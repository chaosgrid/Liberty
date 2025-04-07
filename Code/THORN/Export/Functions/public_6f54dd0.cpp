#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54dd0);

#define public_6f54e15 _public_6f54e15
#define public_6f54e21 _public_6f54e21

PROC_DECLARE(0x6f54dd0, internal_6f54dd0, public_6f54dd0);
extern "C" NAKED register_t __cdecl internal_6f54dd0()
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
        call public_6f4f9b0
        fst qword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_6f5b430]
        add esp, 4
        fnstsw ax
        test ah, 1
        je public_6f54e15
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push esi
/*FIXUP push offset public_6f6145c @0x6f54e08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6145c
        call public_6f4f7a0
        add esp, 0xC
        public_6f54e15 : nop
        fld qword ptr ss : [esp+8]
        test edi, edi
        pop edi
        pop esi
        je public_6f54e21
        fchs 
        public_6f54e21 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f54dd0)
    }
}

#undef public_6f54e15
#undef public_6f54e21
