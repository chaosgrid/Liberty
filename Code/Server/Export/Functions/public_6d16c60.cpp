#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16c60);
CLANG_FORWARD_PROC_SYMBOL(public_6d17080);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16c67 _public_6d16c67
#define public_6d16c70 _public_6d16c70
#define public_6d16c73 _public_6d16c73
#define public_6d16c91 _public_6d16c91
#define public_6d16c9c _public_6d16c9c
#define public_6d16c9e _public_6d16c9e
#define public_6d16cb6 _public_6d16cb6
#define public_6d16cc0 _public_6d16cc0
#define public_6d16ce9 _public_6d16ce9
#define public_6d16cee _public_6d16cee
#define public_6d16d04 _public_6d16d04
#define public_6d16d0c _public_6d16d0c
#define public_6d16d17 _public_6d16d17
#define public_6d16d2d _public_6d16d2d
#define public_6d16d36 _public_6d16d36

PROC_DECLARE(0x6d16c60, internal_6d16c60, public_6d16c60);
extern "C" NAKED register_t __cdecl internal_6d16c60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        xor ebp, ebp
        public_6d16c67 : nop
        test ebp, ebp
        jne public_6d16c70
        mov ebp, dword ptr ds : [ebx+8]
        jmp public_6d16c73
        public_6d16c70 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6d16c73 : nop
        test ebp, ebp
        je public_6d16d36
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d16c67
        push edi
        xor edi, edi
        public_6d16c91 : nop
        test edi, edi
        jne public_6d16c9c
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [edx+4]
        jmp public_6d16c9e
        public_6d16c9c : nop
        mov edi, dword ptr ds : [edi]
        public_6d16c9e : nop
        test edi, edi
        je public_6d16cc0
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov ecx, dword ptr ds : [esi+4]
        je public_6d16cb6
        test ecx, ecx
        je public_6d16cb6
        cmp ecx, eax
        jne public_6d16c91
        public_6d16cb6 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        jmp public_6d16c91
        public_6d16cc0 : nop
        mov ecx, esi
        call public_6d17080
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp eax, ebp
        pop edi
        jne public_6d16cee
        mov eax, dword ptr ss : [ebp]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [ebx+8], eax
        jne public_6d16ce9
        mov dword ptr ds : [ebx+0xC], ecx
        jmp public_6d16d17
        public_6d16ce9 : nop
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d16d17
        public_6d16cee : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ebp
        jne public_6d16d0c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6d16d04
        mov dword ptr ds : [ebx+8], eax
        jmp public_6d16d17
        public_6d16d04 : nop
        mov dword ptr ds : [eax], 0
        jmp public_6d16d17
        public_6d16d0c : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+4], eax
        public_6d16d17 : nop
        mov al, byte ptr ds : [ebx+0x10]
        test al, al
        je public_6d16d2d
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp], eax
        pop esi
        mov dword ptr ds : [ebx+0x14], ebp
        pop ebp
        pop ebx
        ret 4
        public_6d16d2d : nop
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d16d36 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d16c60)
    }
}

#undef public_6d16c67
#undef public_6d16c70
#undef public_6d16c73
#undef public_6d16c91
#undef public_6d16c9c
#undef public_6d16c9e
#undef public_6d16cb6
#undef public_6d16cc0
#undef public_6d16ce9
#undef public_6d16cee
#undef public_6d16d04
#undef public_6d16d0c
#undef public_6d16d17
#undef public_6d16d2d
#undef public_6d16d36
