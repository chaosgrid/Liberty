#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d99900);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);

#define public_6d99928 _public_6d99928

PROC_DECLARE(0x6d99900, internal_6d99900, public_6d99900);
extern "C" NAKED register_t __cdecl internal_6d99900()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6db4038
        mov dword ptr ds : [esi+0x28], 0
        je public_6d99928
        push eax
        call dword ptr ds : [public_6db31c0]
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0
        public_6d99928 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d99900)
    }
}

#undef public_6d99928
