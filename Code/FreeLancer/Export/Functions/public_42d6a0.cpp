#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d6a0);

#define public_42d6b0 _public_42d6b0

PROC_DECLARE(0x42d6a0, internal_42d6a0, public_42d6a0);
extern "C" NAKED register_t __cdecl internal_42d6a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667d68]
        test eax, eax
        je public_42d6b0
        fld qword ptr ds : [public_5c8ba8]
        ret 
        public_42d6b0 : nop
        fld qword ptr ds : [public_667d48]
        ret 
        UNREACHABLE_TRAP(0x42d6a0)
    }
}

#undef public_42d6b0
