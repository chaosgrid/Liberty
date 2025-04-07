#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202460);
CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6202da0);
CLANG_FORWARD_PROC_SYMBOL(public_6202de0);
CLANG_FORWARD_PROC_SYMBOL(public_622a8c0);
CLANG_FORWARD_PROC_SYMBOL(public_622ac40);
CLANG_FORWARD_PROC_SYMBOL(public_622ac50);
CLANG_FORWARD_PROC_SYMBOL(public_622ac60);
CLANG_FORWARD_PROC_SYMBOL(public_622ac70);
CLANG_FORWARD_PROC_SYMBOL(public_622acd0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249346);

#define public_622a659 _public_622a659
#define public_622a679 _public_622a679
#define public_622a67d _public_622a67d
#define public_622a682 _public_622a682
#define public_622a6e8 _public_622a6e8
#define public_622a6ea _public_622a6ea
#define public_622a706 _public_622a706
#define public_622a734 _public_622a734
#define public_622a752 _public_622a752
#define public_622a811 _public_622a811
#define public_622a823 _public_622a823
#define public_622a853 _public_622a853
#define public_622a85b _public_622a85b
#define public_622a88b _public_622a88b
#define public_622a898 _public_622a898
#define public_622a89e _public_622a89e

PROC_DECLARE(0x622a620, internal_622a620, public_622a620);
extern "C" NAKED register_t __cdecl internal_622a620()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249346 @0x622a628*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249346
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_622a88b
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_622a659 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_622a67d
        cmp cl, bl
        je public_622a679
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_622a67d
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_622a659
        public_622a679 : nop
        xor eax, eax
        jmp public_622a682
        public_622a67d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_622a682 : nop
        cmp eax, ebx
        jne public_622a88b
        push 0x2C
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x38], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_622a6e8
        mov al, byte ptr ss : [esp+0x40]
        mov dl, byte ptr ss : [esp+0x40]
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_624e0d8
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_622ac70
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+4], offset public_624b4c4
        mov dword ptr ds : [esi], offset public_624e0a4
        mov dword ptr ds : [esi+4], offset public_624e078
        mov dword ptr ds : [esi+0x28], 1
        mov ebp, esi
        jmp public_622a6ea
        public_622a6e8 : nop
        xor ebp, ebp
        public_622a6ea : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        jne public_622a706
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], ebp
        jmp public_622a89e
        public_622a706 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [ebp+4]
        lea edi, ss:[ebp+4]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_622a898
        mov dword ptr ss : [esp+0x3C], edi
        mov esi, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x30], 1
        cmp esi, ebx
        je public_622a752
        public_622a734 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [edi+0x1C], eax
        mov edx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [eax+0x50]
        mov esi, dword ptr ds : [edi+0x1C]
        cmp esi, ebx
        jne public_622a734
        public_622a752 : nop
        lea esi, ds:[edi+8]
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, dword ptr ds : [esi+4]
        push edi
        call public_622ac40
        mov eax, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], edi
        je public_622a811
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6202460
        push eax
        lea ecx, ss:[esp+0x40]
        call public_622a8c0
        test al, al
        je public_622a811
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x10]
        push edx
        call public_622acd0
        lea eax, ss:[esp+0x10]
        lea ecx, ss:[esp+0x38]
        push eax
        call public_622a8c0
        test al, al
        je public_622a811
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_622ac50
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, esi
        push edx
        call public_6202da0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_622ac50
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov dword ptr ds : [esi+0x10], ebx
        call public_622ac40
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_622ac60
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0xC
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [eax], ecx
        push edx
        mov ecx, esi
        call public_6202460
        jmp public_622a85b
        public_622a811 : nop
        lea eax, ss:[esp+0x38]
        lea ecx, ss:[esp+0x3C]
        push eax
        call public_622a8c0
        test al, al
        jne public_622a853
        public_622a823 : nop
        lea ecx, ss:[esp+0x20]
        push ebx
        push ecx
        lea ecx, ss:[esp+0x44]
        call public_6202de0
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x24]
        push edx
        push eax
        mov ecx, esi
        call public_62029c0
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_622a8c0
        test al, al
        je public_622a823
        public_622a853 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], edx
        public_622a85b : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebx
        push ecx
        mov dword ptr ds : [esi+0x10], ebx
        call public_62460e0
        push ebp
        mov dword ptr ds : [esi+8], ebx
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov dword ptr ds : [edx], ebx
        jmp public_622a89e
        public_622a88b : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_622a89e
        public_622a898 : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx], ebp
        public_622a89e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x622a620)
    }
}

#undef public_622a659
#undef public_622a679
#undef public_622a67d
#undef public_622a682
#undef public_622a6e8
#undef public_622a6ea
#undef public_622a706
#undef public_622a734
#undef public_622a752
#undef public_622a811
#undef public_622a823
#undef public_622a853
#undef public_622a85b
#undef public_622a88b
#undef public_622a898
#undef public_622a89e
