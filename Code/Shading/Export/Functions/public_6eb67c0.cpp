#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7970);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6eb67e0 _public_6eb67e0
#define public_6eb67fa _public_6eb67fa
#define public_6eb6b67 _public_6eb6b67
#define public_6eb6b77 _public_6eb6b77

PROC_DECLARE(0x6eb67c0, internal_6eb67c0, public_6eb67c0);
extern "C" NAKED register_t __cdecl internal_6eb67c0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6ed721c]
        test al, 1
        push esi
        push edi
        jne public_6eb67fa
        or al, 1
        mov byte ptr ds : [public_6ed721c], al
        mov esi, offset public_6ed7220
        mov edi, 0xD
        lea esp, ss:[esp]
        public_6eb67e0 : nop
        mov ecx, esi
        call public_6eb2a60
        add esi, 0x4C
        dec edi
        jne public_6eb67e0
/*FIXUP push offset _public_6eb7970 @0x6eb67ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eb7970
        call public_6ed0ccb
        add esp, 4
        public_6eb67fa : nop
        mov eax, dword ptr ds : [public_6ed7230]
        xor edi, edi
        cmp eax, edi
        jne public_6eb6b67
/*FIXUP push offset public_6ed185c @0x6eb6809*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed185c
        mov esi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed7230
        mov dword ptr ds : [public_6ed7220], edi
        mov dword ptr ds : [public_6ed7224], offset public_6ed41f4
        mov dword ptr ds : [public_6ed7228], offset public_6ed41e4
        mov dword ptr ds : [public_6ed722c], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed184c @0x6eb683f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed184c
        push 3
        mov ecx, offset public_6ed7244
        call public_6eb28f0
/*FIXUP push offset public_6ed185c @0x6eb6850*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed185c
        push 3
        mov ecx, offset public_6ed7258
        call public_6eb28f0
/*FIXUP push offset public_6ed185c @0x6eb6861*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed185c
        push 3
        mov ecx, offset public_6ed727c
        mov dword ptr ds : [public_6ed726c], edi
        mov dword ptr ds : [public_6ed7270], offset public_6ed41e0
        mov dword ptr ds : [public_6ed7274], offset public_6ed41d0
        mov dword ptr ds : [public_6ed7278], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed184c @0x6eb6892*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed184c
        push 3
        mov ecx, offset public_6ed7290
        call public_6eb28f0
/*FIXUP push offset public_6ed19a8 @0x6eb68a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed19a8
        push 3
        mov ecx, offset public_6ed72a4
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb68b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed72c8
        mov dword ptr ds : [public_6ed72b8], edi
        mov dword ptr ds : [public_6ed72bc], offset public_6ed41c8
        mov dword ptr ds : [public_6ed72c0], offset public_6ed45c0
        mov dword ptr ds : [public_6ed72c4], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed72dc
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed72f0
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed7314
        mov dword ptr ds : [public_6ed7304], edi
        mov dword ptr ds : [public_6ed7308], offset public_6ed41a4
        mov dword ptr ds : [public_6ed730c], offset public_6ed45a4
        mov dword ptr ds : [public_6ed7310], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7328
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed733c
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed7360
        mov dword ptr ds : [public_6ed7350], 0x20000
        mov dword ptr ds : [public_6ed7354], offset public_6ed41a4
        mov dword ptr ds : [public_6ed7358], offset public_6ed4584
        mov dword ptr ds : [public_6ed735c], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7374
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7388
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed73ac
        mov dword ptr ds : [public_6ed739c], 0x40000
        mov dword ptr ds : [public_6ed73a0], offset public_6ed41a4
        mov dword ptr ds : [public_6ed73a4], offset public_6ed4564
        mov dword ptr ds : [public_6ed73a8], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed73c0
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed73d4
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed73f8
        mov dword ptr ds : [public_6ed73e8], edi
        mov dword ptr ds : [public_6ed73ec], offset public_6ed4690
        mov dword ptr ds : [public_6ed73f0], offset public_6ed4688
        mov dword ptr ds : [public_6ed73f4], esi
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed740c
        call public_6eb28f0
        push 1
        push 1
        mov ecx, offset public_6ed7420
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed7444
        mov dword ptr ds : [public_6ed7434], edi
        mov dword ptr ds : [public_6ed7438], offset public_6ed4680
        mov dword ptr ds : [public_6ed743c], offset public_6ed4678
        mov dword ptr ds : [public_6ed7440], esi
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed7458
        call public_6eb28f0
        push 1
        push 1
        mov ecx, offset public_6ed746c
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb6a6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed7490
        mov dword ptr ds : [public_6ed7480], edi
        mov dword ptr ds : [public_6ed7484], offset public_6ed466c
        mov dword ptr ds : [public_6ed7488], offset public_6ed4658
        mov dword ptr ds : [public_6ed748c], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed74a4
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed74b8
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed74dc
        mov dword ptr ds : [public_6ed74cc], edi
        mov dword ptr ds : [public_6ed74d0], offset public_6ed464c
        mov dword ptr ds : [public_6ed74d4], offset public_6ed4630
        mov dword ptr ds : [public_6ed74d8], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed74f0
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7504
        call public_6eb28f0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed4610 @0x6eb6b06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4610
/*FIXUP push offset public_6ed464c @0x6eb6b0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed464c
        push 0x20000
        push 9
        mov ecx, offset public_6ed7518
        call public_6eb4dc0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed45f0 @0x6eb6b25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed45f0
/*FIXUP push offset public_6ed464c @0x6eb6b2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed464c
        push 0x40000
        push 9
        mov ecx, offset public_6ed7564
        call public_6eb4dc0
/*FIXUP push offset public_6ed186c @0x6eb6b40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed186c
/*FIXUP push offset public_6ed187c @0x6eb6b45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed187c
/*FIXUP push offset public_6ed19a4 @0x6eb6b4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed19a4
        push esi
/*FIXUP push offset public_6ed45e4 @0x6eb6b50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed45e4
/*FIXUP push offset public_6ed45d8 @0x6eb6b55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed45d8
        push edi
        push 2
        mov ecx, offset public_6ed75b0
        call public_6eb4dc0
        public_6eb6b67 : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_6eb6b77
        mov dword ptr ds : [eax], offset public_6ed7220
        public_6eb6b77 : nop
        mov eax, 0xD
        ret 4
        UNREACHABLE_TRAP(0x6eb67c0)
    }
}

#undef public_6eb67e0
#undef public_6eb67fa
#undef public_6eb6b67
#undef public_6eb6b77
