#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d594c0);

PROC_DECLARE(0x6d594c0, internal_6d594c0, public_6d594c0);
extern "C" NAKED register_t __cdecl internal_6d594c0()
{
    __asm
    {
        movd mm7, dword ptr ds : [public_6d6ed98]
        movd mm6, dword ptr ds : [public_6d6ed98]
        movd mm5, dword ptr ds : [public_6d6ed9c]
        pand mm7, mm0
        pand mm6, mm1
        psrld mm7, 1
        por mm7, mm6
        pand mm1, mm5
        pand mm0, mm5
        movq mm6, mm1
        movq mm2, mm0
        pcmpgtd mm6, mm0
        pfmax mm0, mm1
        pslld mm6, 0x1F
        pfmin mm1, mm2
        pfrcp mm2, mm0
        movd mm5, dword ptr ds : [public_6d6edd8]
        pfrcpit1 mm0, mm2
        movd mm4, dword ptr ds : [public_6d6eddc]
        pfrcpit2 mm0, mm2
        movd mm3, dword ptr ds : [public_6d6edd0]
        pfmul mm0, mm1
        movq mm1, mm0
        pfmul mm0, mm0
        pfadd mm3, mm0
        pfmul mm4, mm0
        movd mm2, dword ptr ds : [public_6d6edcc]
        pfmul mm3, mm0
        pfadd mm4, mm5
        movd mm5, dword ptr ds : [public_6d6edd4]
        pfadd mm3, mm2
        pfmul mm4, mm0
        movd mm2, dword ptr ds : [public_6d6edc8]
        pfmul mm3, mm0
        pfadd mm4, mm5
        pfadd mm3, mm2
        pfmul mm0, mm4
        movq mm4, mm7
        pfmul mm0, mm1
        pfrcp mm5, mm3
        pslld mm7, 1
        pfrcpit1 mm3, mm5
        pfrcpit2 mm3, mm5
        movq mm5, mm7
        pxor mm7, mm6
        pfmul mm0, mm3
        movd mm3, dword ptr ds : [public_6d6edf8]
        pxor mm5, mm3
        psrad mm6, 0x1F
        pfadd mm0, mm1
        pandn mm6, mm5
        movd mm1, dword ptr ds : [public_6d6ed98]
        pfsub mm6, mm3
        por mm0, mm7
        pand mm1, mm4
        pfadd mm0, mm6
        por mm0, mm1
        ret 
        UNREACHABLE_TRAP(0x6d594c0)
    }
}
