#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecebc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfb80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed03d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed12c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2860);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15e20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaeeb);

#define public_6ec6c84 _public_6ec6c84
#define public_6ec6c88 _public_6ec6c88
#define public_6ec6ca0 _public_6ec6ca0
#define public_6ec6caa _public_6ec6caa
#define public_6ec6cb0 _public_6ec6cb0
#define public_6ec6cd0 _public_6ec6cd0
#define public_6ec6cd4 _public_6ec6cd4
#define public_6ec6cd9 _public_6ec6cd9
#define public_6ec6ce1 _public_6ec6ce1
#define public_6ec6cf6 _public_6ec6cf6
#define public_6ec6d00 _public_6ec6d00
#define public_6ec6d20 _public_6ec6d20
#define public_6ec6d24 _public_6ec6d24
#define public_6ec6d29 _public_6ec6d29
#define public_6ec6d31 _public_6ec6d31
#define public_6ec6d51 _public_6ec6d51
#define public_6ec6e8b _public_6ec6e8b
#define public_6ec6ee9 _public_6ec6ee9
#define public_6ec6f04 _public_6ec6f04
#define public_6ec6f21 _public_6ec6f21
#define public_6ec6f28 _public_6ec6f28
#define public_6ec6f2d _public_6ec6f2d
#define public_6ec6f52 _public_6ec6f52
#define public_6ec6f6a _public_6ec6f6a
#define public_6ec6f8c _public_6ec6f8c
#define public_6ec6fa4 _public_6ec6fa4

PROC_DECLARE(0x6ec6c40, internal_6ec6c40, public_6ec6c40);
extern "C" NAKED register_t __cdecl internal_6ec6c40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaeeb @0x6ec6c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaeeb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x108
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [eax+0xBC]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+4], ecx
        je public_6ec6fa4
        push ebx
        push esi
        push edi
        xor ebx, ebx
        jmp public_6ec6c88
        public_6ec6c84 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ec6c88 : nop
        mov edx, dword ptr ds : [ecx+0xF4]
        mov edi, dword ptr ds : [ecx+0xF8]
        cmp edx, edi
        mov dword ptr ss : [esp+0x14], edx
        je public_6ec6f8c
        public_6ec6ca0 : nop
        cmp edx, 0xFFFFFFF8
        jne public_6ec6caa
        mov eax, dword ptr ss : [ebp+0xC]
        jmp public_6ec6ce1
        public_6ec6caa : nop
        lea esi, ds:[edx+8]
        lea eax, ss:[ebp+0x10]
        public_6ec6cb0 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ec6cd4
        cmp cl, bl
        je public_6ec6cd0
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ec6cd4
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6ec6cb0
        public_6ec6cd0 : nop
        xor eax, eax
        jmp public_6ec6cd9
        public_6ec6cd4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec6cd9 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ec6ce1 : nop
        cmp eax, ebx
        sete al
        cmp al, bl
        jne public_6ec6d51
        lea esi, ds:[ecx+0xC]
        cmp esi, ebx
        jne public_6ec6cf6
        mov eax, dword ptr ss : [ebp+0xC]
        jmp public_6ec6d31
        public_6ec6cf6 : nop
        lea eax, ss:[ebp+0x10]
        lea esp, ss:[esp]
        public_6ec6d00 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ec6d24
        cmp cl, bl
        je public_6ec6d20
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ec6d24
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6ec6d00
        public_6ec6d20 : nop
        xor eax, eax
        jmp public_6ec6d29
        public_6ec6d24 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec6d29 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ec6d31 : nop
        cmp eax, ebx
        sete al
        cmp al, bl
        jne public_6ec6d51
        add edx, 0x88
        cmp edx, edi
        mov dword ptr ss : [esp+0x14], edx
        jne public_6ec6ca0
        jmp public_6ec6f8c
        public_6ec6d51 : nop
        lea eax, ds:[ecx+8]
        mov edx, dword ptr ds : [eax+0x68]
        mov esi, eax
        mov ecx, 0xD
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+0x54], ecx
        lea esi, ds:[eax+0x38]
        mov ecx, 0xC
        lea edi, ss:[esp+0x58]
        rep movsd
        mov dword ptr ss : [esp+0x88], edx
        mov dl, byte ptr ds : [eax+0xA4]
        lea esi, ds:[eax+0x6C]
        mov ecx, 0xD
        lea edi, ss:[esp+0x8C]
        rep movsd
        mov ecx, dword ptr ds : [eax+0xA0]
        mov dword ptr ss : [esp+0xC0], ecx
        mov cl, byte ptr ds : [eax+0xA5]
        mov byte ptr ss : [esp+0xC5], cl
        mov byte ptr ss : [esp+0xC4], dl
        mov edx, dword ptr ds : [eax+0xDC]
        lea esi, ds:[eax+0xA8]
        mov ecx, 0xD
        lea edi, ss:[esp+0xC8]
        rep movsd
        mov ecx, dword ptr ds : [eax+0xE0]
        mov dword ptr ss : [esp+0xFC], edx
        mov edx, dword ptr ds : [eax+0xE4]
        add eax, 0xE8
        mov dword ptr ss : [esp+0x100], ecx
        push eax
        lea ecx, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0x108], edx
        call public_6ecfb80
        mov eax, dword ptr ss : [esp+0x10C]
        push eax
        mov eax, dword ptr ss : [esp+0x114]
        push eax
        push eax
        mov dword ptr ss : [esp+0x12C], ebx
        call public_6ed2860
        mov ecx, dword ptr ss : [esp+0x11C]
        add esp, 0xC
        push ecx
        mov esi, eax
        push esi
        lea ecx, ss:[esp+0x110]
        call public_6ed03d0
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push 1
        push esi
        lea ecx, ss:[esp+0x114]
        mov dword ptr ss : [esp+0x11C], esi
        call public_6ed12c0
        lea esi, ss:[ebp+0xE0]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6ec6f28
        mov esi, dword ptr ds : [esi]
