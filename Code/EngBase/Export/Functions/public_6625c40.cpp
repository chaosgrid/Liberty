#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625c40);

#define public_6625c55 _public_6625c55
#define public_6625c65 _public_6625c65

PROC_DECLARE(0x6625c40, internal_6625c40, public_6625c40);
extern "C" NAKED register_t __cdecl internal_6625c40()
{
    __asm
    {
        push ebp
        push edi
        mov edi, ecx
        xor ebp, ebp
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        je public_6625c65
        push ebx
        mov ebx, dword ptr ds : [public_662902c]
        push esi
        public_6625c55 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call ebx
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_6625c55
        pop esi
        pop ebx
        public_6625c65 : nop
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi+4], ebp
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6625c40)
    }
}

#undef public_6625c55
#undef public_6625c65
