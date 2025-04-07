#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b409 _public_6d9b409
#define public_6d9b419 _public_6d9b419

PROC_DECLARE(0x6d9b3f0, internal_6d9b3f0, public_6d9b3f0);
extern "C" NAKED register_t __cdecl internal_6d9b3f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6db43d8
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6d9b409
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9b409 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6d9b419
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9b419 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9b3f0)
    }
}

#undef public_6d9b409
#undef public_6d9b419
