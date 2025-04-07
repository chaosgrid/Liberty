#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212e00);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247f26);

#define public_621285b _public_621285b
#define public_621288b _public_621288b
#define public_621288d _public_621288d
#define public_62128bf _public_62128bf
#define public_62128c1 _public_62128c1

PROC_DECLARE(0x6212810, internal_6212810, public_6212810);
extern "C" NAKED register_t __cdecl internal_6212810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247f26 @0x6212812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247f26
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        call public_623f7b0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [edi+0x4C], ebx
        mov dword ptr ds : [edi], offset public_624c480
        mov eax, dword ptr ds : [edi+0x4C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x20], 1
        je public_621285b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x4C], ebx
        public_621285b : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebp
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x20], 2
        je public_621288b
        mov ecx, ebp
        call public_6212e00
        mov dword ptr ss : [ebp], offset public_624bac8
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_621288d
        public_621288b : nop
        xor ebp, ebp
        public_621288d : nop
        mov dword ptr ss : [esp+0x10], ebx
        push 0x10
        mov byte ptr ss : [esp+0x24], 3
        call public_624612c
        add esp, 4
        cmp eax, ebx
        je public_62128bf
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax], offset public_624bca0
        mov dword ptr ds : [eax+0xC], 1
        mov esi, eax
        jmp public_62128c1
        public_62128bf : nop
        xor esi, esi
        public_62128c1 : nop
        mov edx, dword ptr ds : [esi]
        push 0x42706666
        push esi
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edi+0x4C], ebp
        mov ecx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6212810)
    }
}

#undef public_621285b
#undef public_621288b
#undef public_621288d
#undef public_62128bf
#undef public_62128c1
