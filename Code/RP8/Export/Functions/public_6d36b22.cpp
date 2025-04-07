#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d36b22);

#define public_6d36b36 _public_6d36b36
#define public_6d36b3c _public_6d36b3c
#define public_6d36b63 _public_6d36b63
#define public_6d36b73 _public_6d36b73
#define public_6d36b83 _public_6d36b83

PROC_DECLARE(0x6d36b22, internal_6d36b22, public_6d36b22);
extern "C" NAKED register_t __cdecl internal_6d36b22()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_6d36b36
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_6d36b3c
        public_6d36b36 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        public_6d36b3c : nop
        mov edx, dword ptr ds : [esi+4]
        cmp edx, edi
        je public_6d36b63
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_6d36b63
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, edi
        je public_6d36b63
        test byte ptr ds : [esi], 1
        jne public_6d36b63
        push ebx
        mov ebx, dword ptr ds : [eax]
        push edi
        push edx
        push edi
        push edi
        push ecx
        push eax
        call dword ptr ds : [ebx+0x70]
        pop ebx
        public_6d36b63 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_6d36b73
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], edi
        public_6d36b73 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, edi
        je public_6d36b83
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], edi
        public_6d36b83 : nop
        mov dword ptr ds : [esi+4], edi
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d36b22)
    }
}

#undef public_6d36b36
#undef public_6d36b3c
#undef public_6d36b63
#undef public_6d36b73
#undef public_6d36b83
