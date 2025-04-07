#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e720);

#define public_6c2f80d _public_6c2f80d

PROC_DECLARE(0x6c2f7e0, internal_6c2f7e0, public_6c2f7e0);
extern "C" NAKED register_t __cdecl internal_6c2f7e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+4]
        push esi
        lea ecx, ss:[esp+4]
        xor esi, esi
        push ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ss : [esp+0xC], eax
        call public_6c2e720
        add esp, 4
        cmp eax, esi
        je public_6c2f80d
        mov eax, dword ptr ds : [eax+0x34]
        pop esi
        add esp, 8
        ret 
        public_6c2f80d : nop
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6c2f7e0)
    }
}

#undef public_6c2f80d
