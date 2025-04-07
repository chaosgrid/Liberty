#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b350);
CLANG_FORWARD_PROC_SYMBOL(public_6d9b390);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9b37a _public_6d9b37a

PROC_DECLARE(0x6d9b350, internal_6d9b350, public_6d9b350);
extern "C" NAKED register_t __cdecl internal_6d9b350()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x34
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9b37a
        mov ecx, eax
        call public_6d9b390
        test eax, eax
        je public_6d9b37a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9b37a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9b350)
    }
}

#undef public_6d9b37a
