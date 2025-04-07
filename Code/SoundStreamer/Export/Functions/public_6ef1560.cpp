#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef13d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1560);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2850);
CLANG_FORWARD_PROC_SYMBOL(public_6ef28c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2910);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4680);
CLANG_FORWARD_PROC_SYMBOL(public_6ef46b0);

#define public_6ef15d5 _public_6ef15d5
#define public_6ef15e1 _public_6ef15e1
#define public_6ef1638 _public_6ef1638
#define public_6ef1690 _public_6ef1690
#define public_6ef16cc _public_6ef16cc
#define public_6ef16d0 _public_6ef16d0
#define public_6ef16d6 _public_6ef16d6
#define public_6ef16e0 _public_6ef16e0
#define public_6ef16e9 _public_6ef16e9
#define public_6ef16f2 _public_6ef16f2
#define public_6ef1705 _public_6ef1705
#define public_6ef172a _public_6ef172a
#define public_6ef1734 _public_6ef1734
#define public_6ef174b _public_6ef174b
#define public_6ef175a _public_6ef175a
#define public_6ef175f _public_6ef175f
#define public_6ef1777 _public_6ef1777
#define public_6ef1781 _public_6ef1781
#define public_6ef17ab _public_6ef17ab
#define public_6ef17ad _public_6ef17ad
#define public_6ef17d0 _public_6ef17d0
#define public_6ef1810 _public_6ef1810
#define public_6ef1821 _public_6ef1821
#define public_6ef186c _public_6ef186c
#define public_6ef18b6 _public_6ef18b6
#define public_6ef18da _public_6ef18da
#define public_6ef191a _public_6ef191a

PROC_DECLARE(0x6ef1560, internal_6ef1560, public_6ef1560);
extern "C" NAKED register_t __cdecl internal_6ef1560()
{
    __asm
    {
        mov eax, 0x2054
        call public_6ef46b0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x84]
        test al, al
        push edi
        jne public_6ef174b
        mov eax, dword ptr ds : [esi+0x80]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6ef174b
        cmp dword ptr ss : [esp+0x2068], ebx
        je public_6ef174b
        fld dword ptr ss : [esp+0x206C]
        mov eax, dword ptr ss : [esp+0x206C]
        fcomp dword ptr ds : [public_6efc150]
        mov dword ptr ds : [esi+0xC4], eax
        fnstsw ax
        test ah, 0x41
        jnp public_6ef174b
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, ebx
        je public_6ef174b
        cmp dword ptr ds : [esi+8], ebx
        jne public_6ef15d5
        mov dword ptr ds : [esi+0x14], ebx
        jmp public_6ef1638
        public_6ef15d5 : nop
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, ebx
        jne public_6ef15e1
        mov ebp, offset public_6efc14c
        public_6ef15e1 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x34], offset public_6efe188
        mov ecx, 0xB
        lea edi, ss:[esp+0x38]
        rep stosd
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x44], 0x80000000
        mov dword ptr ss : [esp+0x48], 1
        mov dword ptr ss : [esp+0x50], 3
        mov dword ptr ss : [esp+0x54], 0x8000080
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x34], 0x34
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        mov ecx, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [ecx+0x7C]
        mov dword ptr ds : [esi+0x14], eax
        public_6ef1638 : nop
        mov ecx, esi
        call public_6ef2850
        test al, al
        je public_6ef174b
        mov ecx, dword ptr ds : [esi+0x24]
        push 0xC
        push ecx
        mov ecx, esi
        call public_6ef28c0
        cmp eax, ebx
        je public_6ef174b
        add dword ptr ds : [esi+0x24], 0xC
        cmp dword ptr ds : [eax], 0x46464952
        jne public_6ef174b
        cmp dword ptr ds : [eax+8], 0x45564157
        jne public_6ef174b
        xor edi, edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ebx
        xor ebp, ebp
        mov ebx, 8
        lea ebx, ds:[ebx]
        public_6ef1690 : nop
        mov edx, dword ptr ds : [esi+0x24]
        push ebx
        push edx
        mov ecx, esi
        call public_6ef28c0
        test eax, eax
        je public_6ef1705
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, ebx
        mov dword ptr ds : [esi+0x24], ecx
        mov edx, ecx
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 0x6D697274
        jg public_6ef16d6
        je public_6ef16d0
        cmp ecx, 0x20746D66
        je public_6ef16cc
        cmp ecx, 0x61746164
        jne public_6ef16e0
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6ef16e0
        public_6ef16cc : nop
        mov edi, eax
        jmp public_6ef16e0
        public_6ef16d0 : nop
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6ef16e0
        public_6ef16d6 : nop
        cmp ecx, 0x74636166
        jne public_6ef16e0
        mov ebp, eax
        public_6ef16e0 : nop
        mov eax, dword ptr ds : [eax+4]
        add eax, edx
        jns public_6ef16e9
        xor eax, eax
        public_6ef16e9 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        cmp eax, ecx
        jle public_6ef16f2
        mov eax, ecx
        public_6ef16f2 : nop
        test edi, edi
        mov dword ptr ds : [esi+0x24], eax
        je public_6ef1690
        test ebp, ebp
        je public_6ef1690
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ef1690
        public_6ef1705 : nop
        test edi, edi
        je public_6ef174b
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        je public_6ef174b
        test ebp, ebp
        mov eax, 4
        je public_6ef172a
        cmp dword ptr ss : [ebp+4], eax
        jb public_6ef172a
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+0x90], ecx
        jmp public_6ef1734
        public_6ef172a : nop
        mov dword ptr ds : [esi+0x90], 0xFFFFFFFF
        public_6ef1734 : nop
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [esi+0xD4], ecx
        cmp word ptr ds : [ecx], 1
        mov edx, dword ptr ds : [edi+4]
        jne public_6ef175a
        cmp edx, 0x10
        jae public_6ef175f
        public_6ef174b : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x2054
        ret 8
        public_6ef175a : nop
        cmp edx, 0x12
        jb public_6ef174b
        public_6ef175f : nop
        mov edx, dword ptr ss : [esp+0x14]
        test edx, edx
        je public_6ef1777
        cmp dword ptr ds : [edx+4], eax
        jne public_6ef1777
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xCC], edx
        jmp public_6ef1781
        public_6ef1777 : nop
        mov dword ptr ds : [esi+0xCC], 0
        public_6ef1781 : nop
        lea eax, ds:[ebx+8]
        mov dword ptr ds : [esi+0x9C], eax
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+0xA0], edx
        movzx edi, word ptr ds : [ecx+0xC]
        test edi, edi
        jbe public_6ef17ab
        mov eax, dword ptr ds : [ecx+8]
        lea eax, ds:[eax+edi-1]
        xor edx, edx
        div edi
        imul eax, edi
        jmp public_6ef17ad
        public_6ef17ab : nop
        xor eax, eax
        public_6ef17ad : nop
        mov dword ptr ds : [esi+0xEC], eax
        cmp word ptr ds : [ecx], 1
        je public_6ef1821
        mov ecx, esi
        call public_6ef13d0
        test al, al
        jne public_6ef1810
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6ef17d0
        mov esi, offset public_6efc14c
        public_6ef17d0 : nop
        push esi
        lea ecx, ss:[esp+0x68]
