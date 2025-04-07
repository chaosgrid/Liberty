#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d909d0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d909f0 _public_6d909f0

PROC_DECLARE(0x6d909d0, internal_6d909d0, public_6d909d0);
extern "C" NAKED register_t __cdecl internal_6d909d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6db3cd0
        je public_6d909f0
        push eax
        call public_6db1dc2
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6d909f0 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d909d0)
    }
}

#undef public_6d909f0
