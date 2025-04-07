#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd23b);

#define public_65dd24f _public_65dd24f

PROC_DECLARE(0x65dd23b, internal_65dd23b, public_65dd23b);
extern "C" NAKED register_t __cdecl internal_65dd23b()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+8]
        call dword ptr ds : [public_65e10f4]
        test eax, eax
        je public_65dd24f
        xor esi, esi
        public_65dd24f : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dd23b)
    }
}

#undef public_65dd24f
