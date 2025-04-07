#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3e80);
CLANG_FORWARD_PROC_SYMBOL(public_65f7ca0);
CLANG_FORWARD_PROC_SYMBOL(public_65f8360);
CLANG_FORWARD_PROC_SYMBOL(public_65f8390);
CLANG_FORWARD_PROC_SYMBOL(public_65f8480);
CLANG_FORWARD_PROC_SYMBOL(public_65f9150);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f84ad _public_65f84ad
#define public_65f8538 _public_65f8538
#define public_65f85c9 _public_65f85c9
#define public_65f8665 _public_65f8665
#define public_65f8705 _public_65f8705
#define public_65f88d0 _public_65f88d0
#define public_65f895e _public_65f895e

PROC_DECLARE(0x65f8480, internal_65f8480, public_65f8480);
extern "C" NAKED register_t __cdecl internal_65f8480()
{
    __asm
    {
        sub esp, 0x108
        push ebx
        mov ebx, dword ptr ss : [esp+0x110]
        mov eax, dword ptr ds : [ebx]
        push esi
/*FIXUP push offset public_66028f8 @0x65f8491*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66028f8
        push ebx
        mov esi, ecx
        call dword ptr ds : [eax+0x60]
        test eax, eax
        jne public_65f84ad
        pop esi
        xor al, al
        pop ebx
        add esp, 0x108
        ret 4
        public_65f84ad : nop
        mov ecx, dword ptr ds : [ebx]
        push ebp
        push edi
        push ebx
        mov dword ptr ss : [esp+0x80], ebx
        call dword ptr ds : [ecx+4]
/*FIXUP push offset public_6602040 @0x65f84bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
        xor ebp, ebp
/*FIXUP push offset public_6602970 @0x65f84c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602970
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0x78], ebp
        mov dword ptr ss : [esp+0x80], ebp
        call public_65f3e80
        lea eax, ss:[esp+0xD0]
        push eax
        mov dword ptr ss : [esp+0x104], 0xFFFFFFFF
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x6C], edi
        je public_65f8538
        mov ecx, dword ptr ds : [ebx]
        push ebp
        push edi
        push ebx
        call dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ds : [ebx]
        push ebp
        push ebp
        push ebp
        push 2
        push ebp
        push edi
        push ebx
        mov dword ptr ss : [esp+0x8C], eax
        call dword ptr ds : [edx+0x3C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x74], eax
        je public_65f8538
        mov ecx, dword ptr ds : [ebx]
        push ebp
        push ebp
        push ebp
        push 4
        push eax
        push ebx
        call dword ptr ds : [ecx+0x40]
        mov dword ptr ss : [esp+0x78], eax
        public_65f8538 : nop
        push ebx
        lea ecx, ss:[esp+0x68]
        call public_65f9150
/*FIXUP push offset public_6602040 @0x65f8542*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
        or edi, 0xFFFFFFFF
/*FIXUP push offset public_6602960 @0x65f854a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602960
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x68], ebp
        call public_65f3e80
        mov eax, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0xD0]
        push ecx
        mov dword ptr ss : [esp+0x104], edi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x7C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x54], eax
        je public_65f85c9
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x54]
        push ebp
        push ebp
        push ebp
        push 2
        push ebp
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x5C], eax
        je public_65f85c9
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push ebp
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [esp+0x60], eax
        public_65f85c9 : nop
        mov edi, dword ptr ss : [esp+0x60]
        push ebx
        lea ecx, ss:[esp+0x54]
        call public_65f9150
/*FIXUP push offset public_6602040 @0x65f85d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
/*FIXUP push offset public_660294c @0x65f85dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660294c
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x54], ebp
        call public_65f3e80
        mov eax, dword ptr ss : [esp+0x50]
        lea edx, ss:[esp+0xD0]
        push edx
        mov dword ptr ss : [esp+0x104], 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x40], eax
        je public_65f8665
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x40]
        push ebp
        push ebp
        push ebp
        push 2
        push ebp
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x48], eax
        je public_65f8665
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push ebp
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [esp+0x4C], eax
        public_65f8665 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        push ebx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x28], eax
        call public_65f9150
/*FIXUP push offset public_6602040 @0x65f8677*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
/*FIXUP push offset public_6602938 @0x65f867c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602938
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x40], ebp
        call public_65f3e80
        mov eax, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0xD0]
        push edx
        mov dword ptr ss : [esp+0x104], 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], eax
        je public_65f8705
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        push ebp
        push ebp
        push ebp
        push 2
        push ebp
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], eax
        je public_65f8705
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push ebp
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [esp+0x38], eax
        public_65f8705 : nop
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x20], eax
        call public_65f9150
        push 0xFFFFFFFF
/*FIXUP push offset public_6602924 @0x65f871c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602924
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xA0], ebp
        mov dword ptr ss : [esp+0xA8], ebp
        call public_65f8390
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x10], ecx
        push ebx
        lea ecx, ss:[esp+0xD0]
        call public_65f9150
        push 0xFFFFFFFF
/*FIXUP push offset public_660291c @0x65f8760*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660291c
        lea ecx, ss:[esp+0xC4]
        mov dword ptr ss : [esp+0xC4], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC8], ebp
        mov dword ptr ss : [esp+0xD0], ebp
        call public_65f8390
        mov edx, dword ptr ss : [esp+0xC8]
        push ebx
        lea ecx, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0x1C], edx
        call public_65f9150
        push 0xFFFFFFFF
/*FIXUP push offset public_6602914 @0x65f87a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602914
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xB4], ebp
        mov dword ptr ss : [esp+0xBC], ebp
        call public_65f8390
        mov eax, dword ptr ss : [esp+0xB4]
        push ebx
        lea ecx, ss:[esp+0x94]
        mov dword ptr ss : [esp+0x24], eax
        call public_65f9150
        push 0xFFFFFFFF
/*FIXUP push offset public_660290c @0x65f87e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660290c
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x8C], ebp
        mov dword ptr ss : [esp+0x94], ebp
        call public_65f8390
        mov ecx, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x28], ecx
        push ebx
        lea ecx, ss:[esp+0x108]
        call public_65f8360
        push 0xFFFFFFFF
/*FIXUP push offset public_6602904 @0x65f882c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602904
        lea ecx, ss:[esp+0x10C]
        call public_65f8390
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x110]
        shr eax, 2
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ds : [esi+0x58], eax
        jbe public_65f895e
        lea eax, ds:[eax+eax*8]
        shl eax, 2
        push eax
        call public_6600bb6
        mov dword ptr ds : [esi+0x5C], eax
        mov eax, dword ptr ds : [esi+0x58]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x68], ebp
        jbe public_65f895e
        mov ebp, dword ptr ss : [esp+0x24]
        sub ebp, edi
        mov dword ptr ss : [esp+0x24], ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x78]
        sub ebp, edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov ebp, dword ptr ss : [esp+0x10]
        sub ebp, edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebp, dword ptr ss : [esp+0x18]
        sub ebp, edi
        mov dword ptr ss : [esp+0x18], ebp
        mov ebp, dword ptr ss : [esp+0x20]
        sub ebp, edi
        mov dword ptr ss : [esp+0x20], ebp
        mov ebp, dword ptr ss : [esp+0x28]
        sub ebp, edi
        mov dword ptr ss : [esp+0x28], ebp
        mov ebp, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        sub edx, edi
        sub ebp, edi
        mov eax, edi
        mov dword ptr ss : [esp+0x14], ebp
        nop 
        lea esp, ss:[esp]
        public_65f88d0 : nop
        mov ebp, dword ptr ds : [edx+eax]
        mov edi, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [ecx+edi], ebp
        mov ebp, dword ptr ds : [eax]
        mov edi, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [ecx+edi+4], ebp
        mov edi, dword ptr ds : [esi+0x5C]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [eax+ebp]
        mov dword ptr ds : [ecx+edi+8], ebp
        mov edi, dword ptr ds : [esi+0x5C]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [eax+ebp]
        mov dword ptr ds : [ecx+edi+0xC], ebp
        mov edi, dword ptr ds : [esi+0x5C]
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax+ebp]
        mov dword ptr ds : [ecx+edi+0x10], ebp
        mov edi, dword ptr ds : [esi+0x5C]
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [eax+ebp]
        mov dword ptr ds : [ecx+edi+0x14], ebp
        mov edi, dword ptr ds : [esi+0x5C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ds : [eax+ebp]
        mov dword ptr ds : [ecx+edi+0x18], ebp
        mov edi, dword ptr ds : [esi+0x5C]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ds : [eax+ebp]
        mov dword ptr ds : [ecx+edi+0x1C], ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [eax+ebp]
        mov edi, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [ecx+edi+0x20], ebp
        mov edi, dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ds : [esi+0x58]
        inc edi
        add eax, 4
        add ecx, 0x24
        cmp edi, ebp
        mov dword ptr ss : [esp+0x68], edi
        jb public_65f88d0
        public_65f895e : nop
        lea ecx, ss:[esp+0x104]
        call public_65f7ca0
        lea ecx, ss:[esp+0x80]
        call public_65f7ca0
        lea ecx, ss:[esp+0xA8]
        call public_65f7ca0
        lea ecx, ss:[esp+0xBC]
        call public_65f7ca0
        lea ecx, ss:[esp+0x94]
        call public_65f7ca0
        lea ecx, ss:[esp+0x2C]
        call public_65f7ca0
        lea ecx, ss:[esp+0x40]
        call public_65f7ca0
        lea ecx, ss:[esp+0x54]
        call public_65f7ca0
        lea ecx, ss:[esp+0x6C]
        call public_65f7ca0
        mov ecx, dword ptr ds : [ebx]
/*FIXUP push offset public_6602020 @0x65f89c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602020
        push ebx
        call dword ptr ds : [ecx+0x60]
        pop edi
        pop ebp
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x108
        ret 4
        UNREACHABLE_TRAP(0x65f8480)
    }
}

#undef public_65f84ad
#undef public_65f8538
#undef public_65f85c9
#undef public_65f8665
#undef public_65f8705
#undef public_65f88d0
#undef public_65f895e
