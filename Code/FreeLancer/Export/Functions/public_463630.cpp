#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_463630);
CLANG_FORWARD_PROC_SYMBOL(public_464d50);
CLANG_FORWARD_PROC_SYMBOL(public_4683b0);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_468bf0);
CLANG_FORWARD_PROC_SYMBOL(public_46baf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bb00);
CLANG_FORWARD_PROC_SYMBOL(public_46bba0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_46d170);
CLANG_FORWARD_PROC_SYMBOL(public_46d430);
CLANG_FORWARD_PROC_SYMBOL(public_46d560);
CLANG_FORWARD_PROC_SYMBOL(public_46d600);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4d8e20);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bafc3);

#define public_463683 _public_463683
#define public_4636af _public_4636af
#define public_4636c2 _public_4636c2
#define public_4636c7 _public_4636c7
#define public_4636e1 _public_4636e1
#define public_463706 _public_463706
#define public_463721 _public_463721
#define public_46373b _public_46373b
#define public_463845 _public_463845
#define public_46386d _public_46386d
#define public_4638c5 _public_4638c5
#define public_4638db _public_4638db
#define public_4638dd _public_4638dd
#define public_4638e8 _public_4638e8
#define public_463a86 _public_463a86
#define public_463aae _public_463aae
#define public_463ad3 _public_463ad3
#define public_463af7 _public_463af7
#define public_463b14 _public_463b14
#define public_463c70 _public_463c70
#define public_463c98 _public_463c98
#define public_463cd7 _public_463cd7
#define public_463ce7 _public_463ce7
#define public_463cf3 _public_463cf3
#define public_463d0d _public_463d0d
#define public_463e63 _public_463e63
#define public_463e8b _public_463e8b
#define public_463ef4 _public_463ef4
#define public_463f76 _public_463f76
#define public_4640b1 _public_4640b1
#define public_4640d9 _public_4640d9
#define public_464166 _public_464166
#define public_464280 _public_464280
#define public_4642a8 _public_4642a8
#define public_46432f _public_46432f
#define public_4643a8 _public_4643a8
#define public_4644c0 _public_4644c0
#define public_4644e8 _public_4644e8
#define public_464566 _public_464566
#define public_464673 _public_464673
#define public_46469b _public_46469b
#define public_46474f _public_46474f
#define public_4647b5 _public_4647b5
#define public_4647dd _public_4647dd
#define public_464891 _public_464891
#define public_4648f7 _public_4648f7
#define public_46491f _public_46491f
#define public_46498c _public_46498c
#define public_4649aa _public_4649aa
#define public_464a74 _public_464a74
#define public_464ae0 _public_464ae0
#define public_464b04 _public_464b04
#define public_464b3b _public_464b3b
#define public_464b5b _public_464b5b
#define public_464bb0 _public_464bb0
#define public_464c75 _public_464c75
#define public_464c83 _public_464c83
#define public_464cd5 _public_464cd5

PROC_DECLARE(0x463630, internal_463630, public_463630);
extern "C" NAKED register_t __cdecl internal_463630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bafc3 @0x463638*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bafc3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x1B8
        cmp eax, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        je public_463683
