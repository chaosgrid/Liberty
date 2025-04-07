#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6d9cc60);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9cc4d _public_6d9cc4d

PROC_DECLARE(0x6d9cc20, internal_6d9cc20, public_6d9cc20);
extern "C" NAKED register_t __cdecl internal_6d9cc20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xEC
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9cc4d
        mov ecx, eax
        call public_6d9cc60
        test eax, eax
        je public_6d9cc4d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9cc4d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9cc20)
    }
}

#undef public_6d9cc4d
