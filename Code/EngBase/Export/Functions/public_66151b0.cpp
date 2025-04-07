#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);
CLANG_FORWARD_PROC_SYMBOL(public_661a640);

#define public_66151ea _public_66151ea
#define public_66151f3 _public_66151f3
#define public_66151f7 _public_66151f7
#define public_661521e _public_661521e

PROC_DECLARE(0x66151b0, internal_66151b0, public_66151b0);
extern "C" NAKED register_t __cdecl internal_66151b0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        push edi
        lea ecx, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ds:[esi+0x14]
        xor edi, edi
        call public_6612e70
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_66151ea
        mov esi, dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], eax
        mov edx, dword ptr ds : [esi+8]
        cmp eax, edx
        jne public_66151f7
        public_66151ea : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_66151f3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        public_66151f7 : nop
        mov ebx, dword ptr ds : [ecx+0x10]
        lea edx, ds:[eax+0x10]
        cmp edx, ebx
        je public_661521e
        lea ecx, ss:[esp+0xC]
        call public_661a640
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_66151f3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_661521e : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, 1
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x66151b0)
    }
}

#undef public_66151ea
#undef public_66151f3
#undef public_66151f7
#undef public_661521e
