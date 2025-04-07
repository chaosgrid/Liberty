#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247ffb);

#define public_6213017 _public_6213017
#define public_6213037 _public_6213037
#define public_621303b _public_621303b
#define public_6213040 _public_6213040
#define public_621310a _public_621310a
#define public_621310c _public_621310c
#define public_6213125 _public_6213125
#define public_6213146 _public_6213146
#define public_6213157 _public_6213157
#define public_6213164 _public_6213164
#define public_621316a _public_621316a
#define public_621316c _public_621316c

PROC_DECLARE(0x6212fe0, internal_6212fe0, public_6212fe0);
extern "C" NAKED register_t __cdecl internal_6212fe0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247ffb @0x6212fe8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247ffb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        xor ecx, ecx
        mov eax, dword ptr ss : [ebp]
        push esi
        cmp eax, 8
        push edi
        jne public_6213157
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax+8]
        public_6213017 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_621303b
        cmp al, bl
        je public_6213037
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_621303b
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6213017
        public_6213037 : nop
        xor eax, eax
        jmp public_6213040
        public_621303b : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6213040 : nop
        cmp eax, ebx
        jne public_6213157
        push 0xE4
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_621310a
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov ecx, 1
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], cl
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xC8], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi], offset public_624c698
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624c5f0
        mov dword ptr ds : [esi], offset public_624c590
        mov dword ptr ds : [edi+0xE0], ecx
        jmp public_621310c
        public_621310a : nop
        xor edi, edi
        public_621310c : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6213125
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_621316c
        public_6213125 : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_6213164
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, ebx
        je public_6213146
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6213146 : nop
        push edi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [edx], ebx
        jmp public_621316a
        public_6213157 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        jmp public_621316c
        public_6213164 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], edi
        public_621316a : nop
        mov eax, ebp
        public_621316c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6212fe0)
    }
}

#undef public_6213017
#undef public_6213037
#undef public_621303b
#undef public_6213040
#undef public_621310a
#undef public_621310c
#undef public_6213125
#undef public_6213146
#undef public_6213157
#undef public_6213164
#undef public_621316a
#undef public_621316c
