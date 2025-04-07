#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6450);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6eb5dd0 _public_6eb5dd0
#define public_6eb5dea _public_6eb5dea
#define public_6eb6097 _public_6eb6097
#define public_6eb60a7 _public_6eb60a7

PROC_DECLARE(0x6eb5db0, internal_6eb5db0, public_6eb5db0);
extern "C" NAKED register_t __cdecl internal_6eb5db0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ed75fc]
        mov al, 1
        test al, cl
        push esi
        push edi
        jne public_6eb5dea
        or cl, al
        mov byte ptr ds : [public_6ed75fc], cl
        mov esi, offset public_6ed7600
        mov edi, 9
        public_6eb5dd0 : nop
        mov ecx, esi
        call public_6eb2a60
        add esi, 0x4C
        dec edi
        jne public_6eb5dd0
/*FIXUP push offset _public_6eb6450 @0x6eb5ddd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eb6450
        call public_6ed0ccb
        add esp, 4
        public_6eb5dea : nop
        mov eax, dword ptr ds : [public_6ed7610]
        xor edi, edi
        cmp eax, edi
        jne public_6eb6097
        push ebx
/*FIXUP push offset public_6ed16bc @0x6eb5dfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed16bc
        mov esi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed7610
        mov dword ptr ds : [public_6ed7600], edi
        mov dword ptr ds : [public_6ed7604], offset public_6ed41e0
        mov dword ptr ds : [public_6ed7608], offset public_6ed41d0
        mov dword ptr ds : [public_6ed760c], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed16ac @0x6eb5e30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed16ac
        push 3
        mov ecx, offset public_6ed7624
        call public_6eb28f0
/*FIXUP push offset public_6ed16bc @0x6eb5e41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed16bc
        push 3
        mov ecx, offset public_6ed7638
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb5e52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed765c
        mov dword ptr ds : [public_6ed764c], edi
        mov dword ptr ds : [public_6ed7650], offset public_6ed41c8
        mov dword ptr ds : [public_6ed7654], offset public_6ed45c0
        mov dword ptr ds : [public_6ed7658], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed7670
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed7684
        call public_6eb28f0
        push 4
        mov ebx, offset public_6ed41a4
        push 8
        mov ecx, offset public_6ed76a8
        mov dword ptr ds : [public_6ed7698], edi
        mov dword ptr ds : [public_6ed769c], ebx
        mov dword ptr ds : [public_6ed76a0], offset public_6ed45a4
        mov dword ptr ds : [public_6ed76a4], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed76bc
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed76d0
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed76f4
        mov dword ptr ds : [public_6ed76e4], 0x20000
        mov dword ptr ds : [public_6ed76e8], ebx
        mov dword ptr ds : [public_6ed76ec], offset public_6ed4584
        mov dword ptr ds : [public_6ed76f0], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7708
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed771c
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7740
        mov dword ptr ds : [public_6ed7730], 0x40000
        mov dword ptr ds : [public_6ed7734], ebx
        mov dword ptr ds : [public_6ed7738], offset public_6ed4564
        mov dword ptr ds : [public_6ed773c], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7754
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7768
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb5f74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed778c
        mov dword ptr ds : [public_6ed777c], edi
        mov dword ptr ds : [public_6ed7780], offset public_6ed455c
        mov dword ptr ds : [public_6ed7784], offset public_6ed4544
        mov dword ptr ds : [public_6ed7788], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed77a0
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed77b4
        call public_6eb28f0
        push 4
        mov ebx, offset public_6ed4538
        push 8
        mov ecx, offset public_6ed77d8
        mov dword ptr ds : [public_6ed77c8], edi
        mov dword ptr ds : [public_6ed77cc], ebx
        mov dword ptr ds : [public_6ed77d0], offset public_6ed451c
        mov dword ptr ds : [public_6ed77d4], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed77ec
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7800
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7824
        mov dword ptr ds : [public_6ed7814], 0x20000
        mov dword ptr ds : [public_6ed7818], ebx
        mov dword ptr ds : [public_6ed781c], offset public_6ed44fc
        mov dword ptr ds : [public_6ed7820], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7838
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed784c
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7870
        mov dword ptr ds : [public_6ed7860], 0x40000
        mov dword ptr ds : [public_6ed7864], ebx
        mov dword ptr ds : [public_6ed7868], offset public_6ed44dc
        mov dword ptr ds : [public_6ed786c], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7884
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7898
        call public_6eb28f0
        pop ebx
        public_6eb6097 : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_6eb60a7
        mov dword ptr ds : [eax], offset public_6ed7600
        public_6eb60a7 : nop
        mov eax, 9
        ret 4
        UNREACHABLE_TRAP(0x6eb5db0)
    }
}

#undef public_6eb5dd0
#undef public_6eb5dea
#undef public_6eb6097
#undef public_6eb60a7
