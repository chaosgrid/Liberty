#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47950);
CLANG_FORWARD_PROC_SYMBOL(public_6b48750);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4797a _public_6b4797a

PROC_DECLARE(0x6b47950, internal_6b47950, public_6b47950);
extern "C" NAKED register_t __cdecl internal_6b47950()
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
        je public_6b4797a
        mov ecx, eax
        call public_6b48750
        test eax, eax
        je public_6b4797a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4797a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47950)
    }
}

#undef public_6b4797a
