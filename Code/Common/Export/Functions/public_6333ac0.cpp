#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6333af0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6333ae5 _public_6333ae5

PROC_DECLARE(0x6333ac0, internal_6333ac0, public_6333ac0);
extern "C" NAKED register_t __cdecl internal_6333ac0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_658a814]
        test esi, esi
        je public_6333ae5
        mov ecx, esi
        call public_6333af0
        push esi
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [public_658a814], 0
        public_6333ae5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6333ac0)
    }
}

#undef public_6333ae5
