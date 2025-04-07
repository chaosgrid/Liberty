#include "Common-PCH.h"


#define public_634fa11 _public_634fa11

PROC_DECLARE(0x634fa00, internal_634fa00, public_634fa00);
extern "C" NAKED register_t __cdecl internal_634fa00()
{
    __asm
    {
        movsx eax, word ptr ds : [ecx+0x18]
        add eax, ecx
        je public_634fa11
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        public_634fa11 : nop
        ret 4
        UNREACHABLE_TRAP(0x634fa00)
    }
}

#undef public_634fa11
