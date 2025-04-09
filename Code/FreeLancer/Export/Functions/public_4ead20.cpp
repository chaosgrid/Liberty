#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c81a0);

#define public_4ead72 _public_4ead72
#define public_4ead74 _public_4ead74
#define public_4ead95 _public_4ead95

PROC_DECLARE(0x4ead20, internal_4ead20, public_4ead20);
extern "C" NAKED register_t __cdecl internal_4ead20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_4c81a0
        mov dword ptr ds : [esi+0x368], 0
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_4ead95
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4ead95
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_4ead72
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4ead72
        add eax, 0xC
        test eax, eax
        je public_4ead72
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4ead72
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_4ead74
        public_4ead72 : nop
        xor eax, eax
        public_4ead74 : nop
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        push eax
        call dword ptr ds : [public_5c655c]
        add esp, 4
        mov dword ptr ds : [esi+0x368], eax
        public_4ead95 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4ead20)
    }
}

#undef public_4ead72
#undef public_4ead74
#undef public_4ead95
