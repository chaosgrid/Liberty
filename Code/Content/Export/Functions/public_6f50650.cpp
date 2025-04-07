#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f5067c _public_6f5067c
#define public_6f50684 _public_6f50684
#define public_6f50690 _public_6f50690

PROC_DECLARE(0x6f50650, internal_6f50650, public_6f50650);
extern "C" NAKED register_t __cdecl internal_6f50650()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6fd0cb8
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd0cbc]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f5067c
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f5067c
        lea eax, ss:[esp+0xC]
        jmp public_6f50684
        public_6f5067c : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6f50684 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_6f50690
        add eax, 0x10
        pop ecx
        ret 
        public_6f50690 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f50650)
    }
}

#undef public_6f5067c
#undef public_6f50684
#undef public_6f50690
