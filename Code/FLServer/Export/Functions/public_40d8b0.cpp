#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f30);

#define public_40d8c2 _public_40d8c2

PROC_DECLARE(0x40d8b0, internal_40d8b0, public_40d8b0);
extern "C" NAKED register_t __cdecl internal_40d8b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_427828]
        test eax, eax
        je public_40d8c2
        add eax, 0x704
        mov dword ptr ss : [esp+4], eax
        public_40d8c2 : nop
        jmp public_418f30
        UNREACHABLE_TRAP(0x40d8b0)
    }
}

#undef public_40d8c2
