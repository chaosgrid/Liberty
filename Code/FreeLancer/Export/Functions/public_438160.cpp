#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438160);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_438194 _public_438194
#define public_43819c _public_43819c
#define public_4381aa _public_4381aa
#define public_4381b6 _public_4381b6

PROC_DECLARE(0x438160, internal_438160, public_438160);
extern "C" NAKED register_t __cdecl internal_438160()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_52c7a0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_438194
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_438194
        lea eax, ss:[esp+4]
        jmp public_43819c
        public_438194 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_43819c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_4381aa
        add eax, 0x10
        test eax, eax
        jne public_4381b6
        public_4381aa : nop
        fld dword ptr ds : [public_5c7474]
        add esp, 8
        ret 4
        public_4381b6 : nop
        fld dword ptr ds : [eax+0x14]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x438160)
    }
}

#undef public_438194
#undef public_43819c
#undef public_4381aa
#undef public_4381b6
