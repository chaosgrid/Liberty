#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0500);
CLANG_FORWARD_PROC_SYMBOL(public_6da1220);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da052a _public_6da052a

PROC_DECLARE(0x6da0500, internal_6da0500, public_6da0500);
extern "C" NAKED register_t __cdecl internal_6da0500()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da052a
        mov ecx, eax
        call public_6da1220
        test eax, eax
        je public_6da052a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da052a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0500)
    }
}

#undef public_6da052a
