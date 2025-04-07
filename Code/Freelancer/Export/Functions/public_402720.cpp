#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402720);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);

#define public_402735 _public_402735
#define public_402763 _public_402763
#define public_402769 _public_402769
#define public_40278c _public_40278c

PROC_DECLARE(0x402720, internal_402720, public_402720);
extern "C" NAKED register_t __cdecl internal_402720()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        cmp ecx, eax
        mov dword ptr ss : [esp+4], eax
        je public_40278c
        push esi
        push edi
        public_402735 : nop
        mov esi, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [public_5c6df0]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        test ecx, ecx
        jle public_402763
        lea eax, ds:[ecx-1]
        public_402763 : nop
        cmp edi, eax
        jle public_402769
        mov edi, eax
        public_402769 : nop
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push esi
        push eax
        call dword ptr ds : [ecx+0x28]
        lea ecx, ss:[esp+0xC]
        call public_52afa0
        mov eax, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [ebx+4], eax
        jne public_402735
        pop edi
        pop esi
        public_40278c : nop
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x402720)
    }
}

#undef public_402735
#undef public_402763
#undef public_402769
#undef public_40278c
