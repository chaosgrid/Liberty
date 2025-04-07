#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9e630);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9e61d _public_6d9e61d

PROC_DECLARE(0x6d9e5f0, internal_6d9e5f0, public_6d9e5f0);
extern "C" NAKED register_t __cdecl internal_6d9e5f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xB8
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9e61d
        mov ecx, eax
        call public_6d9e630
        test eax, eax
        je public_6d9e61d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9e61d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9e5f0)
    }
}

#undef public_6d9e61d
