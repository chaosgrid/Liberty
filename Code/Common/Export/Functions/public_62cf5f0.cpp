#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2a70);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4ea0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4f20);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ec520);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62cf607 _public_62cf607
#define public_62cf60b _public_62cf60b
#define public_62cf61b _public_62cf61b
#define public_62cf648 _public_62cf648
#define public_62cf66d _public_62cf66d
#define public_62cf680 _public_62cf680
#define public_62cf682 _public_62cf682
#define public_62cf6a5 _public_62cf6a5
#define public_62cf6c0 _public_62cf6c0
#define public_62cf6d5 _public_62cf6d5
#define public_62cf6d7 _public_62cf6d7
#define public_62cf6f1 _public_62cf6f1
#define public_62cf6f3 _public_62cf6f3
#define public_62cf74e _public_62cf74e
#define public_62cf75a _public_62cf75a
#define public_62cf75c _public_62cf75c
#define public_62cf77d _public_62cf77d
#define public_62cf77f _public_62cf77f
#define public_62cf7c4 _public_62cf7c4
#define public_62cf7d0 _public_62cf7d0
#define public_62cf7d2 _public_62cf7d2
#define public_62cf7f1 _public_62cf7f1
#define public_62cf848 _public_62cf848
#define public_62cf8a5 _public_62cf8a5
#define public_62cf8b4 _public_62cf8b4
#define public_62cf8f2 _public_62cf8f2
#define public_62cf8f4 _public_62cf8f4
#define public_62cf918 _public_62cf918
#define public_62cf954 _public_62cf954
#define public_62cf956 _public_62cf956
#define public_62cf97a _public_62cf97a
#define public_62cf986 _public_62cf986
#define public_62cf988 _public_62cf988
#define public_62cf9ba _public_62cf9ba
#define public_62cf9dc _public_62cf9dc
#define public_62cf9de _public_62cf9de
#define public_62cf9fd _public_62cf9fd
#define public_62cfa0e _public_62cfa0e
#define public_62cfa15 _public_62cfa15
#define public_62cfa35 _public_62cfa35
#define public_62cfa56 _public_62cfa56
#define public_62cfa8e _public_62cfa8e
#define public_62cfa90 _public_62cfa90
#define public_62cfab4 _public_62cfab4
#define public_62cfaf2 _public_62cfaf2
#define public_62cfaf4 _public_62cfaf4
#define public_62cfb13 _public_62cfb13
#define public_62cfb2d _public_62cfb2d
#define public_62cfb31 _public_62cfb31
#define public_62cfb3d _public_62cfb3d
#define public_62cfb52 _public_62cfb52
#define public_62cfb54 _public_62cfb54
#define public_62cfb75 _public_62cfb75
#define public_62cfb77 _public_62cfb77
#define public_62cfb96 _public_62cfb96
#define public_62cfba7 _public_62cfba7
#define public_62cfbc7 _public_62cfbc7
#define public_62cfbe3 _public_62cfbe3
#define public_62cfbef _public_62cfbef
#define public_62cfc10 _public_62cfc10
#define public_62cfc12 _public_62cfc12
#define public_62cfc57 _public_62cfc57

