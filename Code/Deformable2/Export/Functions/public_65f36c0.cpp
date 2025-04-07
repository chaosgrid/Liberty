#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1100);
CLANG_FORWARD_PROC_SYMBOL(public_65f1420);
CLANG_FORWARD_PROC_SYMBOL(public_65f1550);
CLANG_FORWARD_PROC_SYMBOL(public_65f26f0);
CLANG_FORWARD_PROC_SYMBOL(public_65f2a30);
CLANG_FORWARD_PROC_SYMBOL(public_65f3540);
CLANG_FORWARD_PROC_SYMBOL(public_65f36c0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3e70);
CLANG_FORWARD_PROC_SYMBOL(public_65f3e80);
CLANG_FORWARD_PROC_SYMBOL(public_65f59d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f5ec0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6290);
CLANG_FORWARD_PROC_SYMBOL(public_65f62d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6620);
CLANG_FORWARD_PROC_SYMBOL(public_65f6720);
CLANG_FORWARD_PROC_SYMBOL(public_65f67f0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f3716 _public_65f3716
#define public_65f3723 _public_65f3723
#define public_65f3727 _public_65f3727
#define public_65f3729 _public_65f3729
#define public_65f3749 _public_65f3749
#define public_65f3773 _public_65f3773
#define public_65f377b _public_65f377b
#define public_65f3783 _public_65f3783
#define public_65f381d _public_65f381d
#define public_65f38a0 _public_65f38a0
#define public_65f38cc _public_65f38cc
#define public_65f38d3 _public_65f38d3
#define public_65f3912 _public_65f3912
#define public_65f392d _public_65f392d
#define public_65f392f _public_65f392f
#define public_65f3961 _public_65f3961
#define public_65f396f _public_65f396f
#define public_65f398a _public_65f398a
#define public_65f39e4 _public_65f39e4
#define public_65f3a0b _public_65f3a0b
#define public_65f3a11 _public_65f3a11
#define public_65f3a22 _public_65f3a22
#define public_65f3a32 _public_65f3a32
#define public_65f3a62 _public_65f3a62
#define public_65f3a90 _public_65f3a90
#define public_65f3aa5 _public_65f3aa5
#define public_65f3ab3 _public_65f3ab3
#define public_65f3b90 _public_65f3b90
#define public_65f3b9e _public_65f3b9e
#define public_65f3bc1 _public_65f3bc1
#define public_65f3bcf _public_65f3bcf
#define public_65f3bde _public_65f3bde
#define public_65f3c26 _public_65f3c26
#define public_65f3c29 _public_65f3c29
#define public_65f3c36 _public_65f3c36
#define public_65f3c4c _public_65f3c4c
#define public_65f3c7a _public_65f3c7a
#define public_65f3cd7 _public_65f3cd7
#define public_65f3d00 _public_65f3d00
#define public_65f3d20 _public_65f3d20
#define public_65f3d53 _public_65f3d53
#define public_65f3d66 _public_65f3d66
#define public_65f3d85 _public_65f3d85
#define public_65f3d99 _public_65f3d99
#define public_65f3dc0 _public_65f3dc0
#define public_65f3de6 _public_65f3de6
#define public_65f3e10 _public_65f3e10
#define public_65f3e14 _public_65f3e14
#define public_65f3e36 _public_65f3e36
#define public_65f3e3a _public_65f3e3a

PROC_DECLARE(0x65f36c0, internal_65f36c0, public_65f36c0);
extern "C" NAKED register_t __cdecl internal_65f36c0()
{
    __asm
    {
        sub esp, 0x474
        mov eax, dword ptr ss : [esp+0x47C]
        mov edx, dword ptr ss : [esp+0x478]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x488]
        mov dword ptr ss : [ebp+0x18], eax
        push esi
        mov dword ptr ss : [ebp+0x1C], ecx
        mov esi, dword ptr ds : [edx]
        mov eax, esi
        imul eax, 0x34
        add eax, 4
        push edi
        push eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [ebp+4], esi
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_65f3727
        lea ebx, ds:[eax+4]
        mov dword ptr ds : [eax], esi
        lea eax, ds:[esi-1]
        test eax, eax
        mov edi, ebx
        jl public_65f3723
        lea esi, ds:[eax+1]
        public_65f3716 : nop
        mov ecx, edi
        call public_65f6720
        add edi, 0x34
        dec esi
        jne public_65f3716
        public_65f3723 : nop
        mov eax, ebx
        jmp public_65f3729
        public_65f3727 : nop
        xor eax, eax
        public_65f3729 : nop
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        jle public_65f3c7a
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x4C], eax
        public_65f3749 : nop
        mov ecx, dword ptr ss : [esp+0x488]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ds : [eax+edx+0xC]
        mov edi, dword ptr ds : [public_6601000]
        add eax, edx
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x24], eax
        je public_65f3773
        call edi
        mov edx, eax
        jmp public_65f377b
        public_65f3773 : nop
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        public_65f377b : nop
        cmp edx, ebp
        jne public_65f3783
        call edi
        mov edx, eax
        public_65f3783 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x9C], offset public_6602040
        mov ecx, 0xB
        lea edi, ss:[esp+0xA0]
        rep stosd
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x9C]
        push ecx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0xB0], 0x80000000
        mov dword ptr ss : [esp+0xB4], 1
        mov dword ptr ss : [esp+0xBC], 3
        mov dword ptr ss : [esp+0xC0], 0x8000080
        mov dword ptr ss : [esp+0xAC], esi
        mov dword ptr ss : [esp+0xA0], 0x34
        mov dword ptr ss : [esp+0xD0], 0xFFFFFFFF
        mov eax, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jge public_65f381d
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_65f3c4c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ebp
        jmp public_65f3c4c
        public_65f381d : nop
        push 0x5C
        push esi
        call dword ptr ds : [public_660102c]
        inc eax
        push 0x104
        push eax
        lea eax, ss:[esp+0x150]
        push eax
        call dword ptr ds : [public_6601028]
        lea ecx, ss:[esp+0x154]
        push 0x2E
        push ecx
        call dword ptr ds : [public_6601050]
        lea edx, ss:[esp+0x15C]
        push edx
