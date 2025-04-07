#include "Alchemy-PCH.h"


#define public_621ed07 _public_621ed07
#define public_621ed0f _public_621ed0f
#define public_621ed17 _public_621ed17

PROC_DECLARE(0x621ecf0, internal_621ecf0, public_621ecf0);
extern "C" NAKED register_t __cdecl internal_621ecf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [eax+0x18]
        cmp eax, ecx
        je public_621ed17
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        public_621ed07 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jne public_621ed0f
        mov dword ptr ds : [eax+0xC], edx
        public_621ed0f : nop
        add eax, 0x10
        cmp eax, ecx
        jne public_621ed07
        pop esi
        public_621ed17 : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621ecf0)
    }
}

#undef public_621ed07
#undef public_621ed0f
#undef public_621ed17