/*FIXUP push offset public_5cfa88 @0x46365a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfa88
        push 0x8DF
/*FIXUP push offset public_5cf0b0 @0x463664*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf0b0
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x46366e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_464cd5
        public_463683 : nop
        mov al, byte ptr ds : [public_66d44c]
        test al, 1
        jne public_4636af
        mov dl, al
        or dl, 1
        mov ecx, offset public_66d440
        mov byte ptr ds : [public_66d44c], dl
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_468bf0 @0x4636a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_468bf0
        call public_5b7e6c
        add esp, 4
        public_4636af : nop
        mov ecx, dword ptr ds : [public_66da60]
        test ecx, ecx
        je public_4636c2
        call public_4683b0
        mov esi, eax
        jmp public_4636c7
        public_4636c2 : nop
        mov esi, offset public_66d440
        public_4636c7 : nop
        mov ebp, dword ptr ss : [esp+0x1D8]
        mov eax, dword ptr ss : [ebp]
        mov ebx, 0x14
        cmp eax, ebx
        ja public_463706
/*FIXUP jmp dword ptr ds : [eax*4+public_464cf0] @0x4636da*/
  JMPTB cmp eax, 0
  JMPTB je public_4636e1
  JMPTB cmp eax, 1
  JMPTB je public_4636e1
  JMPTB cmp eax, 2
  JMPTB je public_4636e1
  JMPTB cmp eax, 3
  JMPTB je public_46373b
  JMPTB cmp eax, 4
  JMPTB je public_46386d
  JMPTB cmp eax, 5
  JMPTB je public_463aae
  JMPTB cmp eax, 6
  JMPTB je public_463c98
  JMPTB cmp eax, 7
  JMPTB je public_463e8b
  JMPTB cmp eax, 8
  JMPTB je public_463f76
  JMPTB cmp eax, 9
  JMPTB je public_4642a8
  JMPTB cmp eax, 0xA
  JMPTB je public_46432f
  JMPTB cmp eax, 0xB
  JMPTB je public_4643a8
  JMPTB cmp eax, 0xC
  JMPTB je public_4644e8
  JMPTB cmp eax, 0xD
  JMPTB je public_464566
  JMPTB cmp eax, 0xE
  JMPTB je public_46469b
  JMPTB cmp eax, 0xF
  JMPTB je public_4640d9
  JMPTB cmp eax, 0x10
  JMPTB je public_4647dd
  JMPTB cmp eax, 0x11
  JMPTB je public_463706
  JMPTB cmp eax, 0x12
  JMPTB je public_46491f
  JMPTB cmp eax, 0x13
  JMPTB je public_463706
  JMPTB cmp eax, 0x14
  JMPTB je public_4649aa
  JMPTB int 3
        public_4636e1 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cfa50 @0x4636e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfa50
        push 0x8EF
