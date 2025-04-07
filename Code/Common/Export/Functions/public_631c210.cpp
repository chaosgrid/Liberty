#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f770);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_63104e0);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_631c210);
CLANG_FORWARD_PROC_SYMBOL(public_631c870);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396b9e);

#define public_631c277 _public_631c277
#define public_631c2d4 _public_631c2d4
#define public_631c300 _public_631c300
#define public_631c321 _public_631c321
#define public_631c337 _public_631c337
#define public_631c34d _public_631c34d
#define public_631c372 _public_631c372
#define public_631c390 _public_631c390
#define public_631c3bf _public_631c3bf
#define public_631c3d0 _public_631c3d0
#define public_631c3f0 _public_631c3f0
#define public_631c410 _public_631c410
#define public_631c420 _public_631c420
#define public_631c43a _public_631c43a
#define public_631c459 _public_631c459
#define public_631c470 _public_631c470
#define public_631c481 _public_631c481
#define public_631c490 _public_631c490
#define public_631c4b7 _public_631c4b7
#define public_631c4d0 _public_631c4d0
#define public_631c522 _public_631c522
#define public_631c56b _public_631c56b
#define public_631c5ac _public_631c5ac
#define public_631c5bd _public_631c5bd
#define public_631c5d0 _public_631c5d0
#define public_631c5d2 _public_631c5d2
#define public_631c5f5 _public_631c5f5
#define public_631c61a _public_631c61a
#define public_631c623 _public_631c623
#define public_631c65e _public_631c65e
#define public_631c695 _public_631c695
#define public_631c697 _public_631c697
#define public_631c6bf _public_631c6bf
#define public_631c6ca _public_631c6ca
#define public_631c6d5 _public_631c6d5
#define public_631c6ef _public_631c6ef
#define public_631c727 _public_631c727
#define public_631c730 _public_631c730

PROC_DECLARE(0x631c210, internal_631c210, public_631c210);
extern "C" NAKED register_t __cdecl internal_631c210()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6396b9e @0x631c218*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396b9e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x19B4
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_639905c]
        mov edx, dword ptr ss : [esp+0x19C4]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x15CC]
        push eax
        call public_6302df0
        push 0x400
        call public_6391d9c
        mov ebp, eax
        push 0x400
        mov dword ptr ss : [esp+0x2C], ebp
        call public_6391d9c
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        xor esi, esi
        public_631c277 : nop
        push 0x400
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+esi*4+0x1C], eax
        inc esi
        cmp esi, 0x10
        jl public_631c277
        lea ecx, ss:[esp+0x5C]
        call public_630f660
        push 0
        lea ecx, ss:[esp+0x15C8]
        push ecx
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x19D4], 0
        call public_630f9b0
        test al, al
        je public_631c490
        lea ecx, ss:[esp+0x5C]
        call public_6310070
        test al, al
        je public_631c481
        mov edi, dword ptr ds : [public_639902c]
/*FIXUP public_631c2d4 : nop
        push offset public_63a3b88 @0x631c2d4*/
  FIXUP public_631c2d4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b88
        lea ecx, ss:[esp+0x60]
        call public_63103c0
        test al, al
        je public_631c470
        lea ecx, ss:[esp+0x5C]
        call public_6310170
        test al, al
        je public_631c470
        nop 
        lea esp, ss:[esp]
        public_631c300 : nop
        lea ecx, ss:[esp+0x5C]
        call public_63104e0
        mov esi, eax
/*FIXUP push offset public_63a3b80 @0x631c30b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b80
        push esi
        or ebx, 0xFFFFFFFF
        call edi
        add esp, 8
        test eax, eax
        jne public_631c321
        xor ebx, ebx
        jmp public_631c372
/*FIXUP public_631c321 : nop
        push offset public_63a3b78 @0x631c321*/
  FIXUP public_631c321 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b78
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_631c337
        mov ebx, 5
        jmp public_631c372
/*FIXUP public_631c337 : nop
        push offset public_63a3b70 @0x631c337*/
  FIXUP public_631c337 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b70
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_631c34d
        mov ebx, 6
        jmp public_631c372
        public_631c34d : nop
        lea edx, ss:[esp+0x15C4]
        push edx
        push esi
        push 0x59
