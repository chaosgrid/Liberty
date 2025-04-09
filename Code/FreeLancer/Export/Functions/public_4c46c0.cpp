#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c46c0);
CLANG_FORWARD_PROC_SYMBOL(public_4f4cd0);

#define public_4c46d8 _public_4c46d8

PROC_DECLARE(0x4c46c0, internal_4c46c0, public_4c46c0);
extern "C" NAKED register_t __cdecl internal_4c46c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_673374]
        test eax, eax
        jle public_4c46d8
        mov dword ptr ds : [public_673374], 0
        jmp public_4f4cd0
        public_4c46d8 : nop
        ret 
        UNREACHABLE_TRAP(0x4c46c0)
    }
}

#undef public_4c46d8
