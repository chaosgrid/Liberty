#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0200);
CLANG_FORWARD_PROC_SYMBOL(public_6da0c10);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da022d _public_6da022d

PROC_DECLARE(0x6da0200, internal_6da0200, public_6da0200);
extern "C" NAKED register_t __cdecl internal_6da0200()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x424
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da022d
        mov ecx, eax
        call public_6da0c10
        test eax, eax
        je public_6da022d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da022d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0200)
    }
}

#undef public_6da022d
