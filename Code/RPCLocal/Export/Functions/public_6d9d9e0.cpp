#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9d9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9d9f3 _public_6d9d9f3

PROC_DECLARE(0x6d9d9e0, internal_6d9d9e0, public_6d9d9e0);
extern "C" NAKED register_t __cdecl internal_6d9d9e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6d9d9f3
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9d9f3 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9d9e0)
    }
}

#undef public_6d9d9f3
