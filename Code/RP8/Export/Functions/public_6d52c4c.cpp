#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d52c4c);

PROC_DECLARE(0x6d52c4c, internal_6d52c4c, public_6d52c4c);
extern "C" NAKED register_t __cdecl internal_6d52c4c()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movq mm2, qword ptr ds : [eax+0x20]
        movq mm1, qword ptr ds : [eax+0x28]
        movq mm0, qword ptr ds : [eax+0x24]
        punpckhdq mm1, mm1
        punpckldq mm2, mm2
        movq mm5, qword ptr ds : [eax+0x30]
        movq mm4, qword ptr ds : [eax+0x38]
        movq mm3, qword ptr ds : [eax+0x34]
        punpckhdq mm4, mm4
        punpckldq mm5, mm5
        pfmul mm4, mm0
        pfmul mm1, mm3
        pfsub mm4, mm1
        pfmul mm2, mmword ptr ds : [eax+0x38]
        pfmul mm5, mmword ptr ds : [eax+0x28]
        pfsub mm2, mm5
        pfmul mm3, mmword ptr ds : [eax+0x20]
        pfmul mm0, mmword ptr ds : [eax+0x30]
        pfsub mm3, mm0
        movq mm0, mm2
        punpckhdq mm0, mm0
        punpckldq mm0, mm4
        movq mm1, mm3
        punpckhdq mm1, mm4
        movq mm5, mm3
        punpckldq mm5, mm2
        movq mm6, qword ptr ds : [eax+0x18]
        movq mm7, mm6
        punpckhdq mm6, mm6
        pfmul mm4, mmword ptr ds : [eax+0x10]
        pfmul mm3, mm6
        pfadd mm4, mm3
        movq mm3, qword ptr ds : [eax+0x14]
        pfmul mm0, mm3
        pfsub mm4, mm0
        movq mm0, qword ptr ds : [eax+0x10]
        punpckldq mm0, mm0
        movq mm6, qword ptr ds : [eax+8]
        punpckldq mm6, dword ptr ds : [eax]
        pfmul mm4, mm6
        movq mm6, qword ptr ds : [eax+8]
        punpckhdq mm6, mmword ptr ds : [eax]
        pfmul mm5, mm7
        pfmul mm2, mm3
        pfmul mm1, mm0
        pfadd mm1, mm5
        pfsub mm1, mm2
        pfmul mm1, mm6
        pfsub mm4, mm1
        pfacc mm4, mm4
        movd dword ptr ss : [esp+4], mm4
        femms 
        fld dword ptr ss : [esp+4]
        ret 4
        UNREACHABLE_TRAP(0x6d52c4c)
    }
}
