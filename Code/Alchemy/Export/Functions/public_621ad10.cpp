#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624867b);

#define public_621ad45 _public_621ad45
#define public_621ad69 _public_621ad69
#define public_621ad6d _public_621ad6d
#define public_621ad72 _public_621ad72
#define public_621ae39 _public_621ae39
#define public_621ae3b _public_621ae3b
#define public_621ae54 _public_621ae54
#define public_621ae75 _public_621ae75
#define public_621ae86 _public_621ae86
#define public_621ae93 _public_621ae93
#define public_621ae99 _public_621ae99
#define public_621ae9b _public_621ae9b

PROC_DECLARE(0x621ad10, internal_621ad10, public_621ad10);
extern "C" NAKED register_t __cdecl internal_621ad10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624867b @0x621ad18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624867b
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
        jne public_621ae86
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax+8]
        public_621ad45 : nop
        mov cl, byte ptr ds : [esi]
        mov dl, byte ptr ds : [edi]
        mov al, cl
        cmp cl, dl
        jne public_621ad6d
        cmp al, bl
        je public_621ad69
        mov dl, byte ptr ds : [esi+1]
        mov cl, byte ptr ds : [edi+1]
        mov al, dl
        cmp dl, cl
        jne public_621ad6d
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_621ad45
        public_621ad69 : nop
        xor eax, eax
        jmp public_621ad72
        public_621ad6d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621ad72 : nop
        cmp eax, ebx
        jne public_621ae86
        push 0x104
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_621ae39
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        lea ebp, ds:[esi+0xCC]
        mov dword ptr ds : [esi+0x98], ebx
        mov ecx, ebp
        mov byte ptr ds : [esi+0x96], 1
        call public_6206c70
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi], offset public_624d0a8
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624d000
        mov dword ptr ds : [esi], offset public_624cfa0
        mov dword ptr ds : [edi+0x100], 1
        jmp public_621ae3b
        public_621ae39 : nop
        xor edi, edi
        public_621ae3b : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_621ae54
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_621ae9b
        public_621ae54 : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_621ae93
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, ebx
        je public_621ae75
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_621ae75 : nop
        push edi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [edx], ebx
        jmp public_621ae99
        public_621ae86 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], ebx
        jmp public_621ae9b
        public_621ae93 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], edi
        public_621ae99 : nop
        mov eax, ebp
        public_621ae9b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x621ad10)
    }
}

#undef public_621ad45
#undef public_621ad69
#undef public_621ad6d
#undef public_621ad72
#undef public_621ae39
#undef public_621ae3b
#undef public_621ae54
#undef public_621ae75
#undef public_621ae86
#undef public_621ae93
#undef public_621ae99
#undef public_621ae9b
