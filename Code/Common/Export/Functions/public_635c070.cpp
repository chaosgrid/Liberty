#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c090);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_635c088 _public_635c088

PROC_DECLARE(0x635c070, internal_635c070, public_635c070);
extern "C" NAKED register_t __cdecl internal_635c070()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_635c090
        test byte ptr ss : [esp+8], 1
        je public_635c088
        push esi
        call public_6391d5a
        add esp, 4
        public_635c088 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x635c070)
    }
}

#undef public_635c088
