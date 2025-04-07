#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627a110);
CLANG_FORWARD_PROC_SYMBOL(public_627a8a0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_630fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63104c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6392bde);

#define public_627a175 _public_627a175
#define public_627a1a0 _public_627a1a0
#define public_627a234 _public_627a234
#define public_627a261 _public_627a261
#define public_627a2f1 _public_627a2f1
#define public_627a320 _public_627a320
#define public_627a343 _public_627a343
#define public_627a346 _public_627a346
#define public_627a360 _public_627a360
#define public_627a387 _public_627a387
#define public_627a3a0 _public_627a3a0
#define public_627a3c1 _public_627a3c1
#define public_627a43a _public_627a43a
#define public_627a44b _public_627a44b
#define public_627a45e _public_627a45e
#define public_627a460 _public_627a460
#define public_627a489 _public_627a489
#define public_627a48b _public_627a48b
#define public_627a4ec _public_627a4ec
#define public_627a4fb _public_627a4fb
#define public_627a506 _public_627a506
#define public_627a51e _public_627a51e
#define public_627a556 _public_627a556
#define public_627a55f _public_627a55f

PROC_DECLARE(0x627a110, internal_627a110, public_627a110);
extern "C" NAKED register_t __cdecl internal_627a110()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6392bde @0x627a118*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392bde
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15B0
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x58]
        call public_630f660
        mov edi, dword ptr ss : [esp+0x15D0]
        push 0
        push edi
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x15D0], 0
        call public_630f9b0
        test al, al
        je public_627a3a0
        lea ecx, ss:[esp+0x58]
        call public_6310070
        test al, al
        je public_627a3c1
/*FIXUP public_627a175 : nop
        push offset public_639b160 @0x627a175*/
  FIXUP public_627a175 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b160
        lea ecx, ss:[esp+0x5C]
        call public_63103c0
        test al, al
        lea ecx, ss:[esp+0x58]
        je public_627a360
        call public_6310170
        test al, al
        je public_627a387
        lea esp, ss:[esp]
