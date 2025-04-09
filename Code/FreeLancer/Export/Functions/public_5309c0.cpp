#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);
CLANG_FORWARD_PROC_SYMBOL(public_5309c0);

#define public_5309ec _public_5309ec
#define public_5309f4 _public_5309f4
#define public_530a00 _public_530a00

PROC_DECLARE(0x5309c0, internal_5309c0, public_5309c0);
extern "C" NAKED register_t __cdecl internal_5309c0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6754f4
        call public_52c7a0
        mov ecx, dword ptr ds : [public_6754f8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_5309ec
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_5309ec
        lea eax, ss:[esp+0xC]
        jmp public_5309f4
        public_5309ec : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_5309f4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_530a00
        add eax, 0x10
        pop ecx
        ret 
        public_530a00 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5309c0)
    }
}

#undef public_5309ec
#undef public_5309f4
#undef public_530a00
