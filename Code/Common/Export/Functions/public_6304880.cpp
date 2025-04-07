#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6304880);

#define public_6304892 _public_6304892

PROC_DECLARE(0x6304880, internal_6304880, public_6304880);
extern "C" NAKED register_t __cdecl internal_6304880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6304892
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6399114]
        public_6304892 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6304880)
    }
}

#undef public_6304892
