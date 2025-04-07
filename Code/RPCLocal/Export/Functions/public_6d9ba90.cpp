#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9ba90);
CLANG_FORWARD_PROC_SYMBOL(public_6d9bad0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9baba _public_6d9baba

PROC_DECLARE(0x6d9ba90, internal_6d9ba90, public_6d9ba90);
extern "C" NAKED register_t __cdecl internal_6d9ba90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x44
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9baba
        mov ecx, eax
        call public_6d9bad0
        test eax, eax
        je public_6d9baba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9baba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9ba90)
    }
}

#undef public_6d9baba
