#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eacd39 _public_6eacd39

PROC_DECLARE(0x6eacd20, internal_6eacd20, public_6eacd20);
extern "C" NAKED register_t __cdecl internal_6eacd20()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb43f8
        je public_6eacd39
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eacd39 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eacd20)
    }
}

#undef public_6eacd39
