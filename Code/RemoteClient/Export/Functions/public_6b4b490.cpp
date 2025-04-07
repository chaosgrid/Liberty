#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b490);
CLANG_FORWARD_PROC_SYMBOL(public_6b4b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4b4ba _public_6b4b4ba

PROC_DECLARE(0x6b4b490, internal_6b4b490, public_6b4b490);
extern "C" NAKED register_t __cdecl internal_6b4b490()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4b4ba
        mov ecx, eax
        call public_6b4b4d0
        test eax, eax
        je public_6b4b4ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4b4ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4b490)
    }
}

#undef public_6b4b4ba
