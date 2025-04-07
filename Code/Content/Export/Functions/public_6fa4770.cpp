#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa477a _public_6fa477a

PROC_DECLARE(0x6fa4770, internal_6fa4770, public_6fa4770);
extern "C" NAKED register_t __cdecl internal_6fa4770()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jge public_6fa477a
        xor eax, eax
        public_6fa477a : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6fa4770)
    }
}

#undef public_6fa477a
