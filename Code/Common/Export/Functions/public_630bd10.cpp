#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_630bd3c _public_630bd3c
#define public_630bd44 _public_630bd44
#define public_630bd50 _public_630bd50

PROC_DECLARE(0x630bd10, internal_630bd10, public_630bd10);
extern "C" NAKED register_t __cdecl internal_630bd10()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_63fcf3c
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fcf40]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_630bd3c
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_630bd3c
        lea eax, ss:[esp+0xC]
        jmp public_630bd44
        public_630bd3c : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_630bd44 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_630bd50
        add eax, 0x10
        pop ecx
        ret 
        public_630bd50 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x630bd10)
    }
}

#undef public_630bd3c
#undef public_630bd44
#undef public_630bd50
