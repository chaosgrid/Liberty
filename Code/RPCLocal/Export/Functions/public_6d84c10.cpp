#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84c10);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d84c23 _public_6d84c23
#define public_6d84c33 _public_6d84c33

PROC_DECLARE(0x6d84c10, internal_6d84c10, public_6d84c10);
extern "C" NAKED register_t __cdecl internal_6d84c10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_6d84c23
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d84c23 : nop
        test byte ptr ss : [esp+8], 1
        je public_6d84c33
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d84c33 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d84c10)
    }
}

#undef public_6d84c23
#undef public_6d84c33
