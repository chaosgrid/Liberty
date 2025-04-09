#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);

#define public_42d690 _public_42d690

PROC_DECLARE(0x42d680, internal_42d680, public_42d680);
extern "C" NAKED register_t __cdecl internal_42d680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667d68]
        test eax, eax
        je public_42d690
        fld qword ptr ds : [public_5c8ba8]
        ret 
        public_42d690 : nop
        fld qword ptr ds : [public_667d40]
        ret 
        UNREACHABLE_TRAP(0x42d680)
    }
}

#undef public_42d690
