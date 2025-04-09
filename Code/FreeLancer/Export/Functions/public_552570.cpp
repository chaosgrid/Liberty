#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552570);

#define public_552588 _public_552588
#define public_5525b0 _public_5525b0
#define public_5525cf _public_5525cf
#define public_55263f _public_55263f
#define public_552659 _public_552659
#define public_552671 _public_552671
#define public_552682 _public_552682

PROC_DECLARE(0x552570, internal_552570, public_552570);
extern "C" NAKED register_t __cdecl internal_552570()
{
    __asm
    {
        sub esp, 0x18
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x14C]
        test al, al
        je public_552588
        mov byte ptr ds : [edi+0x14C], 0
        public_552588 : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ds : [edi+0x148], 0
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_552682
        push ebp
        mov ebp, dword ptr ds : [public_5c6cf4]
        lea ecx, ds:[ecx]
/*FIXUP public_5525b0 : nop
        push offset public_5daf18 @0x5525b0*/
  FIXUP public_5525b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daf18
        mov ecx, esi
        call ebp
        test al, al
        mov ecx, esi
        je public_5525cf
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x28]
        jmp public_552671
/*FIXUP public_5525cf : nop
        push offset public_5c7f6c @0x5525cf*/
  FIXUP public_5525cf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f6c
        call ebp
        test al, al
        mov ecx, esi
        je public_55263f
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c7f68]
        lea eax, ds:[edi+0x1C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        jmp public_552671
/*FIXUP public_55263f : nop
        push offset public_5e0af8 @0x55263f*/
  FIXUP public_55263f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0af8
        call ebp
        test al, al
        mov ecx, esi
        je public_552659
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x2C]
        jmp public_552671
/*FIXUP public_552659 : nop
        push offset public_5cabe0 @0x552659*/
  FIXUP public_552659 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cabe0
        call ebp
        test al, al
        je public_552671
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x30]
        public_552671 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5525b0
        pop ebp
        public_552682 : nop
        mov dword ptr ds : [edi+0x18], 0
        xor edx, edx
        mov dword ptr ds : [edi+0x38], edx
        mov dword ptr ds : [edi+0x3C], edx
        mov dword ptr ds : [edi+0x40], edx
        mov dword ptr ds : [edi+0x44], edx
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        mov byte ptr ds : [edi+0x14C], 1
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5db0b8]
        fsubr qword ptr ds : [public_5e0df8]
        fmul dword ptr ds : [edi+0x28]
        fstp dword ptr ds : [edi]
        pop edi
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x552570)
    }
}

#undef public_552588
#undef public_5525b0
#undef public_5525cf
#undef public_55263f
#undef public_552659
#undef public_552671
#undef public_552682
