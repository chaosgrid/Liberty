#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47190);
CLANG_FORWARD_PROC_SYMBOL(public_6b49120);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b471ba _public_6b471ba

PROC_DECLARE(0x6b47190, internal_6b47190, public_6b47190);
extern "C" NAKED register_t __cdecl internal_6b47190()
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
        je public_6b471ba
        mov ecx, eax
        call public_6b49120
        test eax, eax
        je public_6b471ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b471ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47190)
    }
}

#undef public_6b471ba
