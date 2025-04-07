#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4d890);
CLANG_FORWARD_PROC_SYMBOL(public_6b4d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4d8ba _public_6b4d8ba

PROC_DECLARE(0x6b4d890, internal_6b4d890, public_6b4d890);
extern "C" NAKED register_t __cdecl internal_6b4d890()
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
        je public_6b4d8ba
        mov ecx, eax
        call public_6b4d8d0
        test eax, eax
        je public_6b4d8ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4d8ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4d890)
    }
}

#undef public_6b4d8ba
