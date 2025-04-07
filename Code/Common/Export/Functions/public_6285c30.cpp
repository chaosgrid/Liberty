#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348f60);

#define public_6285c5c _public_6285c5c
#define public_6285c69 _public_6285c69
#define public_6285c6f _public_6285c6f

PROC_DECLARE(0x6285c30, internal_6285c30, public_6285c30);
extern "C" NAKED register_t __cdecl internal_6285c30()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp word ptr ds : [esi+6], 0
        jbe public_6285c6f
        push 1
        push esi
        call public_6348f60
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0xC]
        add esp, 8
        cmp eax, ecx
        je public_6285c69
        test eax, eax
        je public_6285c5c
        push eax
        call public_6343fb0
        add esp, 4
        public_6285c5c : nop
        mov dword ptr ds : [esi+8], 0
        mov word ptr ds : [esi+4], 0
        public_6285c69 : nop
        mov word ptr ds : [esi+6], 0
        public_6285c6f : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6285c30)
    }
}

#undef public_6285c5c
#undef public_6285c69
#undef public_6285c6f
