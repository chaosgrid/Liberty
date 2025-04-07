#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_533100);

#define public_533126 _public_533126
#define public_533128 _public_533128
#define public_533145 _public_533145
#define public_533153 _public_533153
#define public_533159 _public_533159

PROC_DECLARE(0x533100, internal_533100, public_533100);
extern "C" NAKED register_t __cdecl internal_533100()
{
    __asm
    {
        push esi
        mov esi, ecx
        test esi, esi
        je public_533126
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_533126
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533126
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_533128
        public_533126 : nop
        xor eax, eax
        public_533128 : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov edx, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_533153
        public_533145 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [esi+4], eax
        je public_533159
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_533145
        public_533153 : nop
        xor eax, eax
        pop esi
        ret 4
        public_533159 : nop
        mov eax, dword ptr ds : [ecx+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x533100)
    }
}

#undef public_533126
#undef public_533128
#undef public_533145
#undef public_533153
#undef public_533159
