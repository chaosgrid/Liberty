#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627cdc9 _public_627cdc9

PROC_DECLARE(0x627cdb0, internal_627cdb0, public_627cdb0);
extern "C" NAKED register_t __cdecl internal_627cdb0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_639b64c
        je public_627cdc9
        push esi
        call public_6391d5a
        add esp, 4
        public_627cdc9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x627cdb0)
    }
}

#undef public_627cdc9
