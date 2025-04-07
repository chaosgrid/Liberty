#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2db8);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2df1);

#define public_6acff2f _public_6acff2f
#define public_6acff34 _public_6acff34

PROC_DECLARE(0x6acff18, internal_6acff18, public_6acff18);
extern "C" NAKED register_t __cdecl internal_6acff18()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae0ea0]
        cmp eax, 1
        je public_6acff2f
        test eax, eax
        jne public_6acff34
        cmp dword ptr ds : [public_6ae0ea4], 1
        jne public_6acff34
        public_6acff2f : nop
        call public_6ad2db8
        public_6acff34 : nop
        push dword ptr ss : [esp+4]
        call public_6ad2df1
        push 0xFF
        call dword ptr ds : [public_6add530]
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6acff18)
    }
}

#undef public_6acff2f
#undef public_6acff34
