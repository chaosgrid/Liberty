#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348be0);

#define public_6348bfa _public_6348bfa
#define public_6348c07 _public_6348c07

PROC_DECLARE(0x6348be0, internal_6348be0, public_6348be0);
extern "C" NAKED register_t __cdecl internal_6348be0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0xC]
        cmp eax, ecx
        je public_6348c07
        test eax, eax
        je public_6348bfa
        push eax
        call public_6343fb0
        add esp, 4
        public_6348bfa : nop
        mov dword ptr ds : [esi+8], 0
        mov word ptr ds : [esi+4], 0
        public_6348c07 : nop
        mov word ptr ds : [esi+6], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6348be0)
    }
}

#undef public_6348bfa
#undef public_6348c07
