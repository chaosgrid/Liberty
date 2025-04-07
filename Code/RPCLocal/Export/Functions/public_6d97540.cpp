#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d97540);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d97559 _public_6d97559

PROC_DECLARE(0x6d97540, internal_6d97540, public_6d97540);
extern "C" NAKED register_t __cdecl internal_6d97540()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6db3f24
        je public_6d97559
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d97559 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d97540)
    }
}

#undef public_6d97559
