#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7330);
CLANG_FORWARD_PROC_SYMBOL(public_51cbb0);

#define public_51cbc4 _public_51cbc4
#define public_51cbc6 _public_51cbc6
#define public_51cbd3 _public_51cbd3
#define public_51cbe7 _public_51cbe7
#define public_51cbe9 _public_51cbe9

PROC_DECLARE(0x51cbb0, internal_51cbb0, public_51cbb0);
extern "C" NAKED register_t __cdecl internal_51cbb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        lea esi, ds:[ecx+0xC0]
        je public_51cbc4
        add eax, 8
        jmp public_51cbc6
        public_51cbc4 : nop
        xor eax, eax
        public_51cbc6 : nop
        cmp eax, dword ptr ds : [esi]
        je public_51cbd3
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_51cbd3 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        pop esi
        je public_51cbe7
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51cbe7
        cmp dword ptr ds : [eax+0x1C], 1
        je public_51cbe9
        public_51cbe7 : nop
        xor eax, eax
        public_51cbe9 : nop
        push eax
        call public_4c7330
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x51cbb0)
    }
}

#undef public_51cbc4
#undef public_51cbc6
#undef public_51cbd3
#undef public_51cbe7
#undef public_51cbe9
