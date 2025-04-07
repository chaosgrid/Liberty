#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51659);

#define public_6d5172a _public_6d5172a
#define public_6d517a3 _public_6d517a3
#define public_6d51817 _public_6d51817

PROC_DECLARE(0x6d51659, internal_6d51659, public_6d51659);
extern "C" NAKED register_t __cdecl internal_6d51659()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        movq mm0, qword ptr ds : [edx]
        pxor mm6, mm6
        movd mm4, dword ptr ds : [edx+0x14]
        movq mm1, mm0
        movq mm2, mm0
        movq mm3, mm0
        pfadd mm0, mm4
        movd mm5, dword ptr ds : [edx+0x28]
        pfsub mm1, mm4
        pfsubr mm2, mm4
        pfsubr mm3, mm5
        pfadd mm0, mm5
        pfsub mm1, mm5
        pfsub mm2, mm5
        movq mm5, qword ptr ds : [edx+0x20]
        pfsub mm3, mm4
        punpckldq mm0, mm2
        movq mm7, mm2
        punpckldq mm6, mm1
        punpckldq mm7, mm1
        punpckldq mm3, mm3
        pfcmpge mm6, mm0
        pfcmpge mm7, mm3
        packssdw mm6, mm7
        packsswb mm6, mm6
        movd ecx, mm6
        test ecx, 1
        movq mm6, mm5
        mov eax, ecx
        jne public_6d5172a
        pfadd mm0, mmword ptr ds : [public_6d613d0]
        movd mm3, dword ptr ds : [edx+0x18]
        movd mm7, dword ptr ds : [edx+8]
        pfrsqrt mm4, mm0
        punpckldq mm3, mm5
        punpckldq mm7, mm7
        movq mm2, mm4
        punpckldq mm0, mm0
        pfmul mm4, mm4
        punpckhdq mm5, mm7
        movd mm6, dword ptr ds : [edx+0x10]
        pfrsqit1 mm4, mm0
        punpckhdq mm1, mm1
        pfsub mm3, mm5
        pfrcpit2 mm4, mm2
        pfsub mm1, mm6
        pfmul mm4, mmword ptr ds : [public_6d61448]
        mov eax, dword ptr ss : [esp+4]
        pfmul mm0, mm4
        pfmul mm1, mm4
        pfmul mm3, mm4
        punpckldq mm1, mm0
        movq qword ptr ds : [eax], mm3
        movq qword ptr ds : [eax+8], mm1
        femms 
        ret 8
        public_6d5172a : nop
        and eax, 0xFF00FF00
        cmp eax, 0xFF00FF00
        mov eax, dword ptr ss : [esp+4]
        jne public_6d517a3
        pfadd mm1, mmword ptr ds : [public_6d613d0]
        punpckhdq mm2, mm2
        pfrsqrt mm4, mm1
        movd mm3, dword ptr ds : [edx+0x10]
        movq mm0, mm4
        pfmul mm4, mm4
        punpckldq mm1, mm1
        punpckldq mm5, dword ptr ds : [edx+0x18]
        pfsub mm3, mm2
        pfrsqit1 mm4, mm1
        movd mm7, dword ptr ds : [edx+8]
        punpckhdq mm6, mm6
        pfrcpit2 mm4, mm0
        punpckldq mm7, mm6
        pfmul mm4, mmword ptr ds : [public_6d61448]
        pxor mm7, mmword ptr ds : [public_6d61400]
        pfmul mm1, mm4
        pfadd mm5, mm7
        pfmul mm3, mm4
        mov eax, dword ptr ss : [esp+4]
        pfmul mm5, mm4
        punpckldq mm1, mm3
        movq qword ptr ds : [eax+8], mm5
        movq qword ptr ds : [eax], mm1
        femms 
        ret 8
        public_6d517a3 : nop
        test ecx, 0x10000
        mov eax, dword ptr ss : [esp+4]
        je public_6d51817
        pfadd mm2, mmword ptr ds : [public_6d613d0]
        punpckhdq mm1, mm1
        movq mm6, mm5
        pfrsqrt mm4, mm2
        movd mm3, dword ptr ds : [edx+0x18]
        punpckhdq mm6, mm6
        movq mm0, mm4
        pfmul mm4, mm4
        punpckldq mm2, mm2
        punpckldq mm6, dword ptr ds : [edx+8]
        punpckldq mm3, mm5
        pfrsqit1 mm4, mm2
        movd mm7, dword ptr ds : [edx+0x10]
        pfrcpit2 mm4, mm0
        pxor mm6, mmword ptr ds : [public_6d61400]
        pfadd mm1, mm7
        pfmul mm4, mmword ptr ds : [public_6d61448]
        pfadd mm3, mm6
        pfmul mm1, mm4
        pfmul mm2, mm4
        pfmul mm3, mm4
        punpckldq mm1, mm2
        movq qword ptr ds : [eax+8], mm3
        movq qword ptr ds : [eax], mm1
        femms 
        ret 8
        public_6d51817 : nop
        pfadd mm3, mmword ptr ds : [public_6d613d0]
        punpckhdq mm1, mm1
        pfrsqrt mm2, mm3
        movd mm4, dword ptr ds : [edx+8]
        punpckhdq mm6, mm6
        movq mm0, mm2
        pfmul mm2, mm2
        punpckldq mm3, mm3
        punpckldq mm5, dword ptr ds : [edx+0x18]
        punpckldq mm4, mm6
        pfrsqit1 mm2, mm3
        movd mm7, dword ptr ds : [edx+0x10]
        pfrcpit2 mm2, mm0
        pfsub mm1, mm7
        pfadd mm5, mm4
        pfmul mm2, mmword ptr ds : [public_6d61448]
        pfmul mm3, mm2
        pfmul mm1, mm2
        pfmul mm5, mm2
        punpckldq mm3, mm1
        movq qword ptr ds : [eax], mm5
        movq qword ptr ds : [eax+8], mm3
        femms 
        ret 8
        UNREACHABLE_TRAP(0x6d51659)
    }
}

#undef public_6d5172a
#undef public_6d517a3
#undef public_6d51817
