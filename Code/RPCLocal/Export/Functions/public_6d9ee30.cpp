#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6d9ee70);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9ee5a _public_6d9ee5a

PROC_DECLARE(0x6d9ee30, internal_6d9ee30, public_6d9ee30);
extern "C" NAKED register_t __cdecl internal_6d9ee30()
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
        je public_6d9ee5a
        mov ecx, eax
        call public_6d9ee70
        test eax, eax
        je public_6d9ee5a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9ee5a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9ee30)
    }
}

#undef public_6d9ee5a
