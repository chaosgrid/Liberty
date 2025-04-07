#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b500);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);

#define public_6f4b51a _public_6f4b51a

PROC_DECLARE(0x6f4b500, internal_6f4b500, public_6f4b500);
extern "C" NAKED register_t __cdecl internal_6f4b500()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f4b960
        add esp, 4
        cmp eax, 0xFFFFFFFE
        je public_6f4b51a
        cmp eax, 0xFFFFFFFF
        je public_6f4b51a
        xor eax, eax
        ret 
        public_6f4b51a : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6f4b500)
    }
}

#undef public_6f4b51a
