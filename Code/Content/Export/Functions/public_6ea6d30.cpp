#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea6d49 _public_6ea6d49

PROC_DECLARE(0x6ea6d30, internal_6ea6d30, public_6ea6d30);
extern "C" NAKED register_t __cdecl internal_6ea6d30()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb4338
        je public_6ea6d49
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ea6d49 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ea6d30)
    }
}

#undef public_6ea6d49
