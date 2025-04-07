#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9ef10);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9eefa _public_6d9eefa

PROC_DECLARE(0x6d9eed0, internal_6d9eed0, public_6d9eed0);
extern "C" NAKED register_t __cdecl internal_6d9eed0()
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
        je public_6d9eefa
        mov ecx, eax
        call public_6d9ef10
        test eax, eax
        je public_6d9eefa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9eefa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9eed0)
    }
}

#undef public_6d9eefa
