#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271610);

#define public_629adfd _public_629adfd

PROC_DECLARE(0x629ade0, internal_629ade0, public_629ade0);
extern "C" NAKED register_t __cdecl internal_629ade0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov cl, byte ptr ds : [eax+0x6C]
        test cl, cl
        je public_629adfd
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_6271610
        add esp, 4
        neg eax
        sbb eax, eax
        neg eax
        ret 
        public_629adfd : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x629ade0)
    }
}

#undef public_629adfd
