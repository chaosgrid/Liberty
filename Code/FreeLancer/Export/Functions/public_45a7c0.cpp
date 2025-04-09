#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a7c0);

#define public_45a7c6 _public_45a7c6
#define public_45a7d8 _public_45a7d8

PROC_DECLARE(0x45a7c0, internal_45a7c0, public_45a7c0);
extern "C" NAKED register_t __cdecl internal_45a7c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        public_45a7c6 : nop
        cmp dword ptr ds : [eax*8+public_611400], ecx
        je public_45a7d8
        inc eax
        cmp eax, 0x15
        jl public_45a7c6
        xor eax, eax
        ret 
        public_45a7d8 : nop
        mov eax, dword ptr ds : [eax*8+public_611404]
        ret 
        UNREACHABLE_TRAP(0x45a7c0)
    }
}

#undef public_45a7c6
#undef public_45a7d8
