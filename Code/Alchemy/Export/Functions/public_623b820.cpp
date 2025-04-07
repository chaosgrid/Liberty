#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_6212e00);
CLANG_FORWARD_PROC_SYMBOL(public_62144a0);
CLANG_FORWARD_PROC_SYMBOL(public_62455b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a35a);

#define public_623b86e _public_623b86e
#define public_623b89f _public_623b89f
#define public_623b8a1 _public_623b8a1
#define public_623b8cc _public_623b8cc
#define public_623b8ce _public_623b8ce
#define public_623b905 _public_623b905
#define public_623b936 _public_623b936
#define public_623b938 _public_623b938
#define public_623b963 _public_623b963
#define public_623b965 _public_623b965

PROC_DECLARE(0x623b820, internal_623b820, public_623b820);
extern "C" NAKED register_t __cdecl internal_623b820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a35a @0x623b822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a35a
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
        call public_62455b0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [edi+0x6C], ebx
        mov dword ptr ds : [edi+0x70], ebx
        mov dword ptr ds : [edi], offset public_624f248
        mov eax, dword ptr ds : [edi+0x6C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 2
        je public_623b86e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x6C], ebx
        public_623b86e : nop
        push 0x20
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x24], 3
        je public_623b89f
        mov ecx, esi
        call public_6212db0
        mov dword ptr ds : [esi], offset public_624bac8
        mov dword ptr ds : [esi+0x1C], 1
        mov ebp, esi
        jmp public_623b8a1
        public_623b89f : nop
        xor ebp, ebp
        public_623b8a1 : nop
        mov dword ptr ss : [esp+0x10], ebx
        push 0x10
        mov byte ptr ss : [esp+0x28], 4
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 5
        je public_623b8cc
        mov ecx, eax
        call public_62144a0
        mov esi, eax
        jmp public_623b8ce
        public_623b8cc : nop
        xor esi, esi
        public_623b8ce : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        push esi
        mov byte ptr ss : [esp+0x2C], 4
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edi+0x6C], ebp
        mov ecx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x28], 2
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edi+0x70]
        cmp eax, ebx
        je public_623b905
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x70], ebx
        public_623b905 : nop
        push 0x20
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x24], 6
        je public_623b936
        mov ecx, esi
        call public_6212e00
        mov dword ptr ds : [esi], offset public_624bac8
        mov dword ptr ds : [esi+0x1C], 1
        mov ebp, esi
        jmp public_623b938
        public_623b936 : nop
        xor ebp, ebp
        public_623b938 : nop
        mov dword ptr ss : [esp+0x10], ebx
        push 0x10
        mov byte ptr ss : [esp+0x28], 7
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 8
        je public_623b963
        mov ecx, eax
        call public_62144a0
        mov esi, eax
        jmp public_623b965
        public_623b963 : nop
        xor esi, esi
        public_623b965 : nop
        mov eax, dword ptr ds : [esi]
        push 0x3F800000
        push esi
        mov byte ptr ss : [esp+0x2C], 7
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [edi+0x70], ebp
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
        UNREACHABLE_TRAP(0x623b820)
    }
}

#undef public_623b86e
#undef public_623b89f
#undef public_623b8a1
#undef public_623b8cc
#undef public_623b8ce
#undef public_623b905
#undef public_623b936
#undef public_623b938
#undef public_623b963
#undef public_623b965
