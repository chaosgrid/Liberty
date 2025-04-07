#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_6212e00);
CLANG_FORWARD_PROC_SYMBOL(public_62144a0);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a5ba);

#define public_623d2ee _public_623d2ee
#define public_623d31f _public_623d31f
#define public_623d321 _public_623d321
#define public_623d355 _public_623d355
#define public_623d357 _public_623d357
#define public_623d38a _public_623d38a
#define public_623d39a _public_623d39a
#define public_623d3cb _public_623d3cb
#define public_623d3cd _public_623d3cd
#define public_623d3f8 _public_623d3f8
#define public_623d3fa _public_623d3fa

PROC_DECLARE(0x623d2a0, internal_623d2a0, public_623d2a0);
extern "C" NAKED register_t __cdecl internal_623d2a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a5ba @0x623d2a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a5ba
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        call public_623f7b0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [edi+0x4C], ebx
        mov dword ptr ds : [edi+0x50], ebx
        mov dword ptr ds : [edi], offset public_624f4e0
        mov eax, dword ptr ds : [edi+0x4C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 2
        je public_623d2ee
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x4C], ebx
        public_623d2ee : nop
        push 0x20
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x24], 3
        je public_623d31f
        mov ecx, esi
        call public_6212db0
        mov dword ptr ds : [esi], offset public_624bac8
        mov dword ptr ds : [esi+0x1C], 1
        mov ebp, esi
        jmp public_623d321
        public_623d31f : nop
        xor ebp, ebp
        public_623d321 : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 4
        call public_6209fd0
        push 0x10
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 5
        je public_623d355
        mov ecx, eax
        call public_62144a0
        mov esi, eax
        jmp public_623d357
        public_623d355 : nop
        xor esi, esi
        public_623d357 : nop
        mov edx, dword ptr ds : [esi]
        push 0x3F800000
        push esi
        mov byte ptr ss : [esp+0x2C], 4
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x4C], ebp
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 2
        je public_623d38a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_623d38a : nop
        mov eax, dword ptr ds : [edi+0x50]
        cmp eax, ebx
        je public_623d39a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x50], ebx
        public_623d39a : nop
        push 0x20
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x24], 6
        je public_623d3cb
        mov ecx, esi
        call public_6212e00
        mov dword ptr ds : [esi], offset public_624bac8
        mov dword ptr ds : [esi+0x1C], 1
        mov ebp, esi
        jmp public_623d3cd
        public_623d3cb : nop
        xor ebp, ebp
        public_623d3cd : nop
        mov dword ptr ss : [esp+0x10], ebx
        push 0x10
        mov byte ptr ss : [esp+0x28], 7
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 8
        je public_623d3f8
        mov ecx, eax
        call public_62144a0
        mov esi, eax
        jmp public_623d3fa
        public_623d3f8 : nop
        xor esi, esi
        public_623d3fa : nop
        mov eax, dword ptr ds : [esi]
        push 0x41200000
        push esi
        mov byte ptr ss : [esp+0x2C], 7
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [edi+0x50], ebp
        mov edx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x28], 2
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x623d2a0)
    }
}

#undef public_623d2ee
#undef public_623d31f
#undef public_623d321
#undef public_623d355
#undef public_623d357
#undef public_623d38a
#undef public_623d39a
#undef public_623d3cb
#undef public_623d3cd
#undef public_623d3f8
#undef public_623d3fa
