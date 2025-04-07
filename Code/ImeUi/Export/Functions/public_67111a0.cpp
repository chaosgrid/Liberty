#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67111a0);

#define public_67111b4 _public_67111b4

PROC_DECLARE(0x67111a0, internal_67111a0, public_67111a0);
extern "C" NAKED register_t __cdecl internal_67111a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67193e0]
        test ecx, ecx
        je public_67111b4
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        public_67111b4 : nop
        ret 
        UNREACHABLE_TRAP(0x67111a0)
    }
}

#undef public_67111b4
