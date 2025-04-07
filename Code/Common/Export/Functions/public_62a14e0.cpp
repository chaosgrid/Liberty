#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a06b0);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62a14f7 _public_62a14f7
#define public_62a151f _public_62a151f
#define public_62a1530 _public_62a1530

PROC_DECLARE(0x62a14e0, internal_62a14e0, public_62a14e0);
extern "C" NAKED register_t __cdecl internal_62a14e0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edi]
        xor esi, esi
        cmp eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_62a1530
        mov ebx, dword ptr ss : [esp+0x14]
        public_62a14f7 : nop
        test esi, esi
        jne public_62a1530
        mov ecx, dword ptr ds : [eax+0x10]
        call public_62a06b0
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx]
        jne public_62a151f
        mov ecx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx+0x14]
        cmp eax, 2
        je public_62a151f
        cmp eax, 3
        je public_62a151f
        mov esi, ecx
        public_62a151f : nop
        lea ecx, ss:[esp+0xC]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_62a14f7
        public_62a1530 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a14e0)
    }
}

#undef public_62a14f7
#undef public_62a151f
#undef public_62a1530
