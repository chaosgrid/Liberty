#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d604e8);

#define public_6ce6dd0 _public_6ce6dd0
#define public_6ce6dea _public_6ce6dea
#define public_6ce6e02 _public_6ce6e02
#define public_6ce6e04 _public_6ce6e04
#define public_6ce6e36 _public_6ce6e36
#define public_6ce6e59 _public_6ce6e59
#define public_6ce6e5b _public_6ce6e5b
#define public_6ce6e6c _public_6ce6e6c
#define public_6ce6e7c _public_6ce6e7c
#define public_6ce6e86 _public_6ce6e86
#define public_6ce6e8e _public_6ce6e8e
#define public_6ce6e9e _public_6ce6e9e
#define public_6ce6ea2 _public_6ce6ea2
#define public_6ce6ee0 _public_6ce6ee0
#define public_6ce6f0a _public_6ce6f0a
#define public_6ce6f29 _public_6ce6f29
#define public_6ce6f42 _public_6ce6f42

PROC_DECLARE(0x6ce6d80, internal_6ce6d80, public_6ce6d80);
extern "C" NAKED register_t __cdecl internal_6ce6d80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d604e8 @0x6ce6d82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d604e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x24]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0xC], ebx
        je public_6ce6f42
        mov eax, dword ptr ds : [ebx-4]
        lea ecx, ds:[ebx-4]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6ce6f42
        cmp dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov dword ptr ss : [esp+8], ebp
        jne public_6ce6dd0
        mov dword ptr ss : [esp+0x40], ebp
        public_6ce6dd0 : nop
        push esi
        push edi
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov edi, dword ptr ss : [esp+0x44]
        je public_6ce6dea
        cmp dword ptr ss : [esp+0x48], ebp
        jne public_6ce6ea2
        public_6ce6dea : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ebp
        je public_6ce6e02
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce6e04
        public_6ce6e02 : nop
        xor eax, eax
        public_6ce6e04 : nop
        mov edx, dword ptr ss : [esp+0x40]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        push eax
        call dword ptr ds : [public_6d641cc]
        mov ebx, eax
        add esp, 4
        cmp ebx, ebp
        je public_6ce6e86
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x44], ebp
        je public_6ce6e7c
        public_6ce6e36 : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebp
        je public_6ce6e6c
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        cmp eax, ebp
        je public_6ce6e59
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6ce6e5b
        public_6ce6e59 : nop
        xor eax, eax
        public_6ce6e5b : nop
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d641c8]
        cmp eax, ebp
        jne public_6ce6e6c
        inc dword ptr ss : [esp+0x44]
        public_6ce6e6c : nop
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_6ce6e36
        cmp dword ptr ss : [esp+0x44], ebp
        jne public_6ce6e8e
        public_6ce6e7c : nop
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFC
        jmp public_6ce6e8e
        public_6ce6e86 : nop
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFE
        public_6ce6e8e : nop
        cmp dword ptr ss : [esp+0x48], ebp
        jne public_6ce6e9e
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6ce6f29
        public_6ce6e9e : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6ce6ea2 : nop
        mov dl, byte ptr ss : [esp+0x48]
        mov byte ptr ss : [esp+0x20], dl
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov eax, dword ptr ds : [ebx-4]
        lea ecx, ds:[ebx-4]
        mov dword ptr ss : [esp+0x38], ebp
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ds : [edi+4]
        mov dx, word ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], eax
        cmp esi, dword ptr ds : [edi+8]
        mov word ptr ss : [esp+0x1C], dx
        je public_6ce6f0a
        nop 
        lea esp, ss:[esp]
        public_6ce6ee0 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x40]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x4C], eax
        call public_6cecbd0
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_6ce6ee0
        public_6ce6f0a : nop
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x24]
        call public_6d0e7a0
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_6d5ffb0
        add esp, 4
        public_6ce6f29 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0xC
        public_6ce6f42 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0xC
        UNREACHABLE_TRAP(0x6ce6d80)
    }
}

#undef public_6ce6dd0
#undef public_6ce6dea
#undef public_6ce6e02
#undef public_6ce6e04
#undef public_6ce6e36
#undef public_6ce6e59
#undef public_6ce6e5b
#undef public_6ce6e6c
#undef public_6ce6e7c
#undef public_6ce6e86
#undef public_6ce6e8e
#undef public_6ce6e9e
#undef public_6ce6ea2
#undef public_6ce6ee0
#undef public_6ce6f0a
#undef public_6ce6f29
#undef public_6ce6f42