PROC_DECLARE(0x62cf5f0, internal_62cf5f0, public_62cf5f0);
extern "C" NAKED register_t __cdecl internal_62cf5f0()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        push edi
        je public_62cf607
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62cf61b
        public_62cf607 : nop
        and byte ptr ds : [esi+0x28], 0xFD
        public_62cf60b : nop
        pop edi
        mov eax, 3
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 
        public_62cf61b : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62cf60b
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cf60b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62cf60b
        mov ecx, dword ptr ds : [esi+0x74]
        test ecx, ecx
        jne public_62cf6a5
        mov eax, dword ptr ds : [esi+0xFC]
        test eax, eax
        je public_62cf648
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62cf66d
        public_62cf648 : nop
        mov dl, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        push 1
        and dl, 0xFD
        push 0xE
        mov byte ptr ds : [esi+0x28], dl
        call public_62d29a0
        pop edi
        mov eax, 2
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 
        public_62cf66d : nop
        test ecx, ecx
        jne public_62cf6a5
        mov eax, dword ptr ds : [esi+0xFC]
        test eax, eax
        je public_62cf680
        add eax, 0xFFFFFFF8
        jmp public_62cf682
        public_62cf680 : nop
        xor eax, eax
        public_62cf682 : nop
        push eax
        lea eax, ss:[esp+0x48]
        push eax
        call public_62e60e0
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x48]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        mov dword ptr ds : [ecx+8], eax
        jmp public_62cf6c0
        public_62cf6a5 : nop
        cmp ecx, 1
        jne public_62cf6c0
        lea ecx, ds:[esi+0x78]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x48]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+8], ecx
        public_62cf6c0 : nop
        mov edx, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [esi+0x54], edx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cf6d5
        add eax, 0xFFFFFFF8
        jmp public_62cf6d7
        public_62cf6d5 : nop
        xor eax, eax
        public_62cf6d7 : nop
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_62e60e0
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 8
        test eax, eax
        je public_62cf6f1
        add eax, 0xFFFFFFF8
        jmp public_62cf6f3
        public_62cf6f1 : nop
        xor eax, eax
        public_62cf6f3 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e4bb0
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+0x24]
        lea ebp, ds:[esi+0x48]
        add edx, 0x14FC
        push ebp
        push edx
        call public_62e4ea0
        fstp dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x30]
        push ebp
        push eax
        call public_62e4f20
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x34]
        xor bl, bl
        fcomp dword ptr ss : [esp+0x30]
        add esp, 0x18
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x12], bl
        fnstsw ax
        test ah, 5
        jp public_62cf74e
        mov byte ptr ss : [esp+0x12], 1
        public_62cf74e : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cf75a
        lea ecx, ds:[eax-8]
        jmp public_62cf75c
        public_62cf75a : nop
        xor ecx, ecx
        public_62cf75c : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x148]
        cmp eax, 0xA
        jne public_62cf7c4
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_62cf77d
        lea ecx, ds:[eax-8]
        jmp public_62cf77f
        public_62cf77d : nop
        xor ecx, ecx
        public_62cf77f : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_62cf7c4
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        jne public_62cf7c4
        mov byte ptr ds : [esi+0x120], 0
        mov byte ptr ss : [esp+0x13], 1
        public_62cf7c4 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cf7d0
        lea ecx, ds:[eax-8]
        jmp public_62cf7d2
        public_62cf7d0 : nop
        xor ecx, ecx
        public_62cf7d2 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        add ecx, 0x1364
        call public_62ec520
        test al, al
        je public_62cf7f1
        mov byte ptr ds : [esi+0x120], 0
        public_62cf7f1 : nop
        fld dword ptr ds : [esi+0x108]
        fcomp dword ptr ds : [esi+0x104]
        fnstsw ax
        test ah, 0x41
        jne public_62cf8a5
        fld dword ptr ds : [esi+0x10C]
        xor ecx, ecx
        fsub dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x108], ecx
        fstp dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ecx
        fld dword ptr ss : [ebp]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x34]
        je public_62cf848
        lea ecx, ds:[eax-8]
        public_62cf848 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x2C]
        fld dword ptr ds : [eax+0x20]
        push ecx
        fstp dword ptr ss : [esp+0x50]
        fxch 
        lea edx, ss:[esp+0x54]
        fchs 
        push edx
        fstp dword ptr ss : [esp+0x40]
        fchs 
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x54]
        fchs 
        fstp dword ptr ss : [esp+0x48]
        call public_62e1680
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        call public_62e1630
        add esp, 0x10
        call public_6391fc2
        fstp dword ptr ds : [esi+0x5C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10C], ecx
        mov bl, 1
        jmp public_62cf8b4
        public_62cf8a5 : nop
        fld dword ptr ds : [esi+0x1C]
        fadd dword ptr ds : [esi+0x108]
        fstp dword ptr ds : [esi+0x108]
        public_62cf8b4 : nop
        mov al, byte ptr ds : [esi+0x120]
        test al, al
        je public_62cfa56
        test bl, bl
        je public_62cfa15
        fld dword ptr ds : [esi+0x58]
        fcomp dword ptr ds : [esi+0x114]
        fnstsw ax
        test ah, 5
        jp public_62cf918
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_62cfa0e
        mov edi, dword ptr ds : [esi+0x2C]
        test edi, edi
        je public_62cf8f2
        add edi, 0xFFFFFFF8
        jmp public_62cf8f4
        public_62cf8f2 : nop
        xor edi, edi
        public_62cf8f4 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 8
        jmp public_62cf9fd
        public_62cf918 : nop
        fld dword ptr ds : [esi+0x58]
        fcomp dword ptr ds : [esi+0x118]
        fnstsw ax
        test ah, 0x41
        jne public_62cf9ba
        fld dword ptr ds : [esi+0x5C]
        fcomp dword ptr ds : [esi+0x11C]
        fnstsw ax
        test ah, 0x41
        jne public_62cf97a
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_62cfa0e
        mov edi, dword ptr ds : [esi+0x2C]
        test edi, edi
        je public_62cf954
        add edi, 0xFFFFFFF8
        jmp public_62cf956
        public_62cf954 : nop
        xor edi, edi
        public_62cf956 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 6
        jmp public_62cf9fd
        public_62cf97a : nop
        mov edi, dword ptr ds : [esi+0x2C]
        test edi, edi
        je public_62cf986
        add edi, 0xFFFFFFF8
        jmp public_62cf988
        public_62cf986 : nop
        xor edi, edi
        public_62cf988 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [edi]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 5
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x20]
        push eax
        push ebx
        call public_62d2a70
        jmp public_62cfa15
        public_62cf9ba : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x44]
        fnstsw ax
        test ah, 5
        jp public_62cfa15
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_62cfa0e
        mov edi, dword ptr ds : [esi+0x2C]
        test edi, edi
        je public_62cf9dc
        add edi, 0xFFFFFFF8
        jmp public_62cf9de
        public_62cf9dc : nop
        xor edi, edi
        public_62cf9de : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 7
        public_62cf9fd : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x20]
        push eax
        push ebx
        call public_62d2a70
        public_62cfa0e : nop
        mov byte ptr ds : [esi+0x120], 0
        public_62cfa15 : nop
        mov al, byte ptr ds : [esi+0x120]
        test al, al
        je public_62cfa35
        fld dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x64]
        fstp dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        jmp public_62cfbc7
        public_62cfa35 : nop
        mov ecx, dword ptr ds : [esi+0x64]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x68]
        push eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        jmp public_62cfbc7
        public_62cfa56 : nop
        test bl, bl
        je public_62cfba7
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_62cfb31
        fld dword ptr ds : [esi+0x58]
        mov cl, byte ptr ss : [esp+0x12]
        fcomp dword ptr ds : [esi+0x114]
        fnstsw ax
        test ah, 5
        jp public_62cfab4
        test cl, cl
        jne public_62cfab4
        mov edi, dword ptr ds : [esi+0x2C]
        test edi, edi
        je public_62cfa8e
        add edi, 0xFFFFFFF8
        jmp public_62cfa90
        public_62cfa8e : nop
        xor edi, edi
        public_62cfa90 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 3
        jmp public_62cfb96
        public_62cfab4 : nop
        fld dword ptr ds : [esi+0x58]
        fcomp dword ptr ds : [esi+0x118]
        fld dword ptr ss : [esp+0x14]
        fnstsw ax
        fcomp dword ptr ds : [esi+0x3C]
        test ah, 0x41
        fnstsw ax
        jne public_62cfb3d
        test ah, 5
        jp public_62cfb2d
        fld dword ptr ds : [esi+0x5C]
        fcomp dword ptr ds : [esi+0x11C]
        fnstsw ax
        test ah, 0x41
        jp public_62cfba7
        mov edi, dword ptr ds : [esi+0x2C]
        test edi, edi
        je public_62cfaf2
        add edi, 0xFFFFFFF8
        jmp public_62cfaf4
        public_62cfaf2 : nop
        xor edi, edi
        public_62cfaf4 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 1
        public_62cfb13 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x20]
        push eax
        push ebx
        call public_62d2a70
        mov byte ptr ds : [esi+0x120], 1
        jmp public_62cfba7
        public_62cfb2d : nop
        test cl, cl
        je public_62cfba7
        public_62cfb31 : nop
        mov edi, dword ptr ds : [esi+0x2C]
        test edi, edi
        je public_62cfb75
        add edi, 0xFFFFFFF8
        jmp public_62cfb77
        public_62cfb3d : nop
        test ah, 1
        jne public_62cfba7
        test cl, cl
        jne public_62cfba7
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cfb52
        lea edi, ds:[eax-8]
        jmp public_62cfb54
        public_62cfb52 : nop
        xor edi, edi
        public_62cfb54 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 2
        jmp public_62cfb13
        public_62cfb75 : nop
        xor edi, edi
        public_62cfb77 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 4
        public_62cfb96 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x20]
        push eax
        push ebx
        call public_62d2a70
        public_62cfba7 : nop
        mov al, byte ptr ds : [esi+0x120]
        test al, al
        jne public_62cfbef
        fld dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x60]
        fstp dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        cmp eax, 2
        je public_62cfbe3
        public_62cfbc7 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        push ebp
        push eax
        call public_62e4ea0
        fcomp dword ptr ds : [esi+0x54]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jp public_62cfc57
        public_62cfbe3 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cfc10
        add eax, 0xFFFFFFF8
        jmp public_62cfc12
        public_62cfbef : nop
        mov ecx, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0xD8]
        push eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        jmp public_62cfbc7
        public_62cfc10 : nop
        xor eax, eax
        public_62cfc12 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e4bb0
        fcomp dword ptr ds : [esi+0xC8]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jp public_62cfc57
        mov dl, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        and dl, 0xFD
        push 0xE
        mov byte ptr ds : [esi+0x28], dl
        call public_62d29a0
        pop edi
        mov eax, 2
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 
        public_62cfc57 : nop
        pop edi
        mov eax, 1
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x62cf5f0)
    }
}

