#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d55da0);

#define public_6d55fbf _public_6d55fbf
#define public_6d5607a _public_6d5607a

PROC_DECLARE(0x6d55da0, internal_6d55da0, public_6d55da0);
extern "C" NAKED register_t __cdecl internal_6d55da0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        sub esp, 0x40
        movq mm1, qword ptr ds : [edx+0x10]
        movq mm2, qword ptr ds : [edx+0x20]
        pswapd mm5, mm1
        movq mm3, qword ptr ds : [edx+0x30]
        pswapd mm4, mm2
        movq mm0, qword ptr ds : [edx]
        pswapd mm6, mm3
        pswapd mm7, mm2
        pfmul mm5, mm0
        pfmul mm4, mm0
        pfmul mm6, mm0
        pswapd mm0, mm3
        pfmul mm7, mm1
        pfnacc mm5, mm4
        pfmul mm1, mm0
        pfmul mm2, mm0
        pfnacc mm6, mm7
        pfnacc mm1, mm2
        movq mm0, qword ptr ds : [edx+0x38]
        movq mm2, mm6
        movq mm4, mm1
        movq mm7, qword ptr ds : [edx+0x28]
        punpckhdq mm2, mm2
        movq mm3, mm1
        punpckhdq mm4, mm4
        pfmul mm2, mm0
        punpckldq mm3, mm3
        pfmul mm4, mmword ptr ds : [edx+0x18]
        pfmul mm3, mm7
        pfadd mm2, mm4
        movq mm4, mm6
        pfsub mm2, mm3
        movq mm3, mm1
        punpckldq mm4, mm4
        movq qword ptr ss : [esp+8], mm2
        movq mm2, mm5
        punpckhdq mm3, mm3
        punpckhdq mm2, mm2
        pfmul mm3, mmword ptr ds : [edx+8]
        pfmul mm2, mm0
        pfmul mm4, mm7
        pfsub mm2, mm4
        pfadd mm2, mm3
        movq qword ptr ss : [esp+0x18], mm2
        movq mm2, mm5
        movq mm3, mm6
        punpckldq mm1, mm1
        punpckldq mm2, mm2
        punpckldq mm3, mm3
        pfmul mm1, mmword ptr ds : [edx+8]
        pfmul mm0, mm2
        pfmul mm3, mmword ptr ds : [edx+0x18]
        pfadd mm0, mm1
        pfsub mm0, mm3
        movq qword ptr ss : [esp+0x28], mm0
        punpckhdq mm5, mm5
        punpckhdq mm6, mm6
        pfmul mm2, mm7
        pfmul mm5, mmword ptr ds : [edx+0x18]
        movq mm0, qword ptr ds : [edx+8]
        pfmul mm6, mmword ptr ds : [edx+8]
        pfsub mm2, mm5
        pfadd mm2, mm6
        movq qword ptr ss : [esp+0x38], mm2
        movq mm1, qword ptr ds : [edx+0x18]
        movq mm2, qword ptr ds : [edx+0x28]
        movq mm3, qword ptr ds : [edx+0x38]
        pswapd mm5, mm1
        pswapd mm4, mm2
        pfmul mm5, mm0
        pswapd mm6, mm3
        pfmul mm4, mm0
        pswapd mm7, mm2
        pfmul mm6, mm0
        pswapd mm0, mm3
        pfnacc mm5, mm4
        pfmul mm7, mm1
        pfmul mm1, mm0
        pfmul mm2, mm0
        pfnacc mm6, mm7
        pfnacc mm1, mm2
        movq mm0, qword ptr ds : [edx+0x30]
        movq mm4, mm1
        movq mm3, mm1
        movq mm7, qword ptr ds : [edx+0x20]
        movq mm2, mm6
        punpckhdq mm4, mm4
        punpckldq mm3, mm3
        punpckhdq mm2, mm2
        pfmul mm4, mmword ptr ds : [edx+0x10]
        pfmul mm2, mm0
        pfmul mm3, mm7
        pfadd mm2, mm4
        pfsub mm2, mm3
        movq qword ptr ss : [esp], mm2
        movq mm3, mm1
        movq mm4, mm6
        movq mm2, mm5
        punpckhdq mm3, mm3
        punpckldq mm4, mm4
        punpckhdq mm2, mm2
        pfmul mm3, mmword ptr ds : [edx]
        pfmul mm2, mm0
        pfmul mm4, mm7
        pfsub mm2, mm4
        pfadd mm2, mm3
        movq qword ptr ss : [esp+0x10], mm2
        movq mm4, mm0
        movq mm2, mm5
        movq mm3, mm6
        punpckldq mm1, mm1
        punpckldq mm2, mm2
        punpckldq mm3, mm3
        pfmul mm1, mmword ptr ds : [edx]
        pfmul mm0, mm2
        pfmul mm3, mmword ptr ds : [edx+0x10]
        pfadd mm0, mm1
        pfsub mm0, mm3
        movq qword ptr ss : [esp+0x20], mm0
        punpckhdq mm5, mm5
        punpckhdq mm6, mm6
        pfmul mm2, mm7
        pfmul mm5, mmword ptr ds : [edx+0x10]
        pfmul mm6, mmword ptr ds : [edx]
        pfsub mm2, mm5
        pfadd mm2, mm6
        movq qword ptr ss : [esp+0x30], mm2
        punpckhdq mm0, mm2
        punpckldq mm7, mm4
        movq mm3, qword ptr ds : [edx]
        movq mm1, qword ptr ss : [esp]
        punpckldq mm3, dword ptr ds : [edx+0x10]
        punpckhdq mm1, mmword ptr ss : [esp+0x10]
        pfmul mm0, mm7
        pfmul mm3, mm1
        pfnacc mm0, mm3
        mov eax, dword ptr ss : [esp+0x48]
        pfacc mm0, mm0
        test eax, eax
        movq mm4, mm0
        je public_6d55fbf
        movd dword ptr ds : [eax], mm0
        public_6d55fbf : nop
        pfrcp mm1, mm0
        pxor mm3, mm3
        punpckldq mm0, mm0
        pfcmpeq mm3, mm4
        pfrcpit1 mm0, mm1
        pfrcpit2 mm0, mm1
        movd eax, mm3
        pfmul mm0, mmword ptr ds : [public_6d613d0]
        test eax, eax
        pswapd mm1, mm0
        jne public_6d5607a
        mov eax, dword ptr ss : [esp+0x44]
        movq mm2, qword ptr ss : [esp]
        movq mm5, qword ptr ss : [esp+8]
        movq mm3, qword ptr ss : [esp+0x10]
        movq mm6, qword ptr ss : [esp+0x18]
        pfmul mm2, mm1
        pfmul mm3, mm0
        pfmul mm5, mm1
        pfmul mm6, mm0
        movq mm4, mm2
        movq mm7, mm5
        punpckhdq mm2, mm3
        punpckldq mm4, mm3
        punpckhdq mm5, mm6
        punpckldq mm7, mm6
        movq qword ptr ds : [eax], mm2
        movq qword ptr ds : [eax+0x10], mm4
        movq qword ptr ds : [eax+0x20], mm5
        movq qword ptr ds : [eax+0x30], mm7
        movq mm2, qword ptr ss : [esp+0x20]
        movq mm5, qword ptr ss : [esp+0x28]
        movq mm3, qword ptr ss : [esp+0x30]
        movq mm6, qword ptr ss : [esp+0x38]
        pfmul mm2, mm1
        pfmul mm3, mm0
        pfmul mm5, mm1
        pfmul mm6, mm0
        movq mm4, mm2
        movq mm7, mm5
        punpckhdq mm2, mm3
        punpckldq mm4, mm3
        punpckhdq mm5, mm6
        punpckldq mm7, mm6
        movq qword ptr ds : [eax+8], mm2
        movq qword ptr ds : [eax+0x18], mm4
        movq qword ptr ds : [eax+0x28], mm5
        movq qword ptr ds : [eax+0x38], mm7
        public_6d5607a : nop
        femms 
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6d55da0)
    }
}

#undef public_6d55fbf
#undef public_6d5607a
