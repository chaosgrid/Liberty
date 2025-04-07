#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0000);
CLANG_FORWARD_PROC_SYMBOL(public_6da0a60);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da002d _public_6da002d

PROC_DECLARE(0x6da0000, internal_6da0000, public_6da0000);
extern "C" NAKED register_t __cdecl internal_6da0000()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x228
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da002d
        mov ecx, eax
        call public_6da0a60
        test eax, eax
        je public_6da002d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da002d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0000)
    }
}

#undef public_6da002d
