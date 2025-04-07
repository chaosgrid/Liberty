#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47090);
CLANG_FORWARD_PROC_SYMBOL(public_6b49020);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b470ba _public_6b470ba

PROC_DECLARE(0x6b47090, internal_6b47090, public_6b47090);
extern "C" NAKED register_t __cdecl internal_6b47090()
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
        je public_6b470ba
        mov ecx, eax
        call public_6b49020
        test eax, eax
        je public_6b470ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b470ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47090)
    }
}

#undef public_6b470ba
