#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4bea0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4bee0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4beca _public_6b4beca

PROC_DECLARE(0x6b4bea0, internal_6b4bea0, public_6b4bea0);
extern "C" NAKED register_t __cdecl internal_6b4bea0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4beca
        mov ecx, eax
        call public_6b4bee0
        test eax, eax
        je public_6b4beca
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4beca : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4bea0)
    }
}

#undef public_6b4beca
