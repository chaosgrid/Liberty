#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b771c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b771ca _public_6b771ca

PROC_DECLARE(0x6b771c0, internal_6b771c0, public_6b771c0);
extern "C" NAKED register_t __cdecl internal_6b771c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jge public_6b771ca
        xor eax, eax
        public_6b771ca : nop
        push eax
        call public_6b782ac
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6b771c0)
    }
}

#undef public_6b771ca
