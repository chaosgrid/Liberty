#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5320d);

PROC_DECLARE(0x6d5320d, internal_6d5320d, public_6d5320d);
extern "C" NAKED register_t __cdecl internal_6d5320d()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        movq mm0, qword ptr ds : [ecx]
        movq mm1, qword ptr ds : [ecx+8]
        pswapd mm3, mm0
        movq mm6, mm0
        movq mm2, mm0
        pfadd mm0, mm0
        movq mm4, mm1
        punpckhdq mm6, mm1
        pfadd mm1, mm1
        movq mm5, mm0
        pfmul mm0, mm2
        punpckldq mm5, mm1
        pfmul mm2, mm1
        pfmul mm3, mm1
        pfmul mm1, mm4
        pfmul mm6, mm5
        movq mm4, mm0
        pfsubr mm0, mmword ptr ds : [public_6d613e0]
        movq mm5, mm1
        punpckldq mm1, mm1
        pfpnacc mm3, mm3
        pfacc mm4, mm4
        pfpnacc mm6, mm6
        pfpnacc mm2, mm2
        pfsub mm0, mm1
        pswapd mm5, mm2
        pfsubr mm4, mmword ptr ds : [public_6d613e0]
        pxor mm7, mm7
        movq mm1, mm0
        movq qword ptr ds : [eax+0x30], mm7
        punpckldq mm5, mm3
        punpckldq mm2, mm7
        punpckhdq mm4, mm7
        punpckhdq mm0, mm6
        movq qword ptr ds : [eax+0x20], mm5
        punpckhdq mm3, mm7
        movq qword ptr ds : [eax+8], mm2
        punpckldq mm6, mm1
        movq qword ptr ds : [eax+0x28], mm4
        punpckldq mm7, dword ptr ds : [public_6d613e0]
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+0x10], mm6
        movq qword ptr ds : [eax+0x18], mm3
        movq qword ptr ds : [eax+0x38], mm7
        femms 
        ret 8
        UNREACHABLE_TRAP(0x6d5320d)
    }
}
