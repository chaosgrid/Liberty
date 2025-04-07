#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285d10);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348f60);

#define public_6285d3e _public_6285d3e
#define public_6285d4b _public_6285d4b
#define public_6285d51 _public_6285d51

PROC_DECLARE(0x6285d10, internal_6285d10, public_6285d10);
extern "C" NAKED register_t __cdecl internal_6285d10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp word ptr ds : [esi+6], 0
        jbe public_6285d51
        push 1
        push esi
        call public_6348f60
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0xC]
        add esp, 8
        cmp eax, ecx
        je public_6285d4b
        test eax, eax
        je public_6285d3e
        push eax
        call public_6343fb0
        add esp, 4
        public_6285d3e : nop
        mov dword ptr ds : [esi+8], 0
        mov word ptr ds : [esi+4], 0
        public_6285d4b : nop
        mov word ptr ds : [esi+6], 0
        public_6285d51 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6285d10)
    }
}

#undef public_6285d3e
#undef public_6285d4b
#undef public_6285d51