/*FIXUP push offset public_6efe14c @0x6ef17d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe14c
        push ecx
        call public_6ef2910
        mov edx, dword ptr ds : [public_6efc004]
        push eax
        push 0x1E7
/*FIXUP push offset public_6efe070 @0x6ef17ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe070
        mov ecx, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef17f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x2054
        ret 8
        public_6ef1810 : nop
        mov ecx, dword ptr ds : [esi+0xE0]
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [esi+0xF0], ecx
        jmp public_6ef186c
        public_6ef1821 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0xD8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov cx, word ptr ds : [ecx+0x10]
        mov word ptr ds : [edx+0x10], cx
        mov eax, dword ptr ds : [esi+0xE0]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0
        fild qword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0xF0], eax
        fmul dword ptr ds : [esi+0xC4]
        call public_6ef4680
        public_6ef186c : nop
        xor edx, edx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], edx
        lea edi, ds:[esi+0xB8]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], edx
        xor ebx, ebx
        cmp eax, ebx
        lea ebp, ds:[esi+0xD8]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x1C], 0x14
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x20], 0x100C0
        je public_6ef18b6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], ebx
        public_6ef18b6 : nop
        mov eax, dword ptr ss : [esp+0x2068]
        mov edx, dword ptr ds : [eax]
        push ebx
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        cmp eax, ebx
        jge public_6ef191a
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        jne public_6ef18da
        mov ecx, offset public_6efc14c
        public_6ef18da : nop
        push eax
        push ecx
        lea edx, ss:[esp+0x6C]
/*FIXUP push offset public_6efe110 @0x6ef18e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe110
        push edx
        call public_6ef2910
        push eax
        mov eax, dword ptr ds : [public_6efc004]
        push 0x208
/*FIXUP push offset public_6efe070 @0x6ef18f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe070
        mov ecx, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef1900*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x24
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x2054
        ret 8
        public_6ef191a : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 0x12
        push ebp
        push eax
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0xBC], edx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov edx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov ecx, dword ptr ds : [esi+0x8C]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edi
        call dword ptr ds : [eax+0x40]
        pop edi
        mov dword ptr ds : [esi+0x80], 1
        mov byte ptr ds : [esi+0x84], 1
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x2054
        ret 8
        UNREACHABLE_TRAP(0x6ef1560)
    }
}

#undef public_6ef15d5
#undef public_6ef15e1
#undef public_6ef1638
#undef public_6ef1690
#undef public_6ef16cc
#undef public_6ef16d0
#undef public_6ef16d6
#undef public_6ef16e0
#undef public_6ef16e9
#undef public_6ef16f2
#undef public_6ef1705
#undef public_6ef172a
#undef public_6ef1734
#undef public_6ef174b
#undef public_6ef175a
#undef public_6ef175f
#undef public_6ef1777
#undef public_6ef1781
#undef public_6ef17ab
#undef public_6ef17ad
#undef public_6ef17d0
#undef public_6ef1810
#undef public_6ef1821
#undef public_6ef186c
#undef public_6ef18b6
#undef public_6ef18da
#undef public_6ef191a
