#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_447f50);

#define public_447f65 _public_447f65
#define public_447f7a _public_447f7a
#define public_447f87 _public_447f87

PROC_DECLARE(0x447f50, internal_447f50, public_447f50);
extern "C" NAKED register_t __cdecl internal_447f50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x78]
        xor ebx, ebx
        test eax, eax
        jle public_447f87
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push edi
        xor edi, edi
        public_447f65 : nop
        mov eax, dword ptr ds : [esi+0xA0]
        add eax, edi
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_447f7a
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x18]
        public_447f7a : nop
        mov eax, dword ptr ds : [esi+0x78]
        inc ebx
        add edi, 0x44
        cmp ebx, eax
        jl public_447f65
        pop edi
        pop ebp
        public_447f87 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x447f50)
    }
}

#undef public_447f65
#undef public_447f7a
#undef public_447f87
