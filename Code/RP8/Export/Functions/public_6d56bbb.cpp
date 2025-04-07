#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d56bbb);

PROC_DECLARE(0x6d56bbb, internal_6d56bbb, public_6d56bbb);
extern "C" NAKED register_t __cdecl internal_6d56bbb()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        movq mm0, qword ptr ds : [ecx]
        movq mm1, qword ptr ds : [ecx+8]
        movq mm4, qword ptr ds : [edx]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ds : [edx+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ds : [edx+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ds : [edx+8]
        movq mm7, qword ptr ds : [edx+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ds : [edx+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ds : [edx+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ds : [edx+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [ecx+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [ecx+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ds : [edx]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ds : [edx+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ds : [edx+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ds : [edx+8]
        movq mm7, qword ptr ds : [edx+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ds : [edx+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ds : [edx+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ds : [edx+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [ecx+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [ecx+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ds : [edx]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ds : [edx+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ds : [edx+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ds : [edx+8]
        movq mm7, qword ptr ds : [edx+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ds : [edx+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ds : [edx+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ds : [edx+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [ecx+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [ecx+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ds : [edx]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ds : [edx+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ds : [edx+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ds : [edx+8]
        movq mm7, qword ptr ds : [edx+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ds : [edx+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ds : [edx+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ds : [edx+0x38]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        femms 
        mov eax, dword ptr ss : [esp+4]
        ret 0xC
        UNREACHABLE_TRAP(0x6d56bbb)
    }
}