#undef public_62cf607
#undef public_62cf60b
#undef public_62cf61b
#undef public_62cf648
#undef public_62cf66d
#undef public_62cf680
#undef public_62cf682
#undef public_62cf6a5
#undef public_62cf6c0
#undef public_62cf6d5
#undef public_62cf6d7
#undef public_62cf6f1
#undef public_62cf6f3
#undef public_62cf74e
#undef public_62cf75a
#undef public_62cf75c
#undef public_62cf77d
#undef public_62cf77f
#undef public_62cf7c4
#undef public_62cf7d0
#undef public_62cf7d2
#undef public_62cf7f1
#undef public_62cf848
#undef public_62cf8a5
#undef public_62cf8b4
#undef public_62cf8f2
#undef public_62cf8f4
#undef public_62cf918
#undef public_62cf954
#undef public_62cf956
#undef public_62cf97a
#undef public_62cf986
#undef public_62cf988
#undef public_62cf9ba
#undef public_62cf9dc
#undef public_62cf9de
#undef public_62cf9fd
#undef public_62cfa0e
#undef public_62cfa15
#undef public_62cfa35
#undef public_62cfa56
#undef public_62cfa8e
#undef public_62cfa90
#undef public_62cfab4
#undef public_62cfaf2
#undef public_62cfaf4
#undef public_62cfb13
#undef public_62cfb2d
#undef public_62cfb31
#undef public_62cfb3d
#undef public_62cfb52
#undef public_62cfb54
#undef public_62cfb75
#undef public_62cfb77
#undef public_62cfb96
#undef public_62cfba7
#undef public_62cfbc7
#undef public_62cfbe3
#undef public_62cfbef
#undef public_62cfc10
#undef public_62cfc12
#undef public_62cfc57
