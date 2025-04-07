#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f685);

#define public_6d2f6a6 _public_6d2f6a6
#define public_6d2f6aa _public_6d2f6aa
#define public_6d2f6ae _public_6d2f6ae
#define public_6d2f6b2 _public_6d2f6b2

PROC_DECLARE(0x6d2f685, internal_6d2f685, public_6d2f685);
extern "C" NAKED register_t __cdecl internal_6d2f685()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0x36314C20
        je public_6d2f6b2
        sub eax, 0x21
        je public_6d2f6ae
        sub eax, 0x5DF
        je public_6d2f6aa
        sub eax, 0x21
        je public_6d2f6a6
        mov eax, dword ptr ss : [esp+4]
        ret 
        public_6d2f6a6 : nop
        push 0x15
        pop eax
        ret 
        public_6d2f6aa : nop
        push 0x14
        pop eax
        ret 
        public_6d2f6ae : nop
        push 0x33
        pop eax
        ret 
        public_6d2f6b2 : nop
        push 0x32
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6d2f685)
    }
}

#undef public_6d2f6a6
#undef public_6d2f6aa
#undef public_6d2f6ae
#undef public_6d2f6b2
