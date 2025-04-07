#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271550);
CLANG_FORWARD_PROC_SYMBOL(public_630a970);

#define public_630a985 _public_630a985

PROC_DECLARE(0x630a970, internal_630a970, public_630a970);
extern "C" NAKED register_t __cdecl internal_630a970()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6271550
        add esp, 4
        test eax, eax
        je public_630a985
        mov al, byte ptr ds : [eax+0x70]
        ret 
        public_630a985 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x630a970)
    }
}

#undef public_630a985
