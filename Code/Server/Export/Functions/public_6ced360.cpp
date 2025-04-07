#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced360);

#define public_6ced37b _public_6ced37b

PROC_DECLARE(0x6ced360, internal_6ced360, public_6ced360);
extern "C" NAKED register_t __cdecl internal_6ced360()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xA
        push esi
        mov esi, ecx
        jne public_6ced37b
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [public_6d64330]
        mov dword ptr ds : [esi+4], 0
        public_6ced37b : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ced360)
    }
}

#undef public_6ced37b
