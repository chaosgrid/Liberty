#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4a090);
CLANG_FORWARD_PROC_SYMBOL(public_6b4a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4a0ba _public_6b4a0ba

PROC_DECLARE(0x6b4a090, internal_6b4a090, public_6b4a090);
extern "C" NAKED register_t __cdecl internal_6b4a090()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4a0ba
        mov ecx, eax
        call public_6b4a0d0
        test eax, eax
        je public_6b4a0ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4a0ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4a090)
    }
}

#undef public_6b4a0ba
