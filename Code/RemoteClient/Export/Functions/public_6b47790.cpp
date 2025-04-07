#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47790);
CLANG_FORWARD_PROC_SYMBOL(public_6b484c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b477ba _public_6b477ba

PROC_DECLARE(0x6b47790, internal_6b47790, public_6b47790);
extern "C" NAKED register_t __cdecl internal_6b47790()
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
        je public_6b477ba
        mov ecx, eax
        call public_6b484c0
        test eax, eax
        je public_6b477ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b477ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47790)
    }
}

#undef public_6b477ba
