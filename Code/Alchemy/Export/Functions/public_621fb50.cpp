#include "Alchemy-PCH.h"


#define public_621fb6d _public_621fb6d
#define public_621fb90 _public_621fb90

PROC_DECLARE(0x621fb50, internal_621fb50, public_621fb50);
extern "C" NAKED register_t __cdecl internal_621fb50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        push edi
        mov edi, dword ptr ds : [eax+0x10]
        cmp esi, edi
        je public_621fb90
        mov ebx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x20]
        public_621fb6d : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x10]
        push ebx
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_621fb90
        add esi, 0x10
        cmp esi, edi
        jne public_621fb6d
        public_621fb90 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x621fb50)
    }
}

#undef public_621fb6d
#undef public_621fb90
