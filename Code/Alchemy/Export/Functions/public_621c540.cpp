#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248823);

#define public_621c575 _public_621c575
#define public_621c599 _public_621c599
#define public_621c59d _public_621c59d
#define public_621c5a2 _public_621c5a2
#define public_621c676 _public_621c676
#define public_621c678 _public_621c678
#define public_621c691 _public_621c691
#define public_621c6c4 _public_621c6c4
#define public_621c6dc _public_621c6dc
#define public_621c6ed _public_621c6ed
#define public_621c6fa _public_621c6fa
#define public_621c700 _public_621c700
#define public_621c702 _public_621c702

PROC_DECLARE(0x621c540, internal_621c540, public_621c540);
extern "C" NAKED register_t __cdecl internal_621c540()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248823 @0x621c548*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248823
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
        jne public_621c6ed
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax+8]
        public_621c575 : nop
        mov cl, byte ptr ds : [esi]
        mov dl, byte ptr ds : [edi]
        mov al, cl
        cmp cl, dl
        jne public_621c59d
        cmp al, bl
        je public_621c599
        mov dl, byte ptr ds : [esi+1]
        mov cl, byte ptr ds : [edi+1]
        mov al, dl
        cmp dl, cl
        jne public_621c59d
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_621c575
        public_621c599 : nop
        xor eax, eax
        jmp public_621c5a2
        public_621c59d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621c5a2 : nop
        cmp eax, ebx
        jne public_621c6ed
        push 0x10C
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_621c676
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
        mov dword ptr ds : [esi], offset public_624d3c8
        mov dword ptr ds : [esi+0x100], ebx
        mov dword ptr ds : [esi+0xFC], ebx
        mov dword ptr ds : [esi+0xF8], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624d320
        mov dword ptr ds : [esi], offset public_624d2c8
        mov dword ptr ds : [edi+0x108], 1
        jmp public_621c678
        public_621c676 : nop
        xor edi, edi
        public_621c678 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_621c691
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_621c702
        public_621c691 : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_621c6fa
        mov dword ptr ss : [esp+0x24], esi
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+0x18], 1
        cmp eax, ebx
        je public_621c6c4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x98], ebx
        public_621c6c4 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        cmp eax, ebx
        je public_621c6dc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_621c6dc : nop
        push edi
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        jmp public_621c700
        public_621c6ed : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], ebx
        jmp public_621c702
        public_621c6fa : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], edi
        public_621c700 : nop
        mov eax, ebp
        public_621c702 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x621c540)
    }
}

#undef public_621c575
#undef public_621c599
#undef public_621c59d
#undef public_621c5a2
#undef public_621c676
#undef public_621c678
#undef public_621c691
#undef public_621c6c4
#undef public_621c6dc
#undef public_621c6ed
#undef public_621c6fa
#undef public_621c700
#undef public_621c702
