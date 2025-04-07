#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d577cd);

PROC_DECLARE(0x6d577cd, internal_6d577cd, public_6d577cd);
extern "C" NAKED register_t __cdecl internal_6d577cd()
{
    __asm
    {
        femms 
        movd mm0, dword ptr ss : [esp+0x18]
        movq mm1, mm0
        pfmul mm1, mm1
        movq mm2, mm1
        pfmul mm2, mm0
        movq mm3, qword ptr ds : [public_6d61478]
        movq mm4, mm1
        movq mm7, mm2
        pfsub mm7, mm1
        pfmul mm4, mm3
        movq mm6, mm2
        pfmul mm1, mmword ptr ds : [public_6d61480]
        pfmul mm2, mm3
        pfsub mm6, mm4
        movq mm5, mm1
        pfsub mm1, mm2
        pfadd mm6, mm0
        pfsub mm2, mm5
        pfadd mm2, mmword ptr ds : [public_6d61468]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        punpckldq mm7, mm7
        punpckldq mm1, mm1
        punpckldq mm6, mm6
        punpckldq mm2, mm2
        movq mm5, mm7
        pfmul mm7, mmword ptr ds : [eax]
        movq mm0, mm1
        pfmul mm1, mmword ptr ds : [ecx]
        pfmul mm5, mmword ptr ds : [eax+8]
        pfmul mm0, mmword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        movq mm4, mm6
        pfmul mm6, mmword ptr ds : [edx]
        movq mm3, mm2
        pfmul mm2, mmword ptr ds : [ecx]
        pfmul mm4, mmword ptr ds : [edx+8]
        pfmul mm3, mmword ptr ds : [ecx+8]
        pfadd mm1, mm7
        pfadd mm0, mm5
        pfadd mm2, mm6
        pfadd mm3, mm4
        pfadd mm1, mm2
        pfadd mm0, mm3
        movq qword ptr ds : [eax], mm1
        movq qword ptr ds : [eax+8], mm0
        femms 
        ret 0x18
        UNREACHABLE_TRAP(0x6d577cd)
    }
}
