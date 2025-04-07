#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71440);

#define public_6b71466 _public_6b71466
#define public_6b71471 _public_6b71471
#define public_6b71477 _public_6b71477
#define public_6b71487 _public_6b71487

PROC_DECLARE(0x6b71440, internal_6b71440, public_6b71440);
extern "C" NAKED register_t __cdecl internal_6b71440()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6b79014]
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        cmp dword ptr ds : [esi+4], edi
        je public_6b71471
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_6b71466
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        public_6b71466 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call ebx
        mov dword ptr ds : [esi+4], edi
        jmp public_6b71477
        public_6b71471 : nop
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        public_6b71477 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xFFFFFFFF
        je public_6b71487
        push eax
        call ebx
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6b71487 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b71440)
    }
}

#undef public_6b71466
#undef public_6b71471
#undef public_6b71477
#undef public_6b71487
