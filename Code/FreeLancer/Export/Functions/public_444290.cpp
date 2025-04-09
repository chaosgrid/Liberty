#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d830);
CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_41c770);
CLANG_FORWARD_PROC_SYMBOL(public_443b60);
CLANG_FORWARD_PROC_SYMBOL(public_444290);
CLANG_FORWARD_PROC_SYMBOL(public_445340);
CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_456300);
CLANG_FORWARD_PROC_SYMBOL(public_4568d0);
CLANG_FORWARD_PROC_SYMBOL(public_555db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b97fc);

#define public_444345 _public_444345
#define public_444364 _public_444364
#define public_444383 _public_444383
#define public_4443a0 _public_4443a0
#define public_4443b5 _public_4443b5
#define public_444417 _public_444417
#define public_444436 _public_444436
#define public_444451 _public_444451
#define public_444468 _public_444468
#define public_444488 _public_444488
#define public_4444a0 _public_4444a0
#define public_4444c3 _public_4444c3
#define public_44452a _public_44452a
#define public_444570 _public_444570
#define public_4445b0 _public_4445b0
#define public_4445c3 _public_4445c3
#define public_4445c7 _public_4445c7
#define public_44461d _public_44461d
#define public_444629 _public_444629
#define public_444672 _public_444672
#define public_44467b _public_44467b
#define public_4446fd _public_4446fd
#define public_4446ff _public_4446ff
#define public_444727 _public_444727
#define public_444750 _public_444750
#define public_444797 _public_444797
#define public_444799 _public_444799
#define public_4447d8 _public_4447d8
#define public_4447e2 _public_4447e2
#define public_4447fd _public_4447fd
#define public_44480b _public_44480b
#define public_444846 _public_444846
#define public_444878 _public_444878
#define public_4448b9 _public_4448b9
#define public_4448cd _public_4448cd
#define public_444919 _public_444919

PROC_DECLARE(0x444290, internal_444290, public_444290);
extern "C" NAKED register_t __cdecl internal_444290()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b97fc @0x444298*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b97fc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c60f8]
        mov edi, dword ptr ss : [esp+0x8C]
        push edi
        lea ecx, ds:[esi+0x154]
        call dword ptr ds : [public_5c60ec]
        mov eax, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x1B8], eax
        mov ecx, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x1BC], ecx
        mov ecx, dword ptr ds : [esi+0x170]
        mov ebp, 1
        cmp ecx, ebp
        sete dl
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr ds : [esi+0x3AD], dl
        mov dword ptr ds : [esi+0x300], ebx
        je public_4443b5
        lea ecx, ss:[esp+0x58]
        call dword ptr ds : [public_5c61d4]
        mov eax, dword ptr ds : [esi+0x1B8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x88], ebx
        call dword ptr ds : [public_5c61d0]
        mov edx, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5cba10 @0x44432e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cba10
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_444345
        mov dword ptr ds : [esi+0x300], ebp
        jmp public_4443a0
        public_444345 : nop
        mov eax, dword ptr ss : [esp+0x60]
