#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad2db8);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2df1);

#define public_6ad2dcf _public_6ad2dcf
#define public_6ad2de5 _public_6ad2de5
#define public_6ad2df0 _public_6ad2df0

PROC_DECLARE(0x6ad2db8, internal_6ad2db8, public_6ad2db8);
extern "C" NAKED register_t __cdecl internal_6ad2db8()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae0ea0]
        cmp eax, 1
        je public_6ad2dcf
        test eax, eax
        jne public_6ad2df0
        cmp dword ptr ds : [public_6ae0ea4], 1
        jne public_6ad2df0
        public_6ad2dcf : nop
        push 0xFC
        call public_6ad2df1
        mov eax, dword ptr ds : [public_6ae1084]
        pop ecx
        test eax, eax
        je public_6ad2de5
        call eax
        public_6ad2de5 : nop
        push 0xFF
        call public_6ad2df1
        pop ecx
        public_6ad2df0 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad2db8)
    }
}

#undef public_6ad2dcf
#undef public_6ad2de5
#undef public_6ad2df0
