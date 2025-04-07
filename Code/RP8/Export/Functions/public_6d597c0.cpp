#include "RP8-PCH.h"

PROC_DECLARE(0x6d597c0, internal_6d597c0, public_6d597c0);
extern "C" NAKED register_t __cdecl internal_6d597c0()
{
    __asm
    {
        movd mm6, dword ptr ds : [public_6d6eda0]
        movq mm4, mm0
        movd mm2, dword ptr ds : [public_6d6eda4]
        pand mm0, mm6
        movd mm3, dword ptr ds : [public_6d6eda8]
        pand mm4, mm2
        por mm0, mm3
        movd mm3, dword ptr ds : [public_6d6ee10]
        psrld mm4, 0x17
        movq mm2, mm0
        pxor mm5, mm5
        movd mm6, dword ptr ds : [public_6d6ee14]
        pcmpgtd mm0, mm3
        pcmpeqd mm5, mm4
        psubd mm4, mm0
        movd mm3, dword ptr ds : [public_6d6ee18]
        pand mm0, mm6
        movd mm6, dword ptr ds : [public_6d6eda8]
        psubd mm2, mm0
        psubd mm4, mm3
        movq mm0, mm2
        pfadd mm2, mm6
        pfsub mm0, mm6
        pi2fd mm4, mm4
        movd mm7, dword ptr ds : [public_6d6ee0c]
        pfrcp mm6, mm2
        movd mm3, dword ptr ds : [public_6d6ee08]
        pfrcpit1 mm2, mm6
        pfmul mm7, mm4
        pfmul mm3, mm4
        movd mm4, dword ptr ds : [public_6d6ee1c]
        pfrcpit2 mm2, mm6
        movd mm1, dword ptr ds : [public_6d6ee20]
        pfmul mm2, mm0
        movq mm0, mm2
        pfadd mm0, mm0
        pfmul mm2, mm2
        movq mm6, mm2
        pfmul mm2, mm4
        movd mm4, dword ptr ds : [public_6d6ee24]
        pfadd mm2, mm1
        pfmul mm2, mm6
        movd mm1, dword ptr ds : [public_6d6ee2c]
        pfmul mm6, mm0
        pfadd mm2, mm4
        pfmul mm2, mm6
        pfadd mm2, mm0
        movq mm0, mm5
        pand mm5, mm1
        pfadd mm2, mm7
        pfadd mm2, mm3
        pandn mm0, mm2
        por mm0, mm5
        ret 
        UNREACHABLE_TRAP(0x6d597c0)
    }
}
