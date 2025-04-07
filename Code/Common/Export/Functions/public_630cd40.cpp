#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cd40);

#define public_630cd61 _public_630cd61

PROC_DECLARE(0x630cd40, internal_630cd40, public_630cd40);
extern "C" NAKED register_t __cdecl internal_630cd40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_630cd61
        push eax
        call dword ptr ds : [public_63992d4]
        add esp, 4
        mov dword ptr ds : [esi+0x80], 0
        public_630cd61 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x630cd40)
    }
}

#undef public_630cd61
