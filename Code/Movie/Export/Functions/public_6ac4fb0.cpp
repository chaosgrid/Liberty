#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);

#define public_6ac4fcc _public_6ac4fcc

PROC_DECLARE(0x6ac4fb0, internal_6ac4fb0, public_6ac4fb0);
extern "C" NAKED register_t __cdecl internal_6ac4fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ac4fcc
        mov edx, dword ptr ds : [public_6ae0980]
        push eax
        dec edx
        mov dword ptr ds : [public_6ae0980], edx
        call dword ptr ds : [public_6ada02c]
        public_6ac4fcc : nop
        ret 4
        UNREACHABLE_TRAP(0x6ac4fb0)
    }
}

#undef public_6ac4fcc
