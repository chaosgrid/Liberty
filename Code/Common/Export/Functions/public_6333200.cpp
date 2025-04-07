#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6333219 _public_6333219

PROC_DECLARE(0x6333200, internal_6333200, public_6333200);
extern "C" NAKED register_t __cdecl internal_6333200()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a49e4
        je public_6333219
        push esi
        call public_6391d5a
        add esp, 4
        public_6333219 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6333200)
    }
}

#undef public_6333219
