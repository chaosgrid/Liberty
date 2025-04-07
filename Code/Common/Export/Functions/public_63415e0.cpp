#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63415e0);

#define public_63415f0 _public_63415f0
#define public_6341608 _public_6341608

PROC_DECLARE(0x63415e0, internal_63415e0, public_63415e0);
extern "C" NAKED register_t __cdecl internal_63415e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test edx, edx
        je public_6341608
        push esi
        lea esp, ss:[esp]
        public_63415f0 : nop
        mov esi, dword ptr ds : [edx+4]
        inc eax
        test esi, esi
        mov dword ptr ds : [edx], 0
        mov dword ptr ds : [edx+4], 0
        mov edx, esi
        jne public_63415f0
        pop esi
        public_6341608 : nop
        mov dword ptr ds : [ecx], 0
        ret 
        UNREACHABLE_TRAP(0x63415e0)
    }
}

#undef public_63415f0
#undef public_6341608
