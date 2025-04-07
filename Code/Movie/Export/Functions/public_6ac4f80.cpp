#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);

#define public_6ac4f9e _public_6ac4f9e

PROC_DECLARE(0x6ac4f80, internal_6ac4f80, public_6ac4f80);
extern "C" NAKED register_t __cdecl internal_6ac4f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        push 0
        call dword ptr ds : [public_6ada028]
        test eax, eax
        jne public_6ac4f9e
        mov dword ptr ds : [public_6ae097c], 0x2B
        ret 4
        public_6ac4f9e : nop
        inc dword ptr ds : [public_6ae0980]
        ret 4
        UNREACHABLE_TRAP(0x6ac4f80)
    }
}

#undef public_6ac4f9e
