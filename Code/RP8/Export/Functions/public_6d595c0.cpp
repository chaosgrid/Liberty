#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d595c0);

PROC_DECLARE(0x6d595c0, internal_6d595c0, public_6d595c0);
extern "C" NAKED register_t __cdecl internal_6d595c0()
{
    __asm
    {
        movd mm6, dword ptr ds : [public_6d6ed98]
        movd mm7, dword ptr ds : [public_6d6ed9c]
        movd mm4, dword ptr ds : [public_6d6edac]
        pand mm6, mm0
        movd mm5, dword ptr ds : [public_6d6eda8]
        pand mm0, mm7
        movq mm3, mm0
        pcmpgtd mm3, mm5
        movq mm5, mm0
        pfmul mm0, mm4
        movd mm2, dword ptr ds : [public_6d6ede0]
        pfsubr mm0, mm4
        pfrsqrt mm7, mm0
        movq mm1, mm7
        pfmul mm7, mm7
        pcmpgtd mm2, mm5
        pfrsqit1 mm7, mm0
        movd mm4, dword ptr ds : [public_6d6edf0]
        pfrcpit2 mm7, mm1
        pfmul mm7, mm0
        movq mm0, mm2
        pand mm5, mm2
        pandn mm0, mm7
        movd mm7, dword ptr ds : [public_6d6ede8]
        por mm0, mm5
        movq mm1, mm0
        pfmul mm0, mm0
        movd mm5, dword ptr ds : [public_6d6ede4]
        pfmul mm7, mm0
        pfadd mm4, mm0
        pfadd mm7, mm5
        movd mm5, dword ptr ds : [public_6d6edec]
        pfmul mm7, mm0
        pfmul mm0, mm4
        pfadd mm0, mm5
        pfmul mm7, mm1
        pfrcp mm4, mm0
        pfrcpit1 mm0, mm4
        movd mm5, dword ptr ds : [public_6d6edf8]
        pfrcpit2 mm0, mm4
        pfmul mm0, mm7
        movq mm4, mm2
        pandn mm2, mm5
        movd mm5, dword ptr ds : [public_6d6edf4]
        movq mm7, mm4
        pxor mm2, mm6
        pfadd mm1, mm0
        movd mm0, dword ptr ds : [public_6d6edb4]
        pfadd mm2, mm5
        pslld mm7, 0x1F
        pandn mm4, mm1
        pxor mm7, mm6
        pfadd mm1, mm4
        pand mm0, mm3
        por mm1, mm7
        pfadd mm2, mm1
        pandn mm3, mm2
        por mm0, mm3
        ret 
        UNREACHABLE_TRAP(0x6d595c0)
    }
}
