#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);

#define public_6f4b53a _public_6f4b53a

PROC_DECLARE(0x6f4b520, internal_6f4b520, public_6f4b520);
extern "C" NAKED register_t __cdecl internal_6f4b520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f4b960
        add esp, 4
        cmp eax, 0xFFFFFFFC
        je public_6f4b53a
        cmp eax, 0xFFFFFFFB
        je public_6f4b53a
        xor eax, eax
        ret 
        public_6f4b53a : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6f4b520)
    }
}

#undef public_6f4b53a
