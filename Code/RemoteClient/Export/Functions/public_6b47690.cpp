#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47690);
CLANG_FORWARD_PROC_SYMBOL(public_6b49300);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b476ba _public_6b476ba

PROC_DECLARE(0x6b47690, internal_6b47690, public_6b47690);
extern "C" NAKED register_t __cdecl internal_6b47690()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x30
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b476ba
        mov ecx, eax
        call public_6b49300
        test eax, eax
        je public_6b476ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b476ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47690)
    }
}

#undef public_6b476ba
