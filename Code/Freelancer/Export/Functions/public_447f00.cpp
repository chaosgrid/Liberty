#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_447f00);

#define public_447f11 _public_447f11
#define public_447f28 _public_447f28
#define public_447f40 _public_447f40

PROC_DECLARE(0x447f00, internal_447f00, public_447f00);
extern "C" NAKED register_t __cdecl internal_447f00()
{
    __asm
    {
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x78]
        xor ebx, ebx
        test eax, eax
        jle public_447f40
        push ebp
        push esi
        xor ebp, ebp
        public_447f11 : nop
        mov esi, dword ptr ds : [edi+0xA0]
        mov eax, dword ptr ds : [esi+ebp]
        add esi, ebp
        test eax, eax
        je public_447f28
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x34]
        public_447f28 : nop
        mov byte ptr ds : [esi+0x3C], 1
        mov dword ptr ds : [esi+0x40], 0
        mov eax, dword ptr ds : [edi+0x78]
        inc ebx
        add ebp, 0x44
        cmp ebx, eax
        jl public_447f11
        pop esi
        pop ebp
        public_447f40 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x447f00)
    }
}

#undef public_447f11
#undef public_447f28
#undef public_447f40
