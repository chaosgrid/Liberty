#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57895);

PROC_DECLARE(0x6d57895, internal_6d57895, public_6d57895);
extern "C" NAKED register_t __cdecl internal_6d57895()
{
    __asm
    {
        movd mm0, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+8]
        movq mm1, mm0
        punpckldq mm0, mm0
        pfmul mm0, mm0
        punpckldq mm1, dword ptr ds : [public_6d613e0]
        pfmul mm0, mm1
        movq mm3, mm1
        pfmul mm1, mm1
        pxor mm7, mm7
        pfsub mm0, mm1
        punpckldq mm1, mm1
        movq mm4, mm0
        punpckldq mm3, mm3
        pfmul mm0, mmword ptr ds : [public_6d613f0]
        movq mm5, mm0
        punpckldq mm0, mm4
        pxor mm3, mmword ptr ds : [public_6d61400]
        punpckhdq mm5, mm7
        pfadd mm1, mm3
        pfsub mm1, mm0
        mov ecx, dword ptr ss : [esp+0xC]
        pfsub mm0, mm5
        movq mm2, mm1
        punpckhdq mm1, mm1
        movq mm3, mm0
        punpckldq mm0, mm0
        mov eax, dword ptr ss : [esp+0x10]
        punpckldq mm2, mm2
        movq mm4, mm1
        pfmul mm1, mmword ptr ds : [edx]
        punpckhdq mm3, mm3
        movq mm5, mm0
        pfmul mm0, mmword ptr ds : [ecx]
        movq mm6, mm2
        pfmul mm2, mmword ptr ds : [eax]
        movq mm7, mm3
        pfmul mm4, mmword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp+0x14]
        pfmul mm5, mmword ptr ds : [ecx+8]
        pfadd mm0, mm1
        pfmul mm6, mmword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+4]
        pfadd mm4, mm5
        pfadd mm0, mm2
        pfmul mm3, mmword ptr ds : [edx]
        movq mm1, qword ptr ds : [public_6d61448]
        pfadd mm0, mm3
        pfmul mm7, mmword ptr ds : [edx+8]
        pfadd mm4, mm6
        pfmul mm0, mm1
        pfadd mm4, mm7
        movq qword ptr ds : [eax], mm0
        pfmul mm4, mm1
        movq qword ptr ds : [eax+8], mm4
        femms 
        ret 0x18
        UNREACHABLE_TRAP(0x6d57895)
    }
}
