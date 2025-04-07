#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5775c);

PROC_DECLARE(0x6d5775c, internal_6d5775c, public_6d5775c);
extern "C" NAKED register_t __cdecl internal_6d5775c()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+8]
        movq mm0, qword ptr ds : [edx]
        movq mm1, qword ptr ds : [edx+8]
        movq mm2, qword ptr ds : [ecx]
        movq mm3, qword ptr ds : [ecx+8]
        movq mm4, qword ptr ds : [eax]
        movq mm5, qword ptr ds : [eax+8]
        movd mm6, dword ptr ss : [esp+0x14]
        movd mm7, dword ptr ss : [esp+0x18]
        pfsub mm0, mm4
        pfsub mm1, mm5
        mov eax, dword ptr ss : [esp+4]
        pfsub mm2, mm4
        pfsub mm3, mm5
        punpckldq mm6, mm6
        punpckldq mm7, mm7
        pfmul mm0, mm6
        pfmul mm1, mm6
        pfmul mm2, mm7
        pfadd mm0, mm4
        pfmul mm3, mm7
        pfadd mm1, mm5
        pfadd mm0, mm2
        pfadd mm1, mm3
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+8], mm1
        femms 
        ret 0x18
        UNREACHABLE_TRAP(0x6d5775c)
    }
}
