#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d95f30);
CLANG_FORWARD_PROC_SYMBOL(public_6d96380);
CLANG_FORWARD_PROC_SYMBOL(public_6d96410);
CLANG_FORWARD_PROC_SYMBOL(public_6d967b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d96b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d96bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6da17e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db27f3);

#define public_6d95f70 _public_6d95f70
#define public_6d95f91 _public_6d95f91
#define public_6d95f9a _public_6d95f9a
#define public_6d95fb0 _public_6d95fb0
#define public_6d95fc7 _public_6d95fc7
#define public_6d96014 _public_6d96014
#define public_6d96018 _public_6d96018
#define public_6d9603c _public_6d9603c

PROC_DECLARE(0x6d95f30, internal_6d95f30, public_6d95f30);
extern "C" NAKED register_t __cdecl internal_6d95f30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db27f3 @0x6d95f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db27f3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [ebp], offset public_6db3e18
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx]
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6d95fc7
        public_6d95f70 : nop
        mov esi, dword ptr ds : [eax+0x10]
        cmp esi, ebx
        je public_6d95fb0
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_6d95f9a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d95f91
        cmp cl, 0xFF
        je public_6d95f91
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d95f9a
        public_6d95f91 : nop
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d95f9a : nop
        push esi
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6db1dc2
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        public_6d95fb0 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [eax+0x10], ebx
        call public_6d96bc0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6d95f70
        public_6d95fc7 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+8]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d96014
        mov ecx, eax
        cmp eax, ecx
        jne public_6d96014
        cmp edi, edi
        jne public_6d96014
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_6d96b80
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6da17e0
        jmp public_6d9603c
        public_6d96014 : nop
        cmp eax, edi
        je public_6d9603c
        public_6d96018 : nop
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6d96380
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_6d967b0
        cmp dword ptr ss : [esp+0x14], edi
        jne public_6d96018
        public_6d9603c : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x3C], bl
        call public_6d96410
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6db1dc2
        add esp, 8
        mov ecx, ebp
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_6d8f4c0
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d95f30)
    }
}

#undef public_6d95f70
#undef public_6d95f91
#undef public_6d95f9a
#undef public_6d95fb0
#undef public_6d95fc7
#undef public_6d96014
#undef public_6d96018
#undef public_6d9603c
