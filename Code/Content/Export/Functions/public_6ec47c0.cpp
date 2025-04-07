#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec47d9 _public_6ec47d9

PROC_DECLARE(0x6ec47c0, internal_6ec47c0, public_6ec47c0);
extern "C" NAKED register_t __cdecl internal_6ec47c0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb5a90
        je public_6ec47d9
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ec47d9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec47c0)
    }
}

#undef public_6ec47d9
