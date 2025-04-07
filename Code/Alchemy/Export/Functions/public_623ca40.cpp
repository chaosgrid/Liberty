#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a4b3);

#define public_623ca75 _public_623ca75
#define public_623ca99 _public_623ca99
#define public_623ca9d _public_623ca9d
#define public_623caa2 _public_623caa2
#define public_623cb6a _public_623cb6a
#define public_623cb6c _public_623cb6c
#define public_623cb85 _public_623cb85
#define public_623cbb8 _public_623cbb8
#define public_623cbd0 _public_623cbd0
#define public_623cbe1 _public_623cbe1
#define public_623cbee _public_623cbee
#define public_623cbf4 _public_623cbf4
#define public_623cbf6 _public_623cbf6

PROC_DECLARE(0x623ca40, internal_623ca40, public_623ca40);
extern "C" NAKED register_t __cdecl internal_623ca40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a4b3 @0x623ca48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a4b3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        push esi
        mov eax, dword ptr ss : [ebp]
        push edi
        cmp eax, 8
        jne public_623cbe1
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax+8]
        public_623ca75 : nop
        mov cl, byte ptr ds : [esi]
        mov dl, byte ptr ds : [edi]
        mov al, cl
        cmp cl, dl
        jne public_623ca9d
        cmp al, bl
        je public_623ca99
        mov dl, byte ptr ds : [esi+1]
        mov cl, byte ptr ds : [edi+1]
        mov al, dl
        cmp dl, cl
        jne public_623ca9d
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_623ca75
        public_623ca99 : nop
        xor eax, eax
        jmp public_623caa2
        public_623ca9d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623caa2 : nop
        cmp eax, ebx
        jne public_623cbe1
        push 0x104
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_623cb6a
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624d420
        mov ecx, esi
        call public_623fb80
        mov dword ptr ds : [esi+0x98], ebx
        lea ebp, ds:[esi+0xBC]
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov ecx, ebp
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov byte ptr ds : [esi+0xB8], 1
        call public_6206c70
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0xEC], ebx
        mov byte ptr ds : [esi+0x95], 1
        mov dword ptr ds : [esi], offset public_624f3a0
        mov dword ptr ds : [esi+0xF8], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624f2f8
        mov dword ptr ds : [esi], offset public_624f2a0
        mov dword ptr ds : [edi+0x100], 1
        jmp public_623cb6c
        public_623cb6a : nop
        xor edi, edi
        public_623cb6c : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_623cb85
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_623cbf6
        public_623cb85 : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_623cbee
        mov dword ptr ss : [esp+0x24], esi
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+0x18], 1
        cmp eax, ebx
        je public_623cbb8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x98], ebx
        public_623cbb8 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        cmp eax, ebx
        je public_623cbd0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_623cbd0 : nop
        push edi
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        jmp public_623cbf4
        public_623cbe1 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], ebx
        jmp public_623cbf6
        public_623cbee : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], edi
        public_623cbf4 : nop
        mov eax, ebp
        public_623cbf6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x623ca40)
    }
}

#undef public_623ca75
#undef public_623ca99
#undef public_623ca9d
#undef public_623caa2
#undef public_623cb6a
#undef public_623cb6c
#undef public_623cb85
#undef public_623cbb8
#undef public_623cbd0
#undef public_623cbe1
#undef public_623cbee
#undef public_623cbf4
#undef public_623cbf6
