#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9030);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);

#define public_62e904b _public_62e904b
#define public_62e904d _public_62e904d
#define public_62e9081 _public_62e9081
#define public_62e908c _public_62e908c

PROC_DECLARE(0x62e9030, internal_62e9030, public_62e9030);
extern "C" NAKED register_t __cdecl internal_62e9030()
{
    __asm
    {
        push ecx
        push esi
        push 1
        mov esi, ecx
        call public_62e91d0
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e904b
        lea ecx, ds:[eax-8]
        jmp public_62e904d
        public_62e904b : nop
        xor ecx, ecx
        public_62e904d : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0x58]
        test eax, eax
        jne public_62e908c
        mov edx, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [esp+4], edx
        je public_62e908c
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9081
        add eax, 0xFFFFFFF8
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        pop esi
        pop ecx
        ret 4
        public_62e9081 : nop
        xor eax, eax
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        public_62e908c : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62e9030)
    }
}

#undef public_62e904b
#undef public_62e904d
#undef public_62e9081
#undef public_62e908c
