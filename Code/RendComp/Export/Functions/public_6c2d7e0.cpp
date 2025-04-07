#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31070);

#define public_6c2d80d _public_6c2d80d
#define public_6c2d810 _public_6c2d810

PROC_DECLARE(0x6c2d7e0, internal_6c2d7e0, public_6c2d7e0);
extern "C" NAKED register_t __cdecl internal_6c2d7e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        cmp eax, 0xFFFFFFFF
        sete cl
        mov dword ptr ss : [esp+8], 0
        dec ecx
        and ecx, eax
        lea eax, ss:[esp+8]
        push eax
        call public_6c31070
        test eax, eax
        jl public_6c2d80d
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6c2d810
        public_6c2d80d : nop
        or eax, 0xFFFFFFFF
        public_6c2d810 : nop
        ret 8
        UNREACHABLE_TRAP(0x6c2d7e0)
    }
}

#undef public_6c2d80d
#undef public_6c2d810
