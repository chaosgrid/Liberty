#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b630);
CLANG_FORWARD_PROC_SYMBOL(public_6f55590);
CLANG_FORWARD_PROC_SYMBOL(public_6f555c0);

#define public_6f555b5 _public_6f555b5

PROC_DECLARE(0x6f55590, internal_6f55590, public_6f55590);
extern "C" NAKED register_t __cdecl internal_6f55590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f555c0
        add esp, 8
        test eax, eax
        je public_6f555b5
        push esi
        call public_6f4b630
        add esp, 4
        pop esi
        ret 
        public_6f555b5 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55590)
    }
}

#undef public_6f555b5
