#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5762a);

PROC_DECLARE(0x6d5762a, internal_6d5762a, public_6d5762a);
extern "C" NAKED register_t __cdecl internal_6d5762a()
{
    __asm
    {
        push ebx
        femms 
        mov ebx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+8]
        movq mm0, qword ptr ds : [ecx]
        movq mm1, qword ptr ds : [edx]
        movq mm2, qword ptr ds : [ecx+8]
        movq mm3, qword ptr ds : [edx+8]
        movq mm4, mm3
        movq mm6, mm2
        punpckhdq mm4, mm4
        punpckhdq mm6, mm6
        movq mm5, mm2
        movq mm7, mm3
        punpckldq mm5, mm5
        punpckldq mm7, mm7
        punpckhdq mm5, mm0
        punpckhdq mm7, mm1
        pfmul mm4, mm5
        pfmul mm6, mm7
        pfsub mm4, mm6
        movq mm5, mm0
        punpckhdq mm5, mm2
        movq mm6, mm3
        punpckldq mm6, mm1
        pfmul mm5, mm6
        movq mm6, mm1
        punpckhdq mm6, mm3
        movq mm7, mm2
        punpckldq mm7, mm0
        pfmul mm6, mm7
        pfsub mm5, mm6
        movq mm6, mm1
        punpckldq mm6, mm6
        punpckldq mm2, mm2
        punpckhdq mm2, mm0
        punpckldq mm3, mm3
        punpckldq mm0, mm0
        pfmul mm6, mm2
        punpckhdq mm3, mm1
        pfmul mm0, mm3
        pfsub mm6, mm0
        movq mm0, qword ptr ds : [ebx]
        movq mm1, qword ptr ds : [ebx+8]
        movq mm7, qword ptr ds : [public_6d61460]
        movq mm2, mm4
        movq mm3, mm0
        punpckldq mm2, mm2
        punpckldq mm3, mm3
        pxor mm2, mm7
        punpckhdq mm0, mm3
        pfmul mm2, mm0
        movq mm0, mm7
        movq mm3, mm4
        movq mm7, mm5
        punpckhdq mm3, mm3
        punpckhdq mm7, mm7
        punpckldq mm3, mm5
        punpckldq mm7, mm6
        pfmul mm3, mm1
        pfmul mm7, mm1
        pxor mm3, mm0
        pxor mm7, mm0
        pfacc mm3, mm7
        movq mm7, mm0
        movq mm0, qword ptr ds : [ebx]
        pfsub mm2, mm3
        movq qword ptr ds : [eax], mm2
        punpckhdq mm4, mm5
        pxor mm4, mm7
        movq mm2, mm5
        psrlq mm7, 0x20
        punpckldq mm2, mm6
        pxor mm2, mm7
        punpckhdq mm6, mm6
        movq mm3, mm1
        punpckldq mm3, mm3
        pxor mm6, mm7
        punpckhdq mm1, mm3
        psllq mm7, 0x20
        pfmul mm4, mm0
        pfmul mm2, mm0
        pfmul mm1, mm6
        pxor mm4, mm7
        pxor mm2, mm7
        pfacc mm4, mm2
        pfadd mm1, mm4
        movq qword ptr ds : [eax+8], mm1
        femms 
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d5762a)
    }
}
