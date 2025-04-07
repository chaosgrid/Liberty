#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631140f _public_631140f

PROC_DECLARE(0x6311400, internal_6311400, public_6311400);
extern "C" NAKED register_t __cdecl internal_6311400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_631140f
        push eax
        call public_6391d5a
        pop ecx
        public_631140f : nop
        ret 4
        UNREACHABLE_TRAP(0x6311400)
    }
}

#undef public_631140f
