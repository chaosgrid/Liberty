#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59cc0);

#define public_6d59d00 _public_6d59d00
#define public_6d59d5d _public_6d59d5d
#define public_6d59dd1 _public_6d59dd1
#define public_6d59dd7 _public_6d59dd7

PROC_DECLARE(0x6d59cc0, internal_6d59cc0, public_6d59cc0);
extern "C" NAKED register_t __cdecl internal_6d59cc0()
{
    __asm
    {
        movd eax, mm0
        movq mm1, mm0
        movd mm3, dword ptr ds : [public_6d6ed9c]
        mov ebx, eax
        mov edx, eax
        pand mm0, mm3
        and ebx, 0x80000000
        shr edx, 0x1F
        xor eax, ebx
        cmp eax, dword ptr ds : [public_6d6ee54]
        movd mm2, dword ptr ds : [public_6d6ee50]
        jl public_6d59d00
        movd mm0, dword ptr ds : [public_6d6eda8]
        jmp public_6d59dd7
        lea ebx, ds:[ebx]
        public_6d59d00 : nop
        movq mm1, mm0
        pfmul mm0, mm2
        movq mm3, qword ptr ds : [public_6d6ed60]
        pf2id mm0, mm0
        movq mm7, qword ptr ds : [public_6d6ed68]
        movd ecx, mm0
        pi2fd mm0, mm0
        mov esi, ecx
        movq mm6, qword ptr ds : [public_6d6ed78]
        punpckldq mm0, mm0
        movq mm5, qword ptr ds : [public_6d6ed18]
        pfmul mm0, mm3
        movq mm3, qword ptr ds : [public_6d6ed70]
        pfadd mm1, mm0
        shr esi, 2
        punpckhdq mm0, mm0
        xor edx, esi
        pfadd mm1, mm0
        test ecx, 1
        punpckldq mm1, mm1
        je public_6d59d5d
        pfsubr mm1, mm3
        public_6d59d5d : nop
        movq mm2, mm5
        shl edx, 0x1F
        punpckldq mm2, mm1
        pfmul mm1, mm1
        mov esi, ecx
        movq mm4, qword ptr ds : [public_6d6ed80]
        shr esi, 1
        pfmul mm7, mm1
        xor ecx, esi
        pfmul mm6, mm1
        shl esi, 0x1F
        pfadd mm7, mm5
        xor ebx, esi
        pfmul mm4, mm1
        pfmul mm7, mm6
        movq mm6, qword ptr ds : [public_6d6ed88]
        pfadd mm7, mm5
        pfmul mm6, mm1
        pfmul mm4, mm7
        movd mm0, edx
        pfadd mm4, mm5
        punpckldq mm6, mm5
        psrlq mm5, 0x20
        pfmul mm4, mm6
        punpckldq mm0, mm0
        movd mm1, ebx
        pfadd mm4, mm5
        test ecx, 1
        pfmul mm4, mm2
        je public_6d59dd1
        punpckldq mm5, mm4
        punpckhdq mm4, mm5
        public_6d59dd1 : nop
        pxor mm4, mm1
        pxor mm0, mm4
        public_6d59dd7 : nop
        punpckhdq mm0, mm0
        ret 
        UNREACHABLE_TRAP(0x6d59cc0)
    }
}

#undef public_6d59d00
#undef public_6d59d5d
#undef public_6d59dd1
#undef public_6d59dd7
