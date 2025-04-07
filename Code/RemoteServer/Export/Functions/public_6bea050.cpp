#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea050);
CLANG_FORWARD_PROC_SYMBOL(public_6bead90);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea07a _public_6bea07a

PROC_DECLARE(0x6bea050, internal_6bea050, public_6bea050);
extern "C" NAKED register_t __cdecl internal_6bea050()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea07a
        mov ecx, eax
        call public_6bead90
        test eax, eax
        je public_6bea07a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea07a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea050)
    }
}

#undef public_6bea07a