/*FIXUP push offset public_66026c4 @0x65f3853*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66026c4
        mov dword ptr ss : [esp+0x80], eax
        mov byte ptr ds : [eax], 0
        mov byte ptr ds : [eax+1], 0
        lea eax, ss:[esp+0x3A8]
        push 0x100
        push eax
        call dword ptr ds : [public_6601034]
        push 0x1E88
        call public_6600bb6
        mov esi, eax
        add esp, 0x30
        cmp esi, ebp
        je public_65f38cc
        mov dword ptr ds : [esi], 0x3F800000
        mov dword ptr ds : [esi+4], ebp
        lea edi, ds:[esi+8]
        mov ebx, 0x96
        lea ecx, ds:[ecx]
        public_65f38a0 : nop
        push ebp
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], 0xFFFFFFFF
        call public_65f3e70
        add edi, 0x34
        dec ebx
        jne public_65f38a0
        mov edi, 1
        mov dword ptr ds : [esi+0x1E80], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x1E84], edi
        jmp public_65f38d3
        public_65f38cc : nop
        xor esi, esi
        mov edi, 1
        public_65f38d3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x388]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], esi
        call public_65f1100
        test al, al
        jne public_65f3912
/*FIXUP push offset public_66026ac @0x65f38ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66026ac
        push 0xB0
/*FIXUP push offset public_6602570 @0x65f38f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602570
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65f3903*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push eax
        mov eax, dword ptr ds : [public_6601008]
        call dword ptr ds : [eax]
        jmp public_65f3961
        public_65f3912 : nop
        push 0x10
        call public_6600bb6
        add esp, 4
        cmp eax, ebp
        je public_65f392d
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], edi
        jmp public_65f392f
        public_65f392d : nop
        xor eax, eax
        public_65f392f : nop
        push esi
        mov ecx, eax
        mov dword ptr ss : [esp+0x54], eax
        call public_65f1550
        test al, al
        jne public_65f398a
        mov edx, dword ptr ds : [public_6601008]
/*FIXUP push offset public_6602694 @0x65f3945*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602694
        push 0xB8
/*FIXUP push offset public_6602570 @0x65f394f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602570
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65f3959*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push eax
        call dword ptr ds : [edx]
        public_65f3961 : nop
        add esp, 0x14
        cmp esi, ebp
        je public_65f396f
        mov ecx, esi
        call public_65f1420
        public_65f396f : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_65f3c4c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ebp
        jmp public_65f3c4c
        public_65f398a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6602688 @0x65f3990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602688
        push eax
        call dword ptr ds : [edx+0x60]
        test eax, eax
        je public_65f3a11
        mov esi, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6602040 @0x65f39a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
/*FIXUP push offset public_660267c @0x65f39a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660267c
        lea ecx, ss:[esp+0x114]
        xor ebp, ebp
        mov ebx, 8
        call public_65f3e80
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10C]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_65f3a0b
        mov edx, dword ptr ds : [esi]
        push ebp
        push edi
        push esi
        call dword ptr ds : [edx+0x28]
        shr eax, 2
        cmp eax, ebx
        jae public_65f39e4
        mov ebx, eax
        public_65f39e4 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ds:[ebx*4]
        push edx
        lea ecx, ss:[esp+0xD8]
        push ecx
        push edi
        push esi
        mov ebp, ebx
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        public_65f3a0b : nop
        mov dword ptr ss : [esp+0x2C], ebp
        jmp public_65f3a22
        public_65f3a11 : nop
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0xCC], 0x3F800000
        mov ebp, edi
        public_65f3a22 : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        cmp ebp, eax
        jle public_65f3a32
        mov ebp, eax
        mov dword ptr ss : [esp+0x2C], ebp
        public_65f3a32 : nop
        test ebp, ebp
        jg public_65f3a62
/*FIXUP push offset public_660266c @0x65f3a36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660266c
        push 0xD7
/*FIXUP push offset public_6602570 @0x65f3a40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602570
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65f3a4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        mov dword ptr ds : [edi], 0
        push eax
        mov eax, dword ptr ds : [public_6601008]
        call dword ptr ds : [eax]
        jmp public_65f3c26
        public_65f3a62 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x244]
        push ecx
/*FIXUP push offset public_6602664 @0x65f3a70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602664
        push eax
        xor ebx, ebx
        xor esi, esi
        call dword ptr ds : [edx+0x48]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_65f3bde
        mov dword ptr ss : [esp+0x54], esi
        lea esp, ss:[esp]
        public_65f3a90 : nop
        test ebx, ebx
        jne public_65f3aa5
        mov edx, dword ptr ds : [edi+0x10]
        and edx, 2
        cmp dl, 2
        je public_65f3b9e
        jmp public_65f3ab3
        public_65f3aa5 : nop
        mov eax, dword ptr ds : [edi+0x10]
        and eax, 1
        cmp al, 1
        je public_65f3bcf
        public_65f3ab3 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x68], offset public_6602040
        mov ecx, 0xB
        lea edi, ss:[esp+0x6C]
        rep stosd
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x270]
        mov dword ptr ss : [esp+0x70], ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x68]
        push ecx
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x7C], 0x80000000
        mov dword ptr ss : [esp+0x80], 1
        mov dword ptr ss : [esp+0x88], 3
        mov dword ptr ss : [esp+0x8C], 0x8000080
        mov dword ptr ss : [esp+0x6C], 0x34
        mov dword ptr ss : [esp+0x9C], ebp
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jl public_65f3b90
        mov eax, dword ptr ss : [esp+0x5C]
        mov edi, dword ptr ss : [esp+0x24]
        mov dl, bl
        add dl, 0x30
        mov byte ptr ds : [eax], dl
        cmp ebx, dword ptr ds : [edi+0x14]
        setb cl
        mov byte ptr ss : [esp+0x58], cl
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        lea eax, ss:[esp+0x144]
        push eax
        push ecx
        push edx
        call public_65f26f0
        add esp, 0x10
        test eax, eax
        je public_65f3b90
        mov edx, dword ptr ss : [esp+ebx*4+0xCC]
        mov dword ptr ss : [esp+esi*4+0xEC], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+eax+8], edx
        add eax, 0xC
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ss : [esp+0x2C]
        inc esi
        cmp esi, eax
        jge public_65f3bc1
        public_65f3b90 : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_65f3b9e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_65f3b9e : nop
        inc ebx
        je public_65f3bcf
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x244]
        push ecx
        push ebp
        push eax
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        je public_65f3bcf
        mov edi, dword ptr ss : [esp+0x24]
        jmp public_65f3a90
        public_65f3bc1 : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_65f3bcf
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_65f3bcf : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x50]
        mov edi, dword ptr ss : [esp+0x24]
        public_65f3bde : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x50]
        push esi
        lea edx, ss:[esp+0xF0]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], esi
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        add ecx, edx
        call public_65f67f0
        test al, al
        jne public_65f3c29
        mov edx, dword ptr ds : [public_6601008]
/*FIXUP push offset public_6602644 @0x65f3c0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602644
        push 0x11F
/*FIXUP push offset public_6602570 @0x65f3c14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602570
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65f3c1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push eax
        call dword ptr ds : [edx]
        public_65f3c26 : nop
        add esp, 0x14
        public_65f3c29 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        test ecx, ecx
        je public_65f3c36
        call public_65f1420
        public_65f3c36 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_65f3c4c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], 0
        public_65f3c4c : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+4]
        inc eax
        add esi, 0x18
        add edx, 0x34
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x4C], esi
        mov dword ptr ss : [esp+0x18], edx
        jl public_65f3749
        public_65f3c7a : nop
        mov dl, byte ptr ss : [esp+0x1F]
        mov al, byte ptr ss : [esp+0x1F]
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x30], dl
        mov byte ptr ss : [esp+0x31], al
        mov byte ptr ss : [esp+0x3C], 0
        call public_65f62d0
        mov eax, dword ptr ds : [public_6603134]
        lea edx, ss:[esp+0x44]
        push edx
        xor esi, esi
/*FIXUP push offset public_6602634 @0x65f3ca4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602634
        mov dword ptr ss : [esp+0x4C], esi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_65f3cd7
/*FIXUP push offset public_66025f4 @0x65f3cb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66025f4
        push 0x2B
/*FIXUP push offset public_6602570 @0x65f3cbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602570
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65f3cc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push eax
        mov eax, dword ptr ds : [public_6601008]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_65f3cd7 : nop
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset _public_65f3540 @0x65f3cdc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65f3540
        mov ecx, ebp
        call public_65f59d0
        cmp dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [esp+0x20], esi
        jle public_65f3d85
        mov dword ptr ss : [esp+0x18], 0
        lea ecx, ds:[ecx]
        public_65f3d00 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [eax+edx]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, 1
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_65f3d66
        mov ebx, 0x70
        nop 
        public_65f3d20 : nop
        mov esi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi+ebx+4]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        add esi, ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xD4]
        cmp eax, 0xFFFFFFFF
        jne public_65f3d53
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x60]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_65f3d53 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+8]
        inc eax
        add ebx, 0x70
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_65f3d20
        public_65f3d66 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+4]
        inc eax
        add edx, 0x34
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], edx
        jl public_65f3d00
        public_65f3d85 : nop
        mov eax, dword ptr ss : [esp+0x44]
        xor ebx, ebx
        cmp eax, ebx
        je public_65f3d99
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x44], ebx
        public_65f3d99 : nop
        mov eax, dword ptr ss : [esp+0x34]
        cmp dword ptr ss : [esp+0x40], ebx
        mov ecx, dword ptr ds : [eax]
        mov edi, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_65f3e10
        mov edx, ecx
        cmp ecx, edx
        jne public_65f3e10
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x38]
        cmp edi, ecx
        mov esi, edi
        je public_65f3de6
        mov edi, edi
        public_65f3dc0 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_65f6290
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6600bb0
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        cmp esi, ecx
        mov edi, esi
        jne public_65f3dc0
        mov eax, dword ptr ss : [esp+0x34]
        public_65f3de6 : nop
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x60]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_65f2a30
        xor ebx, ebx
        jmp public_65f3e36
        public_65f3e10 : nop
        cmp ecx, eax
        je public_65f3e3a
        public_65f3e14 : nop
        mov esi, ecx
        lea ecx, ss:[esp+0x14]
        call public_65f6620
        push esi
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_65f5ec0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, edi
        jne public_65f3e14
        public_65f3e36 : nop
        mov eax, dword ptr ss : [esp+0x34]
        public_65f3e3a : nop
        push eax
        call public_6600bb0
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x48], ebx
        call public_6600bb0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x474
        ret 0x10
        UNREACHABLE_TRAP(0x65f36c0)
    }
}

#undef public_65f3716
#undef public_65f3723
#undef public_65f3727
#undef public_65f3729
#undef public_65f3749
#undef public_65f3773
#undef public_65f377b
#undef public_65f3783
#undef public_65f381d
#undef public_65f38a0
#undef public_65f38cc
#undef public_65f38d3
#undef public_65f3912
#undef public_65f392d
#undef public_65f392f
#undef public_65f3961
#undef public_65f396f
#undef public_65f398a
#undef public_65f39e4
#undef public_65f3a0b
#undef public_65f3a11
#undef public_65f3a22
#undef public_65f3a32
#undef public_65f3a62
#undef public_65f3a90
#undef public_65f3aa5
#undef public_65f3ab3
#undef public_65f3b90
#undef public_65f3b9e
#undef public_65f3bc1
#undef public_65f3bcf
#undef public_65f3bde
#undef public_65f3c26
#undef public_65f3c29
#undef public_65f3c36
#undef public_65f3c4c
#undef public_65f3c7a
#undef public_65f3cd7
#undef public_65f3d00
#undef public_65f3d20
#undef public_65f3d53
#undef public_65f3d66
#undef public_65f3d85
#undef public_65f3d99
#undef public_65f3dc0
#undef public_65f3de6
#undef public_65f3e10
#undef public_65f3e14
#undef public_65f3e36
#undef public_65f3e3a
