#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332ee0);

#define public_6333039 _public_6333039

PROC_DECLARE(0x6333020, internal_6333020, public_6333020);
extern "C" NAKED register_t __cdecl internal_6333020()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6332ee0
        test byte ptr ss : [esp+8], 1
        je public_6333039
        push esi
        call dword ptr ds : [public_639932c]
        add esp, 4
        public_6333039 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6333020)
    }
}

#undef public_6333039
