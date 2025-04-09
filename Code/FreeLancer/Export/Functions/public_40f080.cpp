#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_40f0ac _public_40f0ac
#define public_40f0b4 _public_40f0b4
#define public_40f0c0 _public_40f0c0

PROC_DECLARE(0x40f080, internal_40f080, public_40f080);
extern "C" NAKED register_t __cdecl internal_40f080()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6164b0
        call public_52c7a0
        mov ecx, dword ptr ds : [public_6164b4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_40f0ac
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_40f0ac
        lea eax, ss:[esp+0xC]
        jmp public_40f0b4
        public_40f0ac : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_40f0b4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_40f0c0
        mov eax, dword ptr ds : [eax+0x10]
        pop ecx
        ret 
        public_40f0c0 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x40f080)
    }
}

#undef public_40f0ac
#undef public_40f0b4
#undef public_40f0c0
