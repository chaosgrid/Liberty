#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_449cd0);

#define public_449ce0 _public_449ce0
#define public_449cf6 _public_449cf6
#define public_449d02 _public_449d02

PROC_DECLARE(0x449cd0, internal_449cd0, public_449cd0);
extern "C" NAKED register_t __cdecl internal_449cd0()
{
    __asm
    {
        push esi
        push edi
        xor eax, eax
        xor esi, esi
        lea edi, ds:[ecx+0x518]
        lea esp, ss:[esp]
        public_449ce0 : nop
        mov edx, dword ptr ds : [edi]
        test edx, edx
        je public_449cf6
        mov edx, dword ptr ds : [edx+0x1B8]
        test edx, edx
        je public_449cf6
        cmp dword ptr ds : [edx+0x34], 1
        je public_449d02
        public_449cf6 : nop
        inc esi
        add edi, 4
        cmp esi, 0x40
        jl public_449ce0
        pop edi
        pop esi
        ret 
        public_449d02 : nop
        mov eax, dword ptr ds : [ecx+esi*4+0x518]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x449cd0)
    }
}

#undef public_449ce0
#undef public_449cf6
#undef public_449d02