/*FIXUP push offset public_63a3b48 @0x631c358*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b48
        mov eax, 0x100001
/*FIXUP push offset public_63a3b00 @0x631c362*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b00
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x18
        public_631c372 : nop
        push 0
        lea ecx, ss:[esp+0x60]
        call public_6310560
        test al, al
        jne public_631c390
        push 1
        lea ecx, ss:[esp+0x60]
        call public_6310560
        test al, al
        je public_631c3bf
        public_631c390 : nop
        lea ecx, ss:[esp+0x15C4]
        push ecx
        lea ecx, ss:[esp+0x60]
        mov esi, 0x100001
        call public_6310b70
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x61
/*FIXUP push offset public_63a3b48 @0x631c3af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b48
/*FIXUP push offset public_63a3aa0 @0x631c3b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3aa0
        push esi
        call dword ptr ds : [edx]
        add esp, 0x18
        public_631c3bf : nop
        push 0
        lea ecx, ss:[esp+0x60]
        call public_6310a30
        mov edx, ebp
        sub edx, eax
        mov edi, edi
        public_631c3d0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_631c3d0
        push 1
        lea ecx, ss:[esp+0x60]
        call public_6310a30
        mov edx, dword ptr ss : [esp+0x10]
        sub edx, eax
        nop 
        lea esp, ss:[esp]
        public_631c3f0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_631c3f0
        mov edi, 2
        push edi
        lea ecx, ss:[esp+0x60]
        xor esi, esi
        call public_6310560
        test al, al
        jne public_631c43a
        nop 
        public_631c410 : nop
        push edi
        lea ecx, ss:[esp+0x60]
        call public_6310a30
        mov edx, dword ptr ss : [esp+esi*4+0x1C]
        mov edi, edi
        public_631c420 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_631c420
        inc esi
        inc edi
        push edi
        lea ecx, ss:[esp+0x60]
        call public_6310560
        test al, al
        je public_631c410
        public_631c43a : nop
        cmp ebx, 0xFFFFFFFF
        mov ebp, dword ptr ss : [esp+0x18]
        je public_631c459
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ebp
        push ebx
        call public_631c870
        public_631c459 : nop
        lea ecx, ss:[esp+0x5C]
        call public_6310170
        test al, al
        mov edi, dword ptr ds : [public_639902c]
        jne public_631c300
        public_631c470 : nop
        lea ecx, ss:[esp+0x5C]
        call public_6310070
        test al, al
        jne public_631c2d4
        public_631c481 : nop
        lea ecx, ss:[esp+0x5C]
        call public_630f770
        jmp public_631c4b7
        lea esp, ss:[esp]
        public_631c490 : nop
        lea edx, ss:[esp+0x15C4]
        push edx
        push 0x86
/*FIXUP push offset public_63a3b48 @0x631c49d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b48
        mov eax, 0x100001
/*FIXUP push offset public_63a3a64 @0x631c4a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3a64
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_631c4b7 : nop
        push ebp
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6391d5a
        add esp, 8
        xor esi, esi
        lea esp, ss:[esp]
        public_631c4d0 : nop
        mov eax, dword ptr ss : [esp+esi*4+0x1C]
        push eax
        call public_6391d5a
        add esp, 4
        inc esi
        cmp esi, 0x10
        jl public_631c4d0
        lea edx, ss:[esp+0x1484]
        mov dword ptr ss : [esp+0x19CC], 1
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [public_63991c0]
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1484]
        mov byte ptr ss : [esp+0x19CC], 2
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [esp+0x148C]
        cmp eax, esi
        jae public_631c522
        mov esi, eax
        public_631c522 : nop
        test esi, esi
        mov ebp, dword ptr ds : [public_6399330]
        jbe public_631c56b
        mov ecx, dword ptr ss : [esp+0x1488]
        sub eax, esi
        push eax
        lea edx, ds:[ecx+esi]
        push edx
        push ecx
        call ebp
        mov edi, dword ptr ss : [esp+0x1498]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x148C]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631c56b
        push edi
        lea ecx, ss:[esp+0x1488]
        call dword ptr ds : [public_63991d8]
        public_631c56b : nop
        mov eax, dword ptr ss : [esp+0x1494]
        mov ebx, dword ptr ds : [public_639913c]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_631c5d0
        mov eax, dword ptr ss : [esp+0x1498]
        xor edi, edi
        cmp eax, edi
        je public_631c5bd
        mov eax, dword ptr ss : [esp+0x149C]
        cmp eax, edi
        je public_631c5ac
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x149C], edi
        mov dword ptr ss : [esp+0x14A0], edi
        public_631c5ac : nop
        mov ecx, dword ptr ss : [esp+0x1498]
        push ecx
        call ebx
        mov dword ptr ss : [esp+0x1498], edi
        public_631c5bd : nop
        mov edx, dword ptr ss : [esp+0x1494]
        push edx
        call ebx
        mov dword ptr ss : [esp+0x1494], esi
        jmp public_631c5d2
        public_631c5d0 : nop
        xor edi, edi
        public_631c5d2 : nop
        mov eax, dword ptr ss : [esp+0x149C]
        cmp eax, edi
        je public_631c5f5
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [esp+0x149C], edi
        mov dword ptr ss : [esp+0x14A0], edi
        public_631c5f5 : nop
        mov eax, dword ptr ss : [esp+0x1488]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14A4], edi
        je public_631c623
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_631c61a
        cmp cl, 0xFF
        je public_631c61a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_631c623
        public_631c61a : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_631c623 : nop
        mov dword ptr ss : [esp+0x1488], edi
        mov dword ptr ss : [esp+0x148C], edi
        mov dword ptr ss : [esp+0x1490], edi
        mov eax, dword ptr ds : [public_63991c0]
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x19CC], 3
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [esp+0x64]
        cmp eax, esi
        jae public_631c65e
        mov esi, eax
        public_631c65e : nop
        cmp esi, edi
        jbe public_631c697
        sub eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0x64]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        call ebp
        mov edi, dword ptr ss : [esp+0x70]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x64]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631c695
        push edi
        lea ecx, ss:[esp+0x60]
        call dword ptr ds : [public_63991d8]
        public_631c695 : nop
        xor edi, edi
        public_631c697 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_631c6d5
        cmp dword ptr ss : [esp+0x70], edi
        je public_631c6ca
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, edi
        je public_631c6bf
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x74], edi
        mov dword ptr ss : [esp+0x78], edi
        public_631c6bf : nop
        mov edx, dword ptr ss : [esp+0x70]
        push edx
        call ebx
        mov dword ptr ss : [esp+0x70], edi
        public_631c6ca : nop
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        call ebx
        mov dword ptr ss : [esp+0x6C], esi
        public_631c6d5 : nop
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, edi
        je public_631c6ef
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [esp+0x74], edi
        mov dword ptr ss : [esp+0x78], edi
        public_631c6ef : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x7C], edi
        cmp eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_631c730
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_631c727
        cmp cl, 0xFF
        je public_631c727
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x19B4]
        mov dword ptr fs : [0], ecx
        add esp, 0x19C0
        ret 4
        public_631c727 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_631c730 : nop
        mov ecx, dword ptr ss : [esp+0x19B4]
        mov dword ptr fs : [0], ecx
        add esp, 0x19C0
        ret 4
        UNREACHABLE_TRAP(0x631c210)
    }
}

#undef public_631c277
#undef public_631c2d4
#undef public_631c300
#undef public_631c321
#undef public_631c337
#undef public_631c34d
#undef public_631c372
#undef public_631c390
#undef public_631c3bf
#undef public_631c3d0
#undef public_631c3f0
#undef public_631c410
#undef public_631c420
#undef public_631c43a
#undef public_631c459
#undef public_631c470
#undef public_631c481
#undef public_631c490
#undef public_631c4b7
#undef public_631c4d0
#undef public_631c522
#undef public_631c56b
#undef public_631c5ac
#undef public_631c5bd
#undef public_631c5d0
#undef public_631c5d2
#undef public_631c5f5
#undef public_631c61a
#undef public_631c623
#undef public_631c65e
#undef public_631c695
#undef public_631c697
#undef public_631c6bf
#undef public_631c6ca
#undef public_631c6d5
#undef public_631c6ef
#undef public_631c727
#undef public_631c730