/*FIXUP push offset public_5cf0b0 @0x4636f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf0b0
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x4636fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_463706 : nop
        mov ebp, dword ptr ds : [public_66da60]
        test ebp, ebp
        je public_464cd5
        mov eax, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_464cd5
        public_463721 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x24], ecx
        je public_464c83
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_463721
        jmp public_464cd5
        public_46373b : nop
        mov ebp, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x18]
        mov word ptr ss : [esp+0x18], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x22], 0
        mov byte ptr ss : [esp+0x23], 0
        call public_46cd50
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+4]
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x3C0
        mov dword ptr ss : [esp+0xBC], edi
        mov dword ptr ss : [esp+0xB8], eax
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0x1D0], 0
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x88]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 1
        call public_46c800
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x1D0], 0
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea eax, ss:[esp+0x15C]
        push eax
        mov ecx, ebp
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x168]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_46bba0
        lea edx, ss:[esp+0x1A8]
        push edx
        mov ecx, esi
        call public_46baf0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        je public_464b5b
        public_463845 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c800
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], eax
        jne public_463845
        jmp public_464b5b
        public_46386d : nop
        lea ecx, ss:[esp+0x38]
        call public_464d50
        mov eax, dword ptr ss : [ebp+4]
        xor ebx, ebx
        mov word ptr ss : [esp+0x18], ax
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x38], ecx
        call dword ptr ds : [public_5c70f0]
        mov ecx, eax
        mov eax, 0x10624DD3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        imul edx, 0x3E8
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [edi+0x358]
        mov eax, dword ptr ds : [edx]
        xor cl, cl
        public_4638c5 : nop
        cmp eax, edx
        je public_4638e8
        mov ecx, dword ptr ss : [esp+0x38]
        cmp dword ptr ds : [eax+0xC], ecx
        jne public_4638db
        cmp dword ptr ds : [eax+0x10], ebx
        jne public_4638db
        mov cl, 1
        jmp public_4638dd
        public_4638db : nop
        xor cl, cl
        public_4638dd : nop
        test cl, cl
        mov eax, dword ptr ds : [eax]
        je public_4638c5
        jmp public_463706
        public_4638e8 : nop
        test cl, cl
        jne public_463706
        mov eax, dword ptr ds : [edi+0x358]
        lea ecx, ds:[edi+0x354]
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_46d600
        mov ecx, edi
        call public_462e30
        mov ebp, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x18]
        mov word ptr ss : [esp+0x18], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x22], 0
        mov byte ptr ss : [esp+0x23], 0
        call public_46cd50
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+4]
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        push 0x3EA8
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 2
        mov ecx, eax
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x74]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 3
        call public_46c800
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x36C
        mov dword ptr ss : [esp+0xA4], edi
        mov dword ptr ss : [esp+0xA0], eax
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x1D0], 4
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x7C]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 5
        call public_46c800
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x1D0], 4
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea eax, ss:[esp+0x198]
        push eax
        mov ecx, ebp
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x178]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_46bba0
        lea edx, ss:[esp+0x138]
        push edx
        mov ecx, esi
        call public_46baf0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        je public_464b5b
        public_463a86 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c800
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], eax
        jne public_463a86
        jmp public_464b5b
        public_463aae : nop
        lea ecx, ss:[esp+0x18]
        lea ebx, ds:[edi+0x354]
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x27], 0
        call public_53e430
        mov ecx, dword ptr ds : [edi+0x358]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        je public_463b14
        public_463ad3 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_463af7
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ds : [public_66da48]
        je public_463af7
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_516f70
        mov byte ptr ss : [esp+0x23], 1
        public_463af7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x358]
        mov dword ptr ss : [esp+0x18], eax
        jne public_463ad3
        mov al, byte ptr ss : [esp+0x23]
        test al, al
        je public_463b14
        mov ecx, edi
        call public_462e30
        public_463b14 : nop
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ds:[edi+0x340]
        mov word ptr ss : [esp+0x74], ax
        mov byte ptr ss : [esp+0x76], 0
        mov byte ptr ss : [esp+0x77], 0
        call public_46d170
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x1C0]
        call public_46d660
        mov ecx, edi
        call public_462e30
        mov ebp, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x18]
        mov word ptr ss : [esp+0x18], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x22], 0
        mov byte ptr ss : [esp+0x23], 0
        call public_46cd50
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+4]
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x3CC
        mov dword ptr ss : [esp+0xCC], edi
        mov dword ptr ss : [esp+0xC8], eax
        mov ebx, 6
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x84]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 7
        call public_46c800
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea eax, ss:[esp+0x13C]
        push eax
        mov ecx, ebp
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x144]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_46bba0
        lea edx, ss:[esp+0x14C]
        push edx
        mov ecx, esi
        call public_46baf0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        je public_464b5b
        lea ebx, ds:[ebx]
        public_463c70 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c800
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], eax
        jne public_463c70
        jmp public_464b5b
        public_463c98 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov word ptr ss : [esp+0x18], ax
        mov eax, dword ptr ds : [public_66da48]
        mov byte ptr ss : [esp+0x1A], 0
        mov byte ptr ss : [esp+0x1B], 0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_463d0d
        lea edx, ss:[esp+0x14]
        lea ebx, ds:[edi+0x354]
        push edx
        mov ecx, ebx
        call public_53e430
        mov ecx, dword ptr ds : [edi+0x358]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        je public_463d0d
        public_463cd7 : nop
        mov edx, dword ptr ds : [eax+0x10]
        test edx, edx
        jne public_463ce7
        mov edx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [eax+0xC], edx
        je public_463cf3
        public_463ce7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_463cd7
        jmp public_463d0d
        public_463cf3 : nop
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_516f70
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, edi
        call public_462e30
        public_463d0d : nop
        mov eax, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x58]
        mov word ptr ss : [esp+0x58], ax
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ds:[edi+0x340]
        mov byte ptr ss : [esp+0x62], 0
        mov byte ptr ss : [esp+0x63], 0
        call public_46d170
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ss:[esp+0x1C8]
        call public_46d660
        mov ecx, edi
        call public_462e30
        mov ebp, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x14]
        mov word ptr ss : [esp+0x14], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1E], 0
        mov byte ptr ss : [esp+0x1F], 0
        call public_46cd50
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+4]
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x3D8
        mov dword ptr ss : [esp+0x118], edi
        mov dword ptr ss : [esp+0x114], eax
        lea ecx, ss:[esp+0x114]
        mov dword ptr ss : [esp+0x1D0], 8
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x8C], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 9
        call public_46c800
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x1D0], 8
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x114]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea ecx, ss:[esp+0x154]
        push ecx
        mov ecx, ebp
        call public_46baf0
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax]
        lea edx, ss:[esp+0x134]
        push edx
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x18]
        call public_46bba0
        lea eax, ss:[esp+0x164]
        push eax
        mov ecx, esi
        call public_46baf0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_464b5b
        public_463e63 : nop
        mov edx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jne public_463e63
        jmp public_464b5b
        public_463e8b : nop
        lea ecx, ds:[edi+0x340]
        call public_46d560
        mov ecx, edi
        call public_462e30
        mov eax, dword ptr ds : [public_674a58]
        test eax, eax
        mov ebx, 0xA
        je public_463ef4
        call public_54baf0
        test eax, eax
        je public_463ef4
        add eax, 0xC
        test eax, eax
        je public_463ef4
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_463ef4
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_463ef4
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_463ef4
        cmp dword ptr ds : [eax+0xC0], ebx
        jne public_463ef4
        mov ecx, dword ptr ds : [public_674a58]
        push 0
        push 0x13
        call public_4d8e20
        public_463ef4 : nop
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x3E4
        mov dword ptr ss : [esp+0xDC], edi
        mov dword ptr ss : [esp+0xD8], eax
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x94], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x94]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0xB
        call public_46c800
        lea ecx, ss:[esp+0x94]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        jmp public_464b5b
        public_463f76 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov word ptr ss : [esp+0x44], ax
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ds:[edi+0x340]
        mov byte ptr ss : [esp+0x4A], 0
        mov byte ptr ss : [esp+0x4B], 0
        call public_46d430
        mov ecx, edi
        call public_462e30
        mov ebp, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x14]
        mov word ptr ss : [esp+0x14], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1E], 0
        mov byte ptr ss : [esp+0x1F], 0
        call public_46cd50
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+4]
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x3F0
        mov dword ptr ss : [esp+0x108], edi
        mov dword ptr ss : [esp+0x104], eax
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x1D0], 0xC
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x9C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x9C]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0xD
        call public_46c800
        lea ecx, ss:[esp+0x9C]
        mov byte ptr ss : [esp+0x1D0], 0xC
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea eax, ss:[esp+0x16C]
        push eax
        mov ecx, ebp
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x174]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x18]
        call public_46bba0
        lea edx, ss:[esp+0x17C]
        push edx
        mov ecx, esi
        call public_46baf0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        je public_464b5b
        public_4640b1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c800
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jne public_4640b1
        jmp public_464b5b
        public_4640d9 : nop
        mov ebp, dword ptr ss : [ebp+4]
        cmp ebp, dword ptr ds : [public_673344]
        jne public_464166
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x3FC
        mov dword ptr ss : [esp+0xEC], edi
        mov dword ptr ss : [esp+0xE8], eax
        mov ebx, 0xE
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x78]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0xF
        call public_46c800
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        jmp public_464b5b
        public_464166 : nop
        lea eax, ss:[esp+0x4C]
        mov word ptr ss : [esp+0x4C], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x56], 0
        mov byte ptr ss : [esp+0x57], 0
        call public_46cd50
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x408
        mov dword ptr ss : [esp+0xAC], edi
        mov dword ptr ss : [esp+0xA8], eax
        mov ebx, 0x10
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x98], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x98]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x11
        call public_46c800
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea ecx, ss:[esp+0x184]
        push ecx
        mov ecx, ebp
        call public_46baf0
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18C]
        push edx
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x18]
        call public_46bba0
        lea eax, ss:[esp+0x194]
        push eax
        mov ecx, esi
        call public_46baf0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_464b5b
        lea esp, ss:[esp]
        public_464280 : nop
        mov edx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jne public_464280
        jmp public_464b5b
        public_4642a8 : nop
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x414
        mov dword ptr ss : [esp+0xB4], edi
        mov dword ptr ss : [esp+0xB0], eax
        mov ebx, 0x12
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x80]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x13
        call public_46c800
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        jmp public_464b5b
        public_46432f : nop
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x420
        mov dword ptr ss : [esp+0xC4], edi
        mov dword ptr ss : [esp+0xC0], eax
        lea ecx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x70]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x15
        call public_46c800
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        jmp public_464b5b
        public_4643a8 : nop
        mov ebp, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x54]
        mov word ptr ss : [esp+0x54], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x5E], 0
        mov byte ptr ss : [esp+0x5F], 0
        call public_46cd50
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x42C
        mov dword ptr ss : [esp+0xD4], edi
        mov dword ptr ss : [esp+0xD0], eax
        mov ebx, 0x16
        lea ecx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x90]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x17
        call public_46c800
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea ecx, ss:[esp+0x19C]
        push ecx
        mov ecx, ebp
        call public_46baf0
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1A4]
        push edx
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x18]
        call public_46bba0
        lea eax, ss:[esp+0x1AC]
        push eax
        mov ecx, esi
        call public_46baf0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_464b5b
        mov edi, edi
        public_4644c0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jne public_4644c0
        jmp public_464b5b
        public_4644e8 : nop
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x438
        mov dword ptr ss : [esp+0xE4], edi
        mov dword ptr ss : [esp+0xE0], eax
        mov ebx, 0x18
        lea ecx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x19
        call public_46c800
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        jmp public_464b5b
        public_464566 : nop
        mov ebp, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x5C]
        mov word ptr ss : [esp+0x5C], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x66], 0
        mov byte ptr ss : [esp+0x67], 0
        call public_46cd50
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x444
        mov dword ptr ss : [esp+0xF4], edi
        mov dword ptr ss : [esp+0xF0], eax
        mov ebx, 0x1A
        lea ecx, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x1B
        call public_46c800
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x1D0], bl
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea eax, ss:[esp+0x1B4]
        push eax
        mov ecx, ebp
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x140]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x18]
        call public_46bba0
        lea edx, ss:[esp+0x180]
        push edx
        mov ecx, esi
        call public_46baf0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        je public_464b5b
        public_464673 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c800
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jne public_464673
        jmp public_464b5b
        public_46469b : nop
        mov ebp, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x64]
        mov word ptr ss : [esp+0x64], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x6E], 0
        mov byte ptr ss : [esp+0x6F], 0
        call public_46cd50
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x450
        mov dword ptr ss : [esp+0x100], edi
        mov dword ptr ss : [esp+0xFC], eax
        mov ebx, 0x1C
        lea ecx, ss:[esp+0xFC]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x1D
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x40]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1D0], bl
        je public_46474f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], 0
        public_46474f : nop
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xFC]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea ecx, ss:[esp+0x148]
        push ecx
        mov ecx, ebp
        call public_46baf0
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1A0]
        push edx
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x18]
        call public_46bba0
        lea eax, ss:[esp+0x150]
        push eax
        mov ecx, esi
        call public_46baf0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_464b5b
        public_4647b5 : nop
        mov edx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jne public_4647b5
        jmp public_464b5b
        public_4647dd : nop
        mov ebp, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x48]
        mov word ptr ss : [esp+0x48], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x52], 0
        mov byte ptr ss : [esp+0x53], 0
        call public_46cd50
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x45C
        mov dword ptr ss : [esp+0x110], edi
        mov dword ptr ss : [esp+0x10C], eax
        mov ebx, 0x1E
        lea ecx, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x68]
        push ecx
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x1F
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x68]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1D0], bl
        je public_464891
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x68], 0
        public_464891 : nop
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea ecx, ss:[esp+0x188]
        push ecx
        mov ecx, ebp
        call public_46baf0
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax]
        lea edx, ss:[esp+0x158]
        push edx
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x18]
        call public_46bba0
        lea eax, ss:[esp+0x1B0]
        push eax
        mov ecx, esi
        call public_46baf0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_464b5b
        public_4648f7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jne public_4648f7
        jmp public_464b5b
        public_46491f : nop
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x468
        mov dword ptr ss : [esp+0x120], edi
        mov dword ptr ss : [esp+0x11C], eax
        mov ebx, 0x20
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1DC], 0x21
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x50]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1D0], bl
        je public_46498c
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x50], 0
        public_46498c : nop
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        jmp public_464b5b
        public_4649aa : nop
        mov ebp, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x60]
        mov word ptr ss : [esp+0x60], bp
        mov ebp, dword ptr ds : [public_66da7c]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x6A], 0
        mov byte ptr ss : [esp+0x6B], 0
        call public_46cd50
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_463706
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        je public_463706
        mov eax, dword ptr ds : [public_5c62cc]
        add edi, 0x474
        mov dword ptr ss : [esp+0x130], edi
        mov dword ptr ss : [esp+0x12C], eax
        mov ebx, 0x22
        lea ecx, ss:[esp+0x12C]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        mov edi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+4]
        push edx
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x1D8], 0x23
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x28]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1D0], bl
        je public_464a74
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x28], 0
        public_464a74 : nop
        mov edi, dword ptr ds : [public_5c62c8]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x12C]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea eax, ss:[esp+0x160]
        push eax
        mov ecx, ebp
        call public_46baf0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x190]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, ebp
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_46bba0
        lea eax, ss:[esp+0xF8]
        push eax
        mov ecx, esi
        call public_46baf0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        cmp eax, dword ptr ss : [esp+0x10]
        je public_464b5b
        mov edi, edi
        public_464ae0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [edx+4]
        add eax, 8
        push 0xC
        mov dword ptr ss : [esp+0x20], eax
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ecx
        jne public_464b04
        mov ebp, eax
        public_464b04 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea ebp, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x34], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x1D0], 0x24
        je public_464b3b
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp], eax
        public_464b3b : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        inc edx
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1D0], ebx
        mov dword ptr ss : [esp+0x18], eax
        jne public_464ae0
        public_464b5b : nop
        mov ebp, dword ptr ds : [public_66da60]
        test ebp, ebp
        je public_464cd5
        mov ecx, dword ptr ss : [ebp+0x20]
        mov esi, ebp
        add ebp, 0x1C
        lea edx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], esi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x100]
        push eax
        mov ecx, ebp
        call public_46c860
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_464c75
        lea esp, ss:[esp]
        public_464bb0 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c62e4]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x1D0], 0x25
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1D4], 0x26
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1D0], 0x25
        call public_45eeb0
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x1D0], ebx
        call edi
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c62e0]
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1D0], 0x27
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1D4], 0x28
        call public_46bb00
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x1D0], 0x27
        call public_45eeb0
        mov esi, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1D0], ebx
        call dword ptr ds : [public_5c62d4]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_464bb0
        public_464c75 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        inc dword ptr ds : [ecx+0x18]
        call public_4684e0
        jmp public_464cd5
        public_464c83 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        mov esi, ecx
        call public_46c860
        lea ecx, ss:[ebp+0xC]
        lea edx, ss:[esp+0x24]
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        lea eax, ss:[esp+0x178]
        push eax
        call public_5947a0
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [eax+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+8], eax
        public_464cd5 : nop
        mov ecx, dword ptr ss : [esp+0x1C8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C4
        ret 8
        UNREACHABLE_TRAP(0x463630)
        ASM_EXPORT_ENTRY_SINGLE(0x4649aa, public_4649aa)
    }
}

#undef public_463683
#undef public_4636af
#undef public_4636c2
#undef public_4636c7
#undef public_4636e1
#undef public_463706
#undef public_463721
#undef public_46373b
#undef public_463845
#undef public_46386d
#undef public_4638c5
#undef public_4638db
#undef public_4638dd
#undef public_4638e8
#undef public_463a86
#undef public_463aae
#undef public_463ad3
#undef public_463af7
#undef public_463b14
#undef public_463c70
#undef public_463c98
#undef public_463cd7
#undef public_463ce7
#undef public_463cf3
#undef public_463d0d
#undef public_463e63
#undef public_463e8b
#undef public_463ef4
#undef public_463f76
#undef public_4640b1
#undef public_4640d9
#undef public_464166
#undef public_464280
#undef public_4642a8
#undef public_46432f
#undef public_4643a8
#undef public_4644c0
#undef public_4644e8
#undef public_464566
#undef public_464673
#undef public_46469b
#undef public_46474f
#undef public_4647b5
#undef public_4647dd
#undef public_464891
#undef public_4648f7
#undef public_46491f
#undef public_46498c
#undef public_4649aa
#undef public_464a74
#undef public_464ae0
#undef public_464b04
#undef public_464b3b
#undef public_464b5b
#undef public_464bb0
#undef public_464c75
#undef public_464c83
#undef public_464cd5

#pragma init_seg(compiler)
extern "C" void const* const public_4649aa = __AsmFindLabelExport(&internal_463630, 0x4649aa);
