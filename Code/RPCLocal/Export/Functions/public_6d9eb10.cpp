#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9eb10);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9eb29 _public_6d9eb29

PROC_DECLARE(0x6d9eb10, internal_6d9eb10, public_6d9eb10);
extern "C" NAKED register_t __cdecl internal_6d9eb10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x64]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6db52dc
        je public_6d9eb29
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9eb29 : nop
        mov dword ptr ds : [esi+0x64], 0
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9eb10)
    }
}

#undef public_6d9eb29
