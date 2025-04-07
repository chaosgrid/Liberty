#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d56082);

#define public_6d562a5 _public_6d562a5

PROC_DECLARE(0x6d56082, internal_6d56082, public_6d56082);
extern "C" NAKED register_t __cdecl internal_6d56082()
{
    __asm
    {
        femms 
        sub esp, 0x44
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x40], ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        movq mm0, qword ptr ds : [edx]
        movq mm1, qword ptr ds : [edx+0x10]
        movq mm3, qword ptr ds : [edx+0x28]
        movq mm4, qword ptr ds : [edx+0x38]
        movq mm2, mm0
        punpckldq mm0, mm1
        punpckhdq mm2, mm1
        movq mm5, mm3
        movq qword ptr ss : [esp], mm0
        movq qword ptr ss : [esp+0x10], mm2
        movq mm6, qword ptr ds : [edx+8]
        punpckldq mm3, mm4
        movq mm7, qword ptr ds : [edx+0x18]
        movq mm0, qword ptr ds : [edx+0x20]
        punpckhdq mm5, mm4
        movq mm1, mm6
        movq qword ptr ss : [esp+0x28], mm3
        movq qword ptr ss : [esp+0x38], mm5
        mov ecx, dword ptr ss : [ebp+0x4C]
        cmp ecx, dword ptr ss : [ebp+0x48]
        punpckldq mm6, mm7
        movq mm4, qword ptr ds : [edx+0x30]
        movq mm2, mm0
        punpckhdq mm1, mm7
        movq qword ptr ss : [esp+0x20], mm6
        punpckhdq mm0, mm4
        punpckldq mm2, mm4
        movq qword ptr ss : [esp+0x30], mm1
        movq qword ptr ss : [esp+0x18], mm0
        movq qword ptr ss : [esp+8], mm2
        je public_6d562a5
        mov eax, dword ptr ss : [ebp+0x48]
        movq mm0, qword ptr ss : [esp]
        movq mm1, qword ptr ss : [esp+8]
        movq mm2, mm0
        movq mm3, mm1
        movq mm4, mm0
        movq mm5, mm1
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [ecx+8]
        movq mm6, mm2
        movq mm7, mm3
        pfmul mm2, mmword ptr ds : [ecx+0x10]
        pfmul mm3, mmword ptr ds : [ecx+0x18]
        pfmul mm4, mmword ptr ds : [ecx+0x20]
        pfmul mm5, mmword ptr ds : [ecx+0x28]
        pfmul mm6, mmword ptr ds : [ecx+0x30]
        pfmul mm7, mmword ptr ds : [ecx+0x38]
        pfacc mm0, mm2
        pfacc mm1, mm3
        pfacc mm4, mm6
        pfacc mm5, mm7
        pfadd mm0, mm1
        pfadd mm4, mm5
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+8], mm4
        movq mm0, qword ptr ss : [esp+0x10]
        movq mm1, qword ptr ss : [esp+0x18]
        movq mm2, mm0
        movq mm3, mm1
        movq mm4, mm0
        movq mm5, mm1
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [ecx+8]
        movq mm6, mm2
        movq mm7, mm3
        pfmul mm2, mmword ptr ds : [ecx+0x10]
        pfmul mm3, mmword ptr ds : [ecx+0x18]
        pfmul mm4, mmword ptr ds : [ecx+0x20]
        pfmul mm5, mmword ptr ds : [ecx+0x28]
        pfmul mm6, mmword ptr ds : [ecx+0x30]
        pfmul mm7, mmword ptr ds : [ecx+0x38]
        pfacc mm0, mm2
        pfacc mm1, mm3
        pfacc mm4, mm6
        pfacc mm5, mm7
        pfadd mm0, mm1
        pfadd mm4, mm5
        movq qword ptr ds : [eax+0x10], mm0
        movq qword ptr ds : [eax+0x18], mm4
        movq mm0, qword ptr ss : [esp+0x20]
        movq mm1, qword ptr ss : [esp+0x28]
        movq mm2, mm0
        movq mm3, mm1
        movq mm4, mm0
        movq mm5, mm1
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [ecx+8]
        movq mm6, mm2
        movq mm7, mm3
        pfmul mm2, mmword ptr ds : [ecx+0x10]
        pfmul mm3, mmword ptr ds : [ecx+0x18]
        pfmul mm4, mmword ptr ds : [ecx+0x20]
        pfmul mm5, mmword ptr ds : [ecx+0x28]
        pfmul mm6, mmword ptr ds : [ecx+0x30]
        pfmul mm7, mmword ptr ds : [ecx+0x38]
        pfacc mm0, mm2
        pfacc mm1, mm3
        pfacc mm4, mm6
        pfacc mm5, mm7
        pfadd mm0, mm1
        pfadd mm4, mm5
        movq qword ptr ds : [eax+0x20], mm0
        movq qword ptr ds : [eax+0x28], mm4
        movq mm0, qword ptr ss : [esp+0x30]
        movq mm1, qword ptr ss : [esp+0x38]
        movq mm2, mm0
        movq mm3, mm1
        movq mm4, mm0
        movq mm5, mm1
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [ecx+8]
        movq mm6, mm2
        movq mm7, mm3
        pfmul mm2, mmword ptr ds : [ecx+0x10]
        pfmul mm3, mmword ptr ds : [ecx+0x18]
        pfmul mm4, mmword ptr ds : [ecx+0x20]
        pfmul mm5, mmword ptr ds : [ecx+0x28]
        pfmul mm6, mmword ptr ds : [ecx+0x30]
        pfmul mm7, mmword ptr ds : [ecx+0x38]
        pfacc mm0, mm2
        pfacc mm1, mm3
        pfacc mm4, mm6
        pfacc mm5, mm7
        pfadd mm0, mm1
        pfadd mm4, mm5
        movq qword ptr ds : [eax+0x30], mm0
        movq qword ptr ds : [eax+0x38], mm4
        mov esp, ebp
        mov ebp, dword ptr ss : [esp+0x40]
        add esp, 0x44
        femms 
        ret 0xC
        public_6d562a5 : nop
        mov eax, dword ptr ss : [ebp+0x48]
        movq mm0, qword ptr ss : [esp]
        movq mm1, qword ptr ss : [esp+8]
        movq mm2, mm0
        movq mm3, mm1
        movq mm4, mm0
        movq mm5, mm1
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [ecx+8]
        movq mm6, mm2
        movq mm7, mm3
        pfmul mm2, mmword ptr ds : [ecx+0x10]
        pfmul mm3, mmword ptr ds : [ecx+0x18]
        pfmul mm4, mmword ptr ds : [ecx+0x20]
        pfmul mm5, mmword ptr ds : [ecx+0x28]
        pfmul mm6, mmword ptr ds : [ecx+0x30]
        pfmul mm7, mmword ptr ds : [ecx+0x38]
        pfacc mm0, mm2
        pfacc mm1, mm3
        pfacc mm4, mm6
        pfacc mm5, mm7
        pfadd mm0, mm1
        pfadd mm4, mm5
        movq qword ptr ss : [esp], mm0
        movq qword ptr ss : [esp+8], mm4
        movq mm0, qword ptr ss : [esp+0x10]
        movq mm1, qword ptr ss : [esp+0x18]
        movq mm2, mm0
        movq mm3, mm1
        movq mm4, mm0
        movq mm5, mm1
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [ecx+8]
        movq mm6, mm2
        movq mm7, mm3
        pfmul mm2, mmword ptr ds : [ecx+0x10]
        pfmul mm3, mmword ptr ds : [ecx+0x18]
        pfmul mm4, mmword ptr ds : [ecx+0x20]
        pfmul mm5, mmword ptr ds : [ecx+0x28]
        pfmul mm6, mmword ptr ds : [ecx+0x30]
        pfmul mm7, mmword ptr ds : [ecx+0x38]
        pfacc mm0, mm2
        pfacc mm1, mm3
        pfacc mm4, mm6
        pfacc mm5, mm7
        pfadd mm0, mm1
        pfadd mm4, mm5
        movq qword ptr ss : [esp+0x10], mm0
        movq qword ptr ss : [esp+0x18], mm4
        movq mm0, qword ptr ss : [esp+0x20]
        movq mm1, qword ptr ss : [esp+0x28]
        movq mm2, mm0
        movq mm3, mm1
        movq mm4, mm0
        movq mm5, mm1
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [ecx+8]
        movq mm6, mm2
        movq mm7, mm3
        pfmul mm2, mmword ptr ds : [ecx+0x10]
        pfmul mm3, mmword ptr ds : [ecx+0x18]
        pfmul mm4, mmword ptr ds : [ecx+0x20]
        pfmul mm5, mmword ptr ds : [ecx+0x28]
        pfmul mm6, mmword ptr ds : [ecx+0x30]
        pfmul mm7, mmword ptr ds : [ecx+0x38]
        pfacc mm0, mm2
        pfacc mm1, mm3
        pfacc mm4, mm6
        pfacc mm5, mm7
        pfadd mm0, mm1
        pfadd mm4, mm5
        movq qword ptr ss : [esp+0x20], mm0
        movq qword ptr ss : [esp+0x28], mm4
        movq mm0, qword ptr ss : [esp+0x30]
        movq mm1, qword ptr ss : [esp+0x38]
        movq mm2, mm0
        movq mm3, mm1
        movq mm4, mm0
        movq mm5, mm1
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [ecx+8]
        movq mm6, mm2
        movq mm7, mm3
        pfmul mm2, mmword ptr ds : [ecx+0x10]
        pfmul mm3, mmword ptr ds : [ecx+0x18]
        pfmul mm4, mmword ptr ds : [ecx+0x20]
        pfmul mm5, mmword ptr ds : [ecx+0x28]
        pfmul mm6, mmword ptr ds : [ecx+0x30]
        pfmul mm7, mmword ptr ds : [ecx+0x38]
        pfacc mm0, mm2
        pfacc mm1, mm3
        pfacc mm4, mm6
        pfacc mm5, mm7
        pfadd mm0, mm1
        pfadd mm4, mm5
        movq qword ptr ds : [eax+0x30], mm0
        movq qword ptr ds : [eax+0x38], mm4
        movq mm0, qword ptr ss : [esp]
        movq mm1, qword ptr ss : [esp+8]
        movq mm2, qword ptr ss : [esp+0x10]
        movq mm3, qword ptr ss : [esp+0x18]
        movq mm4, qword ptr ss : [esp+0x20]
        movq mm5, qword ptr ss : [esp+0x28]
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+8], mm1
        movq qword ptr ds : [eax+0x10], mm2
        movq qword ptr ds : [eax+0x18], mm3
        movq qword ptr ds : [eax+0x20], mm4
        movq qword ptr ds : [eax+0x28], mm5
        mov esp, ebp
        mov ebp, dword ptr ss : [esp+0x40]
        add esp, 0x44
        femms 
        ret 0xC
        UNREACHABLE_TRAP(0x6d56082)
    }
}

#undef public_6d562a5
