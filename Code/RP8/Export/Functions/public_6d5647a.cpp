#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5647a);

#define public_6d566ec _public_6d566ec
#define public_6d567a4 _public_6d567a4

PROC_DECLARE(0x6d5647a, internal_6d5647a, public_6d5647a);
extern "C" NAKED register_t __cdecl internal_6d5647a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x44
        mov edx, dword ptr ss : [ebp+0x10]
        movq mm0, qword ptr ds : [edx]
        movq mm1, qword ptr ds : [edx+0x10]
        movq mm2, qword ptr ds : [edx+0x20]
        movq mm4, mm0
        movq mm5, mm0
        movq mm6, mm1
        movq mm7, mm1
        punpckhdq mm4, mm4
        punpckldq mm6, mm2
        punpckldq mm5, mm5
        punpckhdq mm7, mm2
        pfmul mm4, mm6
        pfmul mm5, mm7
        movq mm3, qword ptr ds : [edx+0x30]
        movq mm7, mm0
        pfsub mm5, mm4
        punpckldq mm0, mm1
        punpckhdq mm7, mm1
        movq mm6, mm3
        movq mm4, mm3
        punpckhdq mm3, mm3
        punpckhdq mm6, mm2
        punpckldq mm4, mm2
        punpckhdq mm1, mm2
        pfmul mm6, mm0
        punpckhdq mm0, mm4
        pfmul mm7, mm4
        punpckldq mm4, mm4
        pfmul mm0, mm3
        pfmul mm1, mm4
        pfsub mm6, mm7
        pfsubr mm1, mm0
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
        movq qword ptr ss : [ebp-0x3C], mm2
        movq mm2, mm5
        punpckhdq mm3, mm3
        punpckhdq mm2, mm2
        pfmul mm3, mmword ptr ds : [edx+8]
        pfmul mm2, mm0
        pfmul mm4, mm7
        pfsub mm2, mm4
        pfadd mm2, mm3
        movq qword ptr ss : [ebp-0x2C], mm2
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
        movq qword ptr ss : [ebp-0x1C], mm0
        punpckhdq mm5, mm5
        punpckhdq mm6, mm6
        pfmul mm2, mm7
        pfmul mm5, mmword ptr ds : [edx+0x18]
        pfmul mm6, mmword ptr ds : [edx+8]
        pfsub mm2, mm5
        pfadd mm2, mm6
        movq qword ptr ss : [ebp-0xC], mm2
        movq mm0, qword ptr ds : [edx+8]
        movq mm1, qword ptr ds : [edx+0x18]
        movq mm2, qword ptr ds : [edx+0x28]
        movq mm4, mm0
        movq mm5, mm0
        movq mm6, mm1
        movq mm7, mm1
        punpckhdq mm4, mm4
        punpckldq mm6, mm2
        punpckldq mm5, mm5
        punpckhdq mm7, mm2
        pfmul mm4, mm6
        pfmul mm5, mm7
        movq mm3, qword ptr ds : [edx+0x38]
        movq mm7, mm0
        pfsub mm5, mm4
        punpckldq mm0, mm1
        punpckhdq mm7, mm1
        movq mm6, mm3
        movq mm4, mm3
        punpckhdq mm3, mm3
        punpckhdq mm6, mm2
        punpckldq mm4, mm2
        punpckhdq mm1, mm2
        pfmul mm6, mm0
        punpckhdq mm0, mm4
        pfmul mm7, mm4
        punpckldq mm4, mm4
        pfmul mm0, mm3
        pfmul mm1, mm4
        pfsub mm6, mm7
        pfsubr mm1, mm0
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
        movq qword ptr ss : [ebp-0x44], mm2
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
        movq qword ptr ss : [ebp-0x34], mm2
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
        movq qword ptr ss : [ebp-0x24], mm0
        punpckhdq mm5, mm5
        punpckhdq mm6, mm6
        pfmul mm2, mm7
        pfmul mm5, mmword ptr ds : [edx+0x10]
        pfmul mm6, mmword ptr ds : [edx]
        pfsub mm2, mm5
        pfadd mm2, mm6
        movq qword ptr ss : [ebp-0x14], mm2
        punpckldq mm7, mm4
        movq mm3, qword ptr ds : [edx]
        punpckhdq mm0, mm2
        pfmul mm7, mmword ptr ds : [public_6d613d0]
        movq mm1, qword ptr ss : [ebp-0x44]
        punpckldq mm3, dword ptr ds : [edx+0x10]
        punpckhdq mm1, mmword ptr ss : [ebp-0x34]
        pfmul mm3, mmword ptr ds : [public_6d613d0]
        pfmul mm0, mm7
        pfmul mm3, mm1
        pfadd mm0, mm3
        mov eax, dword ptr ss : [ebp+0xC]
        pfacc mm0, mm0
        test eax, eax
        movq mm4, mm0
        je public_6d566ec
        movd dword ptr ds : [eax], mm0
        public_6d566ec : nop
        pfrcp mm1, mm0
        pxor mm3, mm3
        punpckldq mm0, mm0
        pfcmpeq mm3, mm4
        pfrcpit1 mm0, mm1
        pfrcpit2 mm0, mm1
        movd eax, mm3
        pfmul mm0, mmword ptr ds : [public_6d613d0]
        test eax, eax
        movq mm1, mm0
        punpckldq mm2, mm1
        punpckhdq mm1, mm2
        jne public_6d567a4
        mov eax, dword ptr ss : [ebp+8]
        movq mm2, qword ptr ss : [ebp-0x44]
        movq mm5, qword ptr ss : [ebp-0x3C]
        movq mm3, qword ptr ss : [ebp-0x34]
        movq mm6, qword ptr ss : [ebp-0x2C]
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
        movq mm2, qword ptr ss : [ebp-0x24]
        movq mm5, qword ptr ss : [ebp-0x1C]
        movq mm3, qword ptr ss : [ebp-0x14]
        movq mm6, qword ptr ss : [ebp-0xC]
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
        public_6d567a4 : nop
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp-4]
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d5647a)
    }
}

#undef public_6d566ec
#undef public_6d567a4
