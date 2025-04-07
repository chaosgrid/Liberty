#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfb80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfc00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed01c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0290);
CLANG_FORWARD_PROC_SYMBOL(public_6ed02c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed03d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0400);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2860);
CLANG_FORWARD_PROC_SYMBOL(public_6f15e20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaeeb);

#define public_6ec65b6 _public_6ec65b6
#define public_6ec65d8 _public_6ec65d8
#define public_6ec6729 _public_6ec6729
#define public_6ec67a6 _public_6ec67a6
#define public_6ec67d8 _public_6ec67d8
#define public_6ec6813 _public_6ec6813
#define public_6ec681a _public_6ec681a
#define public_6ec6828 _public_6ec6828
#define public_6ec6840 _public_6ec6840
#define public_6ec6874 _public_6ec6874
#define public_6ec68a0 _public_6ec68a0
#define public_6ec68b8 _public_6ec68b8
#define public_6ec68df _public_6ec68df
#define public_6ec68f0 _public_6ec68f0
#define public_6ec68f7 _public_6ec68f7
#define public_6ec68fc _public_6ec68fc
#define public_6ec6921 _public_6ec6921
#define public_6ec693a _public_6ec693a
#define public_6ec6944 _public_6ec6944

PROC_DECLARE(0x6ec6580, internal_6ec6580, public_6ec6580);
extern "C" NAKED register_t __cdecl internal_6ec6580()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faaeeb @0x6ec6588*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaeeb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        push ebp
        mov ebp, dword ptr ds : [ecx]
        cmp ebp, ecx
        push esi
        je public_6ec6944
        lea esi, ds:[ebx+0xC]
        public_6ec65b6 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        mov ecx, esi
        call public_6ed01c0
        test al, al
        jne public_6ec65d8
        mov ecx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ecx+0xBC]
        jne public_6ec65b6
        jmp public_6ec6944
        public_6ec65d8 : nop
        mov edx, dword ptr ss : [ebp+0x3C]
        lea eax, ss:[ebp+8]
        push edi
        mov esi, eax
        mov ecx, 0xD
        lea edi, ss:[esp+0x10]
        rep movsd
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ds : [eax+0xA0]
        lea esi, ds:[eax+0x38]
        mov ecx, 0xC
        lea edi, ss:[esp+0x48]
        rep movsd
        mov ecx, dword ptr ds : [eax+0x68]
        mov dword ptr ss : [esp+0x78], ecx
        lea esi, ds:[eax+0x6C]
        mov ecx, 0xD
        lea edi, ss:[esp+0x7C]
        rep movsd
        mov cl, byte ptr ds : [eax+0xA4]
        mov byte ptr ss : [esp+0xB4], cl
        mov dword ptr ss : [esp+0xB0], edx
        mov dl, byte ptr ds : [eax+0xA5]
        lea esi, ds:[eax+0xA8]
        mov byte ptr ss : [esp+0xB5], dl
        mov edx, dword ptr ds : [eax+0xE0]
        mov ecx, 0xD
        lea edi, ss:[esp+0xB8]
        rep movsd
        mov ecx, dword ptr ds : [eax+0xDC]
        mov dword ptr ss : [esp+0xEC], ecx
        mov ecx, dword ptr ds : [eax+0xE4]
        add eax, 0xE8
        mov dword ptr ss : [esp+0xF4], ecx
        push eax
        lea ecx, ss:[esp+0xFC]
        mov dword ptr ss : [esp+0xF4], edx
        call public_6ecfb80
        mov edx, dword ptr ss : [esp+0x100]
        mov eax, dword ptr ss : [esp+0xFC]
        push edx
        push eax
        lea ecx, ss:[esp+0x100]
        mov dword ptr ss : [esp+0x118], 0
        call public_6ed02c0
        lea esi, ss:[ebp+0xF0]
        lea ecx, ss:[esp+0xF8]
        cmp ecx, esi
        je public_6ec6813
        lea ecx, ss:[esp+0xF8]
        call public_6ecfc00
        mov ecx, esi
        mov edi, eax
        call public_6ecfc00
        cmp eax, edi
        ja public_6ec6729
        mov edx, dword ptr ss : [esp+0xFC]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
        call public_6ed2860
        mov ecx, dword ptr ss : [esp+0x10C]
        add esp, 0xC
        push ecx
        push eax
        lea ecx, ss:[esp+0x100]
        call public_6ed03d0
        mov ecx, esi
        call public_6ecfc00
        imul eax, 0x88
        add eax, dword ptr ss : [esp+0xFC]
        mov dword ptr ss : [esp+0x100], eax
        jmp public_6ec681a
        public_6ec6729 : nop
        lea ecx, ss:[esp+0xF8]
        call public_6ed0290
        mov ecx, esi
        mov edi, eax
        call public_6ecfc00
        cmp eax, edi
        lea ecx, ss:[esp+0xF8]
        ja public_6ec67a6
        mov ebp, dword ptr ds : [esi+4]
        call public_6ecfc00
        mov edx, dword ptr ss : [esp+0xFC]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        imul edi, 0x88
        push edx
        add edi, ebp
        push edi
        push eax
        call public_6ed2860
        mov ecx, dword ptr ss : [esp+0x10C]
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        push edi
        lea ecx, ss:[esp+0x104]
        call public_6ed0400
        mov ecx, esi
        call public_6ecfc00
        imul eax, 0x88
        add eax, dword ptr ss : [esp+0xFC]
        mov dword ptr ss : [esp+0x100], eax
        jmp public_6ec681a
        public_6ec67a6 : nop
        mov edx, dword ptr ss : [esp+0x100]
        mov eax, dword ptr ss : [esp+0xFC]
        push edx
        push eax
        call public_6ed03d0
        mov ecx, dword ptr ss : [esp+0xFC]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, esi
        call public_6ecfc00
        test eax, eax
        jge public_6ec67d8
        xor eax, eax
        public_6ec67d8 : nop
        imul eax, 0x88
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        push ecx
        push esi
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x108], eax
        call public_6ed0400
        mov dword ptr ss : [esp+0x100], eax
        mov dword ptr ss : [esp+0x104], eax
        jmp public_6ec681a
        public_6ec6813 : nop
        mov eax, dword ptr ss : [esp+0x100]
        public_6ec681a : nop
        mov ecx, dword ptr ss : [esp+0xFC]
        cmp ecx, eax
        je public_6ec6840
        lea eax, ds:[ecx+0x7C]
        public_6ec6828 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x100]
        add eax, 0x88
        lea ecx, ds:[eax-0x7C]
        cmp ecx, edx
        jne public_6ec6828
        public_6ec6840 : nop
        lea esi, ds:[ebx+0xA8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6ec68f7
        mov esi, dword ptr ds : [esi]
/*FIXUP push offset public_6fb5b4c @0x6ec6858*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5b4c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        cmp esi, eax
        je public_6ec6874
        mov edx, dword ptr ss : [esp+0xFC]
        mov dword ptr ds : [edx+0x54], esi
        public_6ec6874 : nop
        mov al, byte ptr ds : [ebx+0xA4]
        test al, al
        je public_6ec68a0
        lea eax, ds:[ebx+0x98]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov byte ptr ss : [esp+0xB4], 0
        mov dword ptr ss : [esp+0x6C], ecx
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x74], eax
        public_6ec68a0 : nop
        mov al, byte ptr ds : [ebx+0xA5]
        test al, al
        je public_6ec68b8
        lea esi, ds:[ebx+0x74]
        mov ecx, 9
        lea edi, ss:[esp+0x48]
        rep movsd
        public_6ec68b8 : nop
        mov al, byte ptr ds : [ebx+0xA6]
        test al, al
        je public_6ec68f0
        mov ecx, dword ptr ss : [esp+0xFC]
        lea eax, ds:[ebx+0x44]
        test eax, eax
        lea esi, ds:[ecx+4]
        jne public_6ec68df
        mov dword ptr ds : [esi], eax
        mov byte ptr ds : [esi+4], al
        lea eax, ss:[esp+0x10]
        push eax
        jmp public_6ec68fc
        public_6ec68df : nop
        push eax
        lea edx, ds:[esi+4]
        push 0x30
        push edx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi], eax
        public_6ec68f0 : nop
        lea eax, ss:[esp+0x10]
        push eax
        jmp public_6ec68fc
        public_6ec68f7 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        public_6ec68fc : nop
        mov ecx, dword ptr ds : [ebx+4]
        call public_6f15e20
        mov edi, dword ptr ss : [esp+0x100]
        mov esi, dword ptr ss : [esp+0xFC]
        cmp esi, edi
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        je public_6ec693a
        public_6ec6921 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0x88
        cmp esi, edi
        jne public_6ec6921
        mov esi, dword ptr ss : [esp+0xFC]
        public_6ec693a : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        pop edi
        public_6ec6944 : nop
        mov ecx, dword ptr ss : [esp+0x104]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6ec6580)
    }
}

#undef public_6ec65b6
#undef public_6ec65d8
#undef public_6ec6729
#undef public_6ec67a6
#undef public_6ec67d8
#undef public_6ec6813
#undef public_6ec681a
#undef public_6ec6828
#undef public_6ec6840
#undef public_6ec6874
#undef public_6ec68a0
#undef public_6ec68b8
#undef public_6ec68df
#undef public_6ec68f0
#undef public_6ec68f7
#undef public_6ec68fc
#undef public_6ec6921
#undef public_6ec693a
#undef public_6ec6944
