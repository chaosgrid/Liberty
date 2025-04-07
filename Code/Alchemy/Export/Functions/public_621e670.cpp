#include "Alchemy-PCH.h"


#define public_621e689 _public_621e689
#define public_621e6b0 _public_621e6b0
#define public_621e6bf _public_621e6bf
#define public_621e6d3 _public_621e6d3

PROC_DECLARE(0x621e670, internal_621e670, public_621e670);
extern "C" NAKED register_t __cdecl internal_621e670()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ds : [ecx+0x44], edi
        mov esi, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, esi
        cmp eax, esi
        je public_621e6b0
        push ebp
        public_621e689 : nop
        mov edi, eax
        mov ebx, edx
        add eax, 0x10
        add edx, 0x10
        mov ebp, dword ptr ds : [edi]
        cmp eax, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edi
        jne public_621e689
        xor edi, edi
        pop ebp
        public_621e6b0 : nop
        mov dword ptr ds : [ecx+0x1C], edx
        mov esi, dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, esi
        cmp eax, esi
        je public_621e6d3
        public_621e6bf : nop
        mov ebx, dword ptr ds : [eax]
        add eax, 8
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [eax-4]
        mov dword ptr ds : [edx+4], ebx
        add edx, 8
        cmp eax, esi
        jne public_621e6bf
        public_621e6d3 : nop
        mov dword ptr ds : [ecx+0x2C], edx
        mov dword ptr ds : [ecx+0x34], edi
        mov dword ptr ds : [ecx+0x38], edi
        mov dword ptr ds : [ecx+0x3C], edi
        mov dword ptr ds : [ecx+0x40], edi
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x621e670)
    }
}

#undef public_621e689
#undef public_621e6b0
#undef public_621e6bf
#undef public_621e6d3
