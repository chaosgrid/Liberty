#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6da08e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9fe2a _public_6d9fe2a

PROC_DECLARE(0x6d9fe00, internal_6d9fe00, public_6d9fe00);
extern "C" NAKED register_t __cdecl internal_6d9fe00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9fe2a
        mov ecx, eax
        call public_6da08e0
        test eax, eax
        je public_6d9fe2a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9fe2a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9fe00)
    }
}

#undef public_6d9fe2a
