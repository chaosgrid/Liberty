#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d545ff);

#define public_6d54932 _public_6d54932
#define public_6d54b04 _public_6d54b04
#define public_6d54b2b _public_6d54b2b

PROC_DECLARE(0x6d545ff, internal_6d545ff, public_6d545ff);
extern "C" NAKED register_t __cdecl internal_6d545ff()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movd mm6, dword ptr ss : [esp+8]
        pxor mm7, mm7
        mov edx, dword ptr ss : [esp+0x10]
        movq mm5, qword ptr ds : [public_6d613c0]
        mov ecx, dword ptr ss : [esp+0xC]
        movq qword ptr ds : [eax], mm6
        movq qword ptr ds : [eax+8], mm7
        movd dword ptr ds : [eax+0x10], mm7
        sub esp, 0x40
        movd dword ptr ds : [eax+0x14], mm6
        movq qword ptr ds : [eax+0x18], mm7
        test edx, edx
        movq qword ptr ds : [eax+0x20], mm7
        movq qword ptr ds : [eax+0x28], mm6
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm5
        je public_6d54b04
        movq mm0, qword ptr ds : [edx]
        movq mm1, qword ptr ds : [edx+8]
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
        movq qword ptr ss : [esp+0x30], mm0
        pfadd mm7, mm3
        pfacc mm3, mm3
        movq mm4, mm1
        punpckhdq mm6, mm5
        pfsubr mm3, mmword ptr ds : [public_6d613e0]
        pfsubr mm7, mmword ptr ds : [public_6d613e0]
        punpckldq mm3, mm0
        pfadd mm1, mm6
        movq qword ptr ss : [esp+0x28], mm3
        pfsub mm4, mm6
        movq mm3, mm2
        pfadd mm2, mm5
        pfsub mm3, mm5
        movq mm5, mm4
        punpckldq mm2, mm0
        movq mm6, mm1
        punpckldq mm4, mm7
        punpckldq mm1, mm1
        movq qword ptr ss : [esp+0x18], mm2
        punpckhdq mm5, mm0
        punpckldq mm0, dword ptr ds : [public_6d613e0]
        movq qword ptr ss : [esp+8], mm5
        punpckhdq mm6, mm6
        movq qword ptr ss : [esp+0x10], mm4
        punpckhdq mm7, mm1
        punpckldq mm6, mm3
        movq qword ptr ss : [esp], mm7
        movq qword ptr ss : [esp+0x20], mm6
        movq qword ptr ss : [esp+0x38], mm0
        test ecx, ecx
        je public_6d54932
        movq mm0, qword ptr ds : [eax+0x30]
        movd mm1, dword ptr ds : [eax+0x38]
        movq mm2, qword ptr ds : [ecx]
        movd mm3, dword ptr ds : [ecx+8]
        pfsub mm0, mm2
        pfsub mm1, mm3
        movq qword ptr ds : [eax+0x30], mm0
        movd dword ptr ds : [eax+0x38], mm1
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        movq mm0, qword ptr ds : [eax+0x30]
        movd mm1, dword ptr ds : [eax+0x38]
        movq mm2, qword ptr ds : [ecx]
        movd mm3, dword ptr ds : [ecx+8]
        pfadd mm0, mm2
        pfadd mm1, mm3
        movq qword ptr ds : [eax+0x30], mm0
        movd dword ptr ds : [eax+0x38], mm1
        jmp public_6d54b04
        public_6d54932 : nop
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        public_6d54b04 : nop
        mov edx, dword ptr ss : [esp+0x54]
        test edx, edx
        je public_6d54b2b
        movq mm0, qword ptr ds : [edx]
        movd mm1, dword ptr ds : [edx+8]
        movq mm2, qword ptr ds : [eax+0x30]
        movd mm3, dword ptr ds : [eax+0x38]
        pfadd mm0, mm2
        pfadd mm1, mm3
        movq qword ptr ds : [eax+0x30], mm0
        movd dword ptr ds : [eax+0x38], mm1
        public_6d54b2b : nop
        add esp, 0x40
        femms 
        ret 0x14
        UNREACHABLE_TRAP(0x6d545ff)
    }
}

#undef public_6d54932
#undef public_6d54b04
#undef public_6d54b2b
