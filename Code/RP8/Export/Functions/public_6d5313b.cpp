#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5313b);

PROC_DECLARE(0x6d5313b, internal_6d5313b, public_6d5313b);
extern "C" NAKED register_t __cdecl internal_6d5313b()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        movq mm0, qword ptr ds : [ecx]
        movq mm1, qword ptr ds : [ecx+8]
        movq mm2, mm0
        movq mm3, mm0
        pfadd mm0, mm0
        movq mm4, mm1
        movq mm7, mm1
        pfadd mm1, mm1
        punpckhdq mm2, mm2
        movq mm5, mm0
        punpckhdq mm4, mm4
        pfmul mm3, mm0
        punpckldq mm1, mm0
        punpckldq mm7, mm7
        pfmul mm5, mm4
        movq mm6, mm1
        pfmul mm7, mm1
        pfmul mm1, mm2
        pxor mm0, mm0
        pfmul mm6, mm4
        movq mm2, mm1
        punpckhdq mm1, mm7
        punpckldq mm7, mm7
        punpckldq mm6, mm6
        movq qword ptr ds : [eax+0x30], mm0
        pfadd mm7, mm3
        pfacc mm3, mm3
        movq mm4, mm1
        punpckhdq mm6, mm5
        pfsubr mm3, mmword ptr ds : [public_6d613e0]
        pfsubr mm7, mmword ptr ds : [public_6d613e0]
        punpckldq mm3, mm0
        pfadd mm1, mm6
        movq qword ptr ds : [eax+0x28], mm3
        pfsub mm4, mm6
        movq mm3, mm2
        pfadd mm2, mm5
        pfsub mm3, mm5
        movq mm5, mm4
        punpckldq mm2, mm0
        movq mm6, mm1
        punpckldq mm4, mm7
        punpckldq mm1, mm1
        movq qword ptr ds : [eax+0x18], mm2
        punpckhdq mm5, mm0
        punpckldq mm0, dword ptr ds : [public_6d613e0]
        movq qword ptr ds : [eax+8], mm5
        punpckhdq mm6, mm6
        movq qword ptr ds : [eax+0x10], mm4
        punpckhdq mm7, mm1
        punpckldq mm6, mm3
        movq qword ptr ds : [eax], mm7
        movq qword ptr ds : [eax+0x20], mm6
        movq qword ptr ds : [eax+0x38], mm0
        femms 
        ret 8
        UNREACHABLE_TRAP(0x6d5313b)
    }
}
