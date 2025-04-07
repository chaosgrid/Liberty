#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6329c5f _public_6329c5f

PROC_DECLARE(0x6329c40, internal_6329c40, public_6329c40);
extern "C" NAKED register_t __cdecl internal_6329c40()
{
    __asm
    {
        push esi
        push 8
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_6329c5f
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], offset public_63a44b4
        pop esi
        ret 
        public_6329c5f : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6329c40)
    }
}

#undef public_6329c5f