/*FIXUP public_627a1a0 : nop
        push offset public_639b15c @0x627a1a0*/
  FIXUP public_627a1a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b15c
        lea ecx, ss:[esp+0x5C]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x58]
        je public_627a261
        push 0
        call public_6310560
        mov bl, al
        neg bl
        sbb bl, bl
        push 1
        lea ecx, ss:[esp+0x5C]
        inc bl
        call public_6310560
        neg al
        sbb al, al
        inc al
        test bl, bl
        je public_627a234
        test al, al
        je public_627a234
        push 0
        lea ecx, ss:[esp+0x5C]
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x5C]
        mov esi, eax
        call public_63108f0
        fstp dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x48]
        xor eax, eax
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        lea ecx, ss:[ebp+4]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_627a8a0
        jmp public_627a346
        public_627a234 : nop
        push edi
        lea ecx, ss:[esp+0x5C]
        mov esi, 0x100002
        call public_630fe10
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x8D
/*FIXUP push offset public_639b130 @0x627a24f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
/*FIXUP push offset public_639b0e0 @0x627a254*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b0e0
        push esi
        call dword ptr ds : [ecx]
        jmp public_627a343
/*FIXUP public_627a261 : nop
        push offset public_639b0d0 @0x627a261*/
  FIXUP public_627a261 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b0d0
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x58]
        je public_627a320
        push 0
        call public_6310560
        mov bl, al
        neg bl
        sbb bl, bl
        push 1
        lea ecx, ss:[esp+0x5C]
        inc bl
        call public_6310560
        neg al
        sbb al, al
        inc al
        test bl, bl
        je public_627a2f1
        test al, al
        je public_627a2f1
        push 0
        lea ecx, ss:[esp+0x5C]
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x5C]
        mov esi, eax
        call public_63108f0
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, 1
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[ebp+4]
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], edx
        call public_627a8a0
        jmp public_627a346
        public_627a2f1 : nop
        push edi
        lea ecx, ss:[esp+0x5C]
        mov esi, 0x100002
        call public_630fe10
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0xA7
/*FIXUP push offset public_639b130 @0x627a30c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
/*FIXUP push offset public_639b0e0 @0x627a311*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b0e0
        push esi
        call dword ptr ds : [edx]
        jmp public_627a343
        nop 
        lea esp, ss:[esp]
        public_627a320 : nop
        push edi
        mov esi, 0x100002
        call public_6310b70
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0xAD
/*FIXUP push offset public_639b130 @0x627a336*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
/*FIXUP push offset public_639b080 @0x627a33b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b080
        push esi
        call dword ptr ds : [eax]
        public_627a343 : nop
        add esp, 0x18
        public_627a346 : nop
        lea ecx, ss:[esp+0x58]
        call public_6310170
        test al, al
        jne public_627a1a0
        jmp public_627a387
        lea esp, ss:[esp]
        public_627a360 : nop
        push edi
        mov esi, 0x100002
        call public_63104c0
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0xB4
/*FIXUP push offset public_639b130 @0x627a377*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
/*FIXUP push offset public_639b030 @0x627a37c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b030
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_627a387 : nop
        lea ecx, ss:[esp+0x58]
        call public_6310070
        test al, al
        jne public_627a175
        jmp public_627a3c1
        lea ebx, ds:[ebx]
        public_627a3a0 : nop
        mov edx, dword ptr ds : [public_6399028]
        push edi
        push 0xBA
/*FIXUP push offset public_639b130 @0x627a3ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
        mov eax, 0x100001
/*FIXUP push offset public_639afe8 @0x627a3b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639afe8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_627a3c1 : nop
        lea eax, ss:[esp+0x1480]
        mov dword ptr ss : [esp+0x15C8], 1
        mov dword ptr ss : [esp+0x30], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea ecx, ss:[esp+0x1488]
        mov byte ptr ss : [esp+0x15D0], 2
        call dword ptr ds : [public_6399198]
        mov eax, dword ptr ss : [esp+0x1490]
        mov ebx, dword ptr ds : [public_6399138]
        mov esi, dword ptr ds : [public_639913c]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_627a45e
        mov eax, dword ptr ss : [esp+0x1494]
        xor edi, edi
        cmp eax, edi
        je public_627a44b
        mov eax, dword ptr ss : [esp+0x1498]
        cmp eax, edi
        je public_627a43a
        push eax
        call ebx
        mov dword ptr ss : [esp+0x1498], edi
        mov dword ptr ss : [esp+0x149C], edi
        public_627a43a : nop
        mov eax, dword ptr ss : [esp+0x1494]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1494], edi
        public_627a44b : nop
        mov ecx, dword ptr ss : [esp+0x1490]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1490], ebp
        jmp public_627a460
        public_627a45e : nop
        xor edi, edi
        public_627a460 : nop
        mov eax, dword ptr ss : [esp+0x1498]
        cmp eax, edi
        mov edi, dword ptr ds : [public_639932c]
        je public_627a489
        push eax
        call edi
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x1498], eax
        mov dword ptr ss : [esp+0x149C], eax
        jmp public_627a48b
        public_627a489 : nop
        xor eax, eax
        public_627a48b : nop
        push 1
        lea ecx, ss:[esp+0x1484]
        mov dword ptr ss : [esp+0x14A4], eax
        mov byte ptr ss : [esp+0x15CC], 1
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x15D0], 3
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x68], ebp
        je public_627a506
        mov eax, dword ptr ss : [esp+0x6C]
        test eax, eax
        je public_627a4fb
        mov eax, dword ptr ss : [esp+0x70]
        test eax, eax
        je public_627a4ec
        push eax
        call ebx
        xor eax, eax
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x74], eax
        public_627a4ec : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x6C], 0
        public_627a4fb : nop
        mov edx, dword ptr ss : [esp+0x68]
        push edx
        call esi
        mov dword ptr ss : [esp+0x68], ebp
        public_627a506 : nop
        mov eax, dword ptr ss : [esp+0x70]
        xor esi, esi
        cmp eax, esi
        je public_627a51e
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x74], esi
        public_627a51e : nop
        mov eax, dword ptr ss : [esp+0x5C]
        pop edi
        mov dword ptr ss : [esp+0x74], esi
        cmp eax, esi
        pop esi
        pop ebp
        pop ebx
        je public_627a55f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_627a556
        cmp cl, 0xFF
        je public_627a556
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x15B0]
        mov dword ptr fs : [0], ecx
        add esp, 0x15BC
        ret 4
        public_627a556 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627a55f : nop
        mov ecx, dword ptr ss : [esp+0x15B0]
        mov dword ptr fs : [0], ecx
        add esp, 0x15BC
        ret 4
        UNREACHABLE_TRAP(0x627a110)
    }
}

#undef public_627a175
#undef public_627a1a0
#undef public_627a234
#undef public_627a261
#undef public_627a2f1
#undef public_627a320
#undef public_627a343
#undef public_627a346
#undef public_627a360
#undef public_627a387
#undef public_627a3a0
#undef public_627a3c1
#undef public_627a43a
#undef public_627a44b
#undef public_627a45e
#undef public_627a460
#undef public_627a489
#undef public_627a48b
#undef public_627a4ec
#undef public_627a4fb
#undef public_627a506
#undef public_627a51e
#undef public_627a556
#undef public_627a55f
