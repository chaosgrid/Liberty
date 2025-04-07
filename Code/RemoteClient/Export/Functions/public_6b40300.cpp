#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b40300);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4030e _public_6b4030e

PROC_DECLARE(0x6b40300, internal_6b40300, public_6b40300);
extern "C" NAKED register_t __cdecl internal_6b40300()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6b4030e
        push eax
        call public_6b6a092
        pop ecx
        public_6b4030e : nop
        ret 
        UNREACHABLE_TRAP(0x6b40300)
    }
}

#undef public_6b4030e
