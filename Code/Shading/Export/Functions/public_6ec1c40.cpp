#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0b80);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1710);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1a80);
CLANG_FORWARD_PROC_SYMBOL(public_6ec38a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec52a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc850);
CLANG_FORWARD_PROC_SYMBOL(public_6ecdc70);
CLANG_FORWARD_PROC_SYMBOL(public_6ece6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eced00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ec1c8b _public_6ec1c8b
#define public_6ec1cf0 _public_6ec1cf0
#define public_6ec1da9 _public_6ec1da9
#define public_6ec1dd2 _public_6ec1dd2
#define public_6ec1df0 _public_6ec1df0
#define public_6ec1e00 _public_6ec1e00
#define public_6ec1ec3 _public_6ec1ec3
#define public_6ec1ed4 _public_6ec1ed4
#define public_6ec1eeb _public_6ec1eeb
#define public_6ec1ef1 _public_6ec1ef1

PROC_DECLARE(0x6ec1c40, internal_6ec1c40, public_6ec1c40);
extern "C" NAKED register_t __cdecl internal_6ec1c40()
{
    __asm
    {
        mov eax, 0x21CC
        call public_6ed0c70
        push esi
        mov esi, dword ptr ss : [esp+0x21D8]
        push edi
        xor edi, edi
        cmp esi, edi
        jne public_6ec1c8b
/*FIXUP push offset public_6ed4d10 @0x6ec1c59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4d10
        push 0x58E
/*FIXUP push offset public_6ed4c00 @0x6ec1c63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4c00
        mov eax, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ec1c6d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push eax
        mov eax, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x21CC
        ret 0xC
        public_6ec1c8b : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x21DC]
        push ebp
        mov ecx, ebx
        call public_6ec0b80
        mov cl, byte ptr ss : [esp+0x12]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_6ed4ce8 @0x6ec1ca1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ce8
        push esi
        mov byte ptr ss : [esp+0x28], cl
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x24], edi
        mov byte ptr ss : [esp+0x1A], 0
        call dword ptr ds : [edx+0x60]
        test eax, eax
        je public_6ec1e00
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x9C]
        push ecx
/*FIXUP push offset public_6ed4d0c @0x6ec1cd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4d0c
        push esi
        call dword ptr ds : [eax+0x48]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6ec1df0
        lea esp, ss:[esp]
        public_6ec1cf0 : nop
        cmp byte ptr ss : [esp+0xC8], 0x2E
        je public_6ec1dd2
        xor eax, eax
        push eax
        mov dword ptr ss : [esp+0x58], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x5C]
        rep stosd
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0xD4]
        push esi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x70], 0x80000000
        mov dword ptr ss : [esp+0x74], 1
        mov dword ptr ss : [esp+0x7C], 3
        mov dword ptr ss : [esp+0x80], 0x8000080
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x60], 0x34
        mov dword ptr ss : [esp+0x90], ebp
        call public_6ec1710
        test eax, eax
        jge public_6ec1da9
        cmp eax, 0xFFFFFFF9
        je public_6ec1dd2
        lea edx, ss:[esp+0xC8]
        push edx
        lea eax, ss:[esp+0x1E0]
/*FIXUP push offset public_6ed4cf8 @0x6ec1d7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4cf8
        push eax
        call public_6eb22b0
        push eax
        push 0x5B4
/*FIXUP push offset public_6ed4c00 @0x6ec1d8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4c00
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ec1d96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        add esp, 0x20
        jmp public_6ec1dd2
        public_6ec1da9 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        push ebx
        call dword ptr ds : [edx+0x34]
        test eax, eax
        jl public_6ec1dd2
        mov eax, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x30]
        push edx
        push 1
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6ece6e0
        public_6ec1dd2 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x9C]
        push edx
        push ebp
        push esi
        call dword ptr ds : [ecx+0x4C]
        test eax, eax
        jne public_6ec1cf0
        mov eax, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [eax+0x50]
        public_6ec1df0 : nop
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_6ed4ce4 @0x6ec1df2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ce4
        push esi
        call dword ptr ds : [ecx+0x60]
        mov byte ptr ss : [esp+0x12], 1
        public_6ec1e00 : nop
        mov edi, dword ptr ss : [esp+0x21E8]
        test edi, edi
        je public_6ec1ef1
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_6ec1eeb
        mov esi, dword ptr ds : [ebx+0x50]
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x44]
        call public_6ec38a0
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x88], esi
        call public_6ec1a80
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[ebx+0x3C]
        call public_6ec52a0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6eced00
        mov ebp, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x88]
        call public_6ecc850
        lea ecx, ss:[esp+0x3C]
        call public_6ecc850
        mov edx, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        push edx
        call public_6ed0c50
        add esp, 4
        test esi, esi
        mov dword ptr ss : [ebp+0x10], 0
        je public_6ec1ed4
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, esi
        mov edx, eax
        public_6ec1ec3 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6ec1ec3
        mov edi, dword ptr ss : [esp+0x21E8]
        public_6ec1ed4 : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x14]
        call public_6ecdc70
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [edi], ecx
        inc dword ptr ds : [ebx+0x50]
        jmp public_6ec1ef1
        public_6ec1eeb : nop
        mov dword ptr ds : [edi], 0xFFFFFFFF
        public_6ec1ef1 : nop
        mov al, byte ptr ss : [esp+0x12]
        xor edx, edx
        test al, al
        mov eax, dword ptr ss : [esp+0x1C]
        setne dl
        push eax
        dec edx
        mov esi, edx
        call public_6ed0c50
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x24], 0
        call public_6ed0c50
        add esp, 8
        pop ebp
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        add esp, 0x21CC
        ret 0xC
        UNREACHABLE_TRAP(0x6ec1c40)
    }
}

#undef public_6ec1c8b
#undef public_6ec1cf0
#undef public_6ec1da9
#undef public_6ec1dd2
#undef public_6ec1df0
#undef public_6ec1e00
#undef public_6ec1ec3
#undef public_6ec1ed4
#undef public_6ec1eeb
#undef public_6ec1ef1
