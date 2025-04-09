#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_57b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_57bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba49a);

#define public_45ef96 _public_45ef96
#define public_45f03d _public_45f03d
#define public_45f04b _public_45f04b
#define public_45f071 _public_45f071
#define public_45f0c1 _public_45f0c1
#define public_45f126 _public_45f126
#define public_45f134 _public_45f134
#define public_45f15a _public_45f15a
#define public_45f1aa _public_45f1aa
#define public_45f20f _public_45f20f
#define public_45f21d _public_45f21d
#define public_45f243 _public_45f243
#define public_45f293 _public_45f293
#define public_45f2f8 _public_45f2f8
#define public_45f306 _public_45f306
#define public_45f32c _public_45f32c
#define public_45f396 _public_45f396
#define public_45f417 _public_45f417
#define public_45f429 _public_45f429
#define public_45f438 _public_45f438

PROC_DECLARE(0x45eee0, internal_45eee0, public_45eee0);
extern "C" NAKED register_t __cdecl internal_45eee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba49a @0x45eee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba49a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x2C]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push eax
        mov esi, ecx
        call public_57b5a0
        or ecx, 0xFFFFFFFF
        mov byte ptr ds : [esi+0x402], 1
        mov byte ptr ds : [esi+0x538], 1
        mov byte ptr ds : [esi+0x539], bl
        mov byte ptr ss : [esp+0x3C], al
        xor eax, eax
        mov dword ptr ds : [esi+0x55C], 0x3DA3D70A
        mov dword ptr ds : [esi+0x560], 0x3D5A740D
        mov edi, offset public_5cf030
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5cf030 @0x45ef47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf030
        lea ecx, ds:[esi+0x540]
        call dword ptr ds : [public_5c7088]
        mov ecx, dword ptr ds : [public_5ceedc]
        lea edi, ds:[esi+0x56C]
        mov dword ptr ds : [esi+0x330], ecx
        mov edx, dword ptr ds : [public_5ceee0]
        push edi
        push 0x6003B
        mov dword ptr ds : [esi+0x334], edx
        call public_57da40
        add esp, 8
        test al, al
        je public_45ef96
        push edi
        call public_57eb40
        add esp, 4
        jmp public_45f04b
        public_45ef96 : nop
        push 1
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 1
        call public_46c800
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x34], bl
        call public_45eeb0
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62bc]
        push ebp
/*FIXUP push offset public_5cf010 @0x45efea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf010
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 3
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 2
        je public_45f03d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f03d : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62ac]
        public_45f04b : nop
        lea edi, ds:[esi+0x578]
        push edi
        push 0x6003A
        call public_57da40
        add esp, 8
        test al, al
        je public_45f071
        push edi
        call public_57eb40
        add esp, 4
        jmp public_45f134
        public_45f071 : nop
        push 1
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 5
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 4
        je public_45f0c1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f0c1 : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62bc]
        push ebp
/*FIXUP push offset public_5ceff4 @0x45f0d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceff4
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 7
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 6
        je public_45f126
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f126 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62ac]
        public_45f134 : nop
        lea edi, ds:[esi+0x584]
        push edi
        push 0x60039
        call public_57da40
        add esp, 8
        test al, al
        je public_45f15a
        push edi
        call public_57eb40
        add esp, 4
        jmp public_45f21d
        public_45f15a : nop
        push 1
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 9
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 8
        je public_45f1aa
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f1aa : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62bc]
        push ebp
/*FIXUP push offset public_5cefd8 @0x45f1bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cefd8
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 0xB
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 0xA
        je public_45f20f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f20f : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62ac]
        public_45f21d : nop
        lea edi, ds:[esi+0x590]
        push edi
        push 0x60038
        call public_57da40
        add esp, 8
        test al, al
        je public_45f243
        push edi
        call public_57eb40
        add esp, 4
        jmp public_45f306
        public_45f243 : nop
        push 1
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0xC
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 0xD
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 0xC
        je public_45f293
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f293 : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62bc]
        push ebp
/*FIXUP push offset public_5cefb8 @0x45f2a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cefb8
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0xE
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 0xF
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 0xE
        je public_45f2f8
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f2f8 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62ac]
        public_45f306 : nop
        lea edi, ds:[esi+0x59C]
        push edi
        push 0x6003C
        call public_57da40
        add esp, 8
        test al, al
        je public_45f32c
        push edi
        call public_57eb40
        add esp, 4
        jmp public_45f429
        public_45f32c : nop
        push 1
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0x10
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [ebp+4]
        push eax
        push ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x3C], 0x11
        call public_42a7e0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 0x10
        je public_45f396
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f396 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        push 0xFFFFFFFF
/*FIXUP push offset public_5cef94 @0x45f3aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef94
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [ebp+4]
        push eax
        push ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x3C], 0x13
        call public_42a7e0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 0x12
        je public_45f417
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ebx
        public_45f417 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        public_45f429 : nop
        mov eax, dword ptr ds : [public_66da7c]
        cmp eax, ebx
        je public_45f438
        mov dword ptr ds : [esi+0x530], eax
        public_45f438 : nop
        push 1
        mov ecx, esi
        call public_57bdd0
/*FIXUP push offset public_66da40 @0x45f441*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66da40
        mov ecx, esi
        call public_45eaf0
        mov ecx, esi
        call public_57d330
        fld dword ptr ds : [esi+0x330]
        fmul dword ptr ds : [public_5c75e0]
        lea eax, ds:[esi+0xB4]
        mov dword ptr ss : [esp+0x20], 0
        pop edi
        fst dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x334]
        mov dword ptr ds : [eax], ecx
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x1C], 0
        fst dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        fxch 
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+0xC0]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], eax
        mov eax, 7
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x78], eax
        mov al, byte ptr ss : [esp+0x38]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x45eee0)
    }
}

#undef public_45ef96
#undef public_45f03d
#undef public_45f04b
#undef public_45f071
#undef public_45f0c1
#undef public_45f126
#undef public_45f134
#undef public_45f15a
#undef public_45f1aa
#undef public_45f20f
#undef public_45f21d
#undef public_45f243
#undef public_45f293
#undef public_45f2f8
#undef public_45f306
#undef public_45f32c
#undef public_45f396
#undef public_45f417
#undef public_45f429
#undef public_45f438