/*FIXUP push offset public_6fb5b4c @0x6ec6e6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5b4c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        cmp esi, eax
        je public_6ec6e8b
        mov eax, dword ptr ss : [esp+0x10C]
        mov dword ptr ds : [eax+0x54], esi
        public_6ec6e8b : nop
        lea ecx, ss:[ebp+0x40]
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        call public_6f15b90
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+0xE4]
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        lea ecx, ss:[ebp+0xA8]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[ebp+0xD8]
        push eax
        call public_6ecebc0
        mov al, byte ptr ss : [ebp+0xDD]
        add esp, 0x14
        cmp al, bl
        je public_6ec6f21
        mov ecx, dword ptr ss : [esp+0x10C]
        lea esi, ss:[ebp+0x78]
        cmp esi, ebx
        lea edx, ds:[ecx+4]
        jne public_6ec6ee9
        mov dword ptr ds : [edx], ebx
        mov byte ptr ds : [edx+4], bl
        lea edx, ss:[esp+0x20]
        push edx
        jmp public_6ec6f2d
        public_6ec6ee9 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[edx+4]
        jb public_6ec6f04
        mov eax, 0x2F
        public_6ec6f04 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [eax+ebp], bl
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], eax
        public_6ec6f21 : nop
        lea edx, ss:[esp+0x20]
        push edx
        jmp public_6ec6f2d
        public_6ec6f28 : nop
        lea eax, ss:[esp+0x20]
        push eax
        public_6ec6f2d : nop
        mov ecx, dword ptr ss : [ebp+4]
        call public_6f15e20
        mov edi, dword ptr ss : [esp+0x110]
        mov esi, dword ptr ss : [esp+0x10C]
        cmp esi, edi
        mov dword ptr ss : [esp+0x120], 0xFFFFFFFF
        je public_6ec6f6a
        public_6ec6f52 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0x88
        cmp esi, edi
        jne public_6ec6f52
        mov esi, dword ptr ss : [esp+0x10C]
        public_6ec6f6a : nop
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ss : [esp+0x10C], ebx
        mov dword ptr ss : [esp+0x110], ebx
        mov dword ptr ss : [esp+0x114], ebx
        public_6ec6f8c : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [eax+0xBC]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6ec6c84
        pop edi
        pop esi
        pop ebx
        public_6ec6fa4 : nop
        mov ecx, dword ptr ss : [esp+0x10C]
        mov al, 1
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x6ec6c40)
    }
}

#undef public_6ec6c84
#undef public_6ec6c88
#undef public_6ec6ca0
#undef public_6ec6caa
#undef public_6ec6cb0
#undef public_6ec6cd0
#undef public_6ec6cd4
#undef public_6ec6cd9
#undef public_6ec6ce1
#undef public_6ec6cf6
#undef public_6ec6d00
#undef public_6ec6d20
#undef public_6ec6d24
#undef public_6ec6d29
#undef public_6ec6d31
#undef public_6ec6d51
#undef public_6ec6e8b
#undef public_6ec6ee9
#undef public_6ec6f04
#undef public_6ec6f21
#undef public_6ec6f28
#undef public_6ec6f2d
#undef public_6ec6f52
#undef public_6ec6f6a
#undef public_6ec6f8c
#undef public_6ec6fa4
