#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0300);
CLANG_FORWARD_PROC_SYMBOL(public_6da0dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da032a _public_6da032a

PROC_DECLARE(0x6da0300, internal_6da0300, public_6da0300);
extern "C" NAKED register_t __cdecl internal_6da0300()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da032a
        mov ecx, eax
        call public_6da0dc0
        test eax, eax
        je public_6da032a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da032a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0300)
    }
}

#undef public_6da032a
