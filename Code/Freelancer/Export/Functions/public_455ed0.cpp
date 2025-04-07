#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455ed0);

#define public_455eed _public_455eed
#define public_455f01 _public_455f01
#define public_455f0d _public_455f0d
#define public_455f2e _public_455f2e
#define public_455f35 _public_455f35

PROC_DECLARE(0x455ed0, internal_455ed0, public_455ed0);
extern "C" NAKED register_t __cdecl internal_455ed0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], 0
        jne public_455eed
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_455eed : nop
        mov eax, dword ptr ds : [edi+0x128]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_455f35
        mov ebp, dword ptr ds : [public_5c6d24]
        public_455f01 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_455f0d
        mov eax, dword ptr ds : [public_5c7078]
        public_455f0d : nop
        push ebx
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_455f2e
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x128]
        jne public_455f01
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 4
        public_455f2e : nop
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        public_455f35 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x455ed0)
    }
}

#undef public_455eed
#undef public_455f01
#undef public_455f0d
#undef public_455f2e
#undef public_455f35