/*FIXUP push offset public_5cba08 @0x444349*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cba08
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_444364
        mov dword ptr ds : [esi+0x300], 2
        jmp public_4443a0
        public_444364 : nop
        mov ecx, dword ptr ss : [esp+0x60]
/*FIXUP push offset public_5cb9fc @0x444368*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb9fc
        push ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_444383
        mov dword ptr ds : [esi+0x300], 3
        jmp public_4443a0
        public_444383 : nop
        mov edx, dword ptr ss : [esp+0x60]
/*FIXUP push offset public_5cb9f0 @0x444387*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb9f0
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_4443a0
        mov dword ptr ds : [esi+0x300], 4
        public_4443a0 : nop
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        call dword ptr ds : [public_5c61cc]
        public_4443b5 : nop
        call dword ptr ds : [public_5c60e4]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x178]
        push eax
        push ebp
        mov ebp, dword ptr ds : [public_5c619c]
        mov ecx, edi
        call ebp
        mov ecx, dword ptr ds : [esi+0x17C]
        push ecx
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x34], eax
        call ebp
        mov edx, dword ptr ds : [esi+0x180]
        push edx
        push 2
        mov ecx, edi
        mov dword ptr ss : [esp+0x30], eax
        call ebp
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [esi+0x184]
        push eax
        push 3
        mov ecx, edi
        call ebp
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [esi+0x1A8]
        xor ebp, ebp
        cmp eax, ebx
        jle public_444436
        lea ebx, ds:[esi+0x188]
        public_444417 : nop
        mov ecx, dword ptr ds : [ebx]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6198]
        mov dword ptr ss : [esp+ebp*4+0x58], eax
        mov eax, dword ptr ds : [esi+0x1A8]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jl public_444417
        xor ebx, ebx
        public_444436 : nop
        mov al, byte ptr ds : [esi+0x3AD]
        test al, al
        jne public_444451
        lea edx, ss:[esp+0x28]
        lea edi, ds:[esi+0x30]
        push edx
        mov ecx, edi
        call public_443b60
        jmp public_4444c3
        public_444451 : nop
        cmp dword ptr ds : [public_668948], ebx
        jne public_444468
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, offset public_668948
        call public_443b60
        public_444468 : nop
        mov ecx, dword ptr ds : [public_668948]
        lea edi, ds:[esi+0x30]
        mov edx, offset public_668948
        mov dword ptr ds : [edi], ecx
        mov ebp, offset public_66894c
        lea eax, ds:[edi+0x14]
        lea ecx, ds:[edi+0x114]
        sub edx, edi
        public_444488 : nop
        mov ebx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx-0x110], ebx
        mov ebx, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x18], 0x10
        mov edi, edi
        public_4444a0 : nop
        mov ebx, dword ptr ds : [edx+eax]
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ss : [esp+0x18]
        add eax, 4
        dec ebx
        mov dword ptr ss : [esp+0x18], ebx
        jne public_4444a0
        add ebp, 4
        add ecx, 4
        cmp ebp, offset public_66895c
        jl public_444488
        xor ebx, ebx
        public_4444c3 : nop
        mov edx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [edi]
        lea ebp, ss:[esp+0x14]
        push ebp
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x48]
        cmp dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_44452a
        mov ebp, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        add ebp, 0x70
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x4C]
        mov ebp, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ss : [ebp+0x74]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [edi]
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add ebp, 0x7C
        push ebp
        push edi
        push eax
        call dword ptr ds : [ecx+0x50]
        public_44452a : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+0x304]
        push edx
        call dword ptr ds : [public_5c61c8]
        call dword ptr ds : [public_5c60f8]
        mov ecx, dword ptr ds : [esi+0x1A8]
        xor eax, eax
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], eax
        jle public_444750
        lea ecx, ds:[esi+0x1F0]
        lea edx, ds:[esi+0x1D0]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], edx
        lea esp, ss:[esp]
        public_444570 : nop
        mov ebp, dword ptr ss : [esp+eax*4+0x58]
        cmp ebp, ebx
        je public_444727
        cmp dword ptr ss : [ebp+0xC], ebx
        je public_444727
        mov al, byte ptr ss : [esp+0x8C]
        mov byte ptr ss : [esp+0x48], al
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov eax, dword ptr ss : [ebp+0x38]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x84], 1
        je public_44461d
        public_4445b0 : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        jne public_4445c3
        mov ecx, dword ptr ds : [public_5c7078]
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_4445c7
        public_4445c3 : nop
        mov dword ptr ss : [esp+0x1C], eax
        public_4445c7 : nop
        mov ebx, dword ptr ds : [public_5c69a0]
        lea ecx, ss:[esp+0x20]
        call ebx
        mov edx, dword ptr ss : [esp+0x1C]
        push 1
        push edx
        call dword ptr ds : [public_5c6028]
        add esp, 8
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        call ebx
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x28]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_40d830
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [ebp+0x38]
        xor ebx, ebx
        cmp edi, eax
        jne public_4445b0
        public_44461d : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        jne public_444629
        mov eax, dword ptr ds : [public_5c7078]
        public_444629 : nop
        push ebx
        lea ecx, ds:[esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [public_5c6dd8]
        lea edx, ss:[esp+0x50]
        push edx
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push edx
        push eax
        call public_41c540
        mov edi, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0x1C
        push eax
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_5c61c8]
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        je public_4446ff
        mov eax, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [public_5c7078]
        cmp eax, ebx
        mov ebx, edi
        je public_444672
        mov ebx, eax
        public_444672 : nop
        mov ebp, dword ptr ss : [ebp+0x18]
        test ebp, ebp
        je public_44467b
        mov edi, ebp
        public_44467b : nop
        push ebx
        lea ecx, ds:[esi+0x304]
        call dword ptr ds : [public_5c61c4]
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov ebp, eax
        call dword ptr ds : [public_5c61c4]
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_4446fd
        cmp eax, 0xFFFFFFFF
        je public_4446fd
        mov dword ptr ss : [esp+0x38], edi
        push edi
        mov edi, dword ptr ds : [public_5c6d14]
        call edi
        push ebx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ebx
        call edi
        mov edi, dword ptr ds : [public_5c61c0]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [public_5c6d5c]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call edi
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        push ebp
        lea ecx, ds:[esi+0x304]
        call edi
        mov edx, dword ptr ds : [public_5c6d5c]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [ebx+0x18]
        public_4446fd : nop
        xor ebx, ebx
        public_4446ff : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 4
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        public_444727 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x1A8]
        inc eax
        add edi, 4
        add edx, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x10], edx
        jl public_444570
        public_444750 : nop
        mov edx, dword ptr ds : [esi+0x1A8]
        mov dword ptr ds : [esi+0x2F0], edx
        call dword ptr ds : [public_5c60f8]
        push 0x28
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x84], 2
        je public_444797
        mov ecx, edi
        call public_555db0
        mov dword ptr ds : [edi], offset public_5cb9ec
        mov dword ptr ds : [edi+0x20], ebx
        mov byte ptr ds : [edi+0x24], 0
        jmp public_444799
        public_444797 : nop
        xor edi, edi
        public_444799 : nop
        mov dword ptr ds : [esi+0x2F4], edi
        mov dword ptr ds : [edi+0x20], esi
        mov eax, dword ptr ds : [esi+0x2F4]
        or ecx, 0xFFFFFFFF
        mov byte ptr ds : [eax+0xC], 1
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax+8], ebx
        cmp dword ptr ds : [esi+0x1B0], ecx
        mov dword ptr ss : [esp+0x84], ecx
        jne public_4447d8
        cmp dword ptr ds : [esi+0x300], ebx
        jne public_4447d8
        mov eax, dword ptr ds : [esi+0x2F4]
        mov byte ptr ds : [eax+0xC], 0
        jmp public_4447e2
        public_4447d8 : nop
        mov ecx, dword ptr ds : [esi+0x2F4]
        mov byte ptr ds : [ecx+0xC], 1
        public_4447e2 : nop
        mov ecx, dword ptr ds : [esi+0x160]
        cmp ecx, ebx
        lea eax, ds:[esi+0x2FC]
        mov dword ptr ds : [eax], ebx
        je public_4447fd
        push ecx
        push eax
        call public_41c770
        jmp public_44480b
        public_4447fd : nop
        mov edx, dword ptr ds : [esi+0x168]
        push edx
        push eax
        call dword ptr ds : [public_5c6080]
        public_44480b : nop
        mov eax, dword ptr ss : [esp+0x94]
        mov edi, dword ptr ds : [esi+0x1AC]
        mov byte ptr ds : [esi+4], 1
        mov cl, byte ptr ds : [eax+0x6C]
        add esp, 8
        cmp edi, ebx
        mov byte ptr ss : [esp+0x8C], cl
        je public_444846
        mov eax, dword ptr ds : [esi+0x364]
        cmp eax, ebx
        je public_444846
        push eax
        push edi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4448b9
        public_444846 : nop
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_444878
        push eax
        mov ecx, offset public_66d2d0
        call public_4568d0
        lea edx, ds:[esi+0x364]
        push edx
        mov dword ptr ds : [esi+0x360], ebx
        mov byte ptr ds : [esi+0x368], 0
        call dword ptr ds : [public_5c60c8]
        add esp, 4
        public_444878 : nop
        lea eax, ds:[esi+0x364]
        push edi
        push eax
        call dword ptr ds : [public_5c60cc]
        mov ecx, dword ptr ss : [esp+0x94]
        add esp, 8
        push ecx
        push edi
        mov ecx, esi
        call public_445340
        cmp dword ptr ds : [esi+0x36C], ebx
        mov dword ptr ds : [esi+0x360], eax
        jne public_4448b9
        cmp eax, ebx
        je public_4448b9
        mov ecx, eax
        call public_454f80
        mov byte ptr ds : [esi+0x368], 1
        public_4448b9 : nop
        mov ecx, dword ptr ds : [esi+0x360]
        cmp ecx, ebx
        je public_4448cd
        push 0x3F800000
        call public_456300
        public_4448cd : nop
        call dword ptr ds : [public_5c71dc]
        mov ecx, dword ptr ds : [esi+0x360]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x8C], eax
        fild dword ptr ss : [esp+0x8C]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ss : [esp+0x8C]
        je public_444919
        fld dword ptr ss : [esp+0x8C]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_444919
        mov edx, dword ptr ss : [esp+0x8C]
        push edx
        call public_456300
        public_444919 : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        pop edi
        mov dword ptr ds : [esi+0x18], ebx
        mov byte ptr ds : [esi+0x15], 0
        mov byte ptr ds : [esi+0x16], 0
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x444290)
    }
}

#undef public_444345
#undef public_444364
#undef public_444383
#undef public_4443a0
#undef public_4443b5
#undef public_444417
#undef public_444436
#undef public_444451
#undef public_444468
#undef public_444488
#undef public_4444a0
#undef public_4444c3
#undef public_44452a
#undef public_444570
#undef public_4445b0
#undef public_4445c3
#undef public_4445c7
#undef public_44461d
#undef public_444629
#undef public_444672
#undef public_44467b
#undef public_4446fd
#undef public_4446ff
#undef public_444727
#undef public_444750
#undef public_444797
#undef public_444799
#undef public_4447d8
#undef public_4447e2
#undef public_4447fd
#undef public_44480b
#undef public_444846
#undef public_444878
#undef public_4448b9
#undef public_4448cd
#undef public_444919
