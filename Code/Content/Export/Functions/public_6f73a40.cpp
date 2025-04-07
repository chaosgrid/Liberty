#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f73a40);

#define public_6f73a56 _public_6f73a56
#define public_6f73a64 _public_6f73a64
#define public_6f73a6b _public_6f73a6b
#define public_6f73a77 _public_6f73a77
#define public_6f73a87 _public_6f73a87
#define public_6f73a8b _public_6f73a8b
#define public_6f73a90 _public_6f73a90
#define public_6f73a92 _public_6f73a92
#define public_6f73aa6 _public_6f73aa6
#define public_6f73aad _public_6f73aad
#define public_6f73ab7 _public_6f73ab7

PROC_DECLARE(0x6f73a40, internal_6f73a40, public_6f73a40);
extern "C" NAKED register_t __cdecl internal_6f73a40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xBC]
        push esi
        mov esi, dword ptr ds : [ecx+0xC0]
        cmp eax, esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_6f73a6b
        public_6f73a56 : nop
        mov edx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx+0x10]
        test edx, edx
        je public_6f73a64
        cmp dword ptr ds : [edx+4], edi
        je public_6f73a87
        public_6f73a64 : nop
        add eax, 4
        cmp eax, esi
        jne public_6f73a56
        public_6f73a6b : nop
        mov edx, dword ptr ds : [ecx+0xE0]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6f73a90
        public_6f73a77 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp edi, dword ptr ds : [esi+4]
        je public_6f73a8b
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6f73a77
        jmp public_6f73a90
        public_6f73a87 : nop
        mov eax, edx
        jmp public_6f73a92
        public_6f73a8b : nop
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f73a92
        public_6f73a90 : nop
        xor eax, eax
        public_6f73a92 : nop
        test eax, eax
        jne public_6f73ab7
        mov edx, dword ptr ds : [ecx+0x8C]
        mov ecx, dword ptr ds : [ecx+0x90]
        cmp edx, ecx
        je public_6f73ab7
        public_6f73aa6 : nop
        cmp dword ptr ds : [edx+4], edi
        jne public_6f73aad
        mov eax, edx
        public_6f73aad : nop
        add edx, 0x548
        cmp edx, ecx
        jne public_6f73aa6
        public_6f73ab7 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f73a40)
    }
}

#undef public_6f73a56
#undef public_6f73a64
#undef public_6f73a6b
#undef public_6f73a77
#undef public_6f73a87
#undef public_6f73a8b
#undef public_6f73a90
#undef public_6f73a92
#undef public_6f73aa6
#undef public_6f73aad
#undef public_6f73ab7
