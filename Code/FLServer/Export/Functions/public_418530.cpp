#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418530);

#define public_41853b _public_41853b
#define public_418545 _public_418545
#define public_41856a _public_41856a

PROC_DECLARE(0x418530, internal_418530, public_418530);
extern "C" NAKED register_t __cdecl internal_418530()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jne public_41853b
        xor eax, eax
        ret 
        public_41853b : nop
        mov cl, byte ptr ds : [edx]
        or eax, 0xFFFFFFFF
        test cl, cl
        je public_41856a
        push esi
        public_418545 : nop
        mov esi, eax
        and ecx, 0xFF
        and esi, 0xFF
        xor ecx, esi
        shr eax, 8
        mov ecx, dword ptr ds : [ecx*4+public_4259d8]
        xor eax, ecx
        mov cl, byte ptr ds : [edx+1]
        inc edx
        test cl, cl
        jne public_418545
        pop esi
        public_41856a : nop
        not eax
        ret 
        UNREACHABLE_TRAP(0x418530)
    }
}

#undef public_41853b
#undef public_418545
#undef public_41856a
