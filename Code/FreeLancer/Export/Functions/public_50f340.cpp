#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50f340);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_50f350 _public_50f350
#define public_50f365 _public_50f365
#define public_50f371 _public_50f371
#define public_50f37f _public_50f37f

PROC_DECLARE(0x50f340, internal_50f340, public_50f340);
extern "C" NAKED register_t __cdecl internal_50f340()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ds : [esi+4]
        cmp edi, eax
        je public_50f365
        mov edi, edi
        public_50f350 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add edi, 4
        add esp, 4
        cmp edi, eax
        jne public_50f350
        public_50f365 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        je public_50f37f
        public_50f371 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_50f371
        public_50f37f : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        xor edi, edi
        push ecx
        mov dword ptr ds : [esi+0x34], edi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x50f340)
    }
}

#undef public_50f350
#undef public_50f365
#undef public_50f371
#undef public_50f37f
