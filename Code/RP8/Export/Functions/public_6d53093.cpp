#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53093);

PROC_DECLARE(0x6d53093, internal_6d53093, public_6d53093);
extern "C" NAKED register_t __cdecl internal_6d53093()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        movq mm0, qword ptr ds : [edx]
        movq mm1, qword ptr ds : [edx+0x10]
        movq mm3, qword ptr ds : [edx+0x28]
        movq mm4, qword ptr ds : [edx+0x38]
        movq mm2, mm0
        mov eax, dword ptr ss : [esp+4]
        punpckldq mm0, mm1
        punpckhdq mm2, mm1
        movq mm5, mm3
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+0x10], mm2
        movq mm6, qword ptr ds : [edx+8]
        punpckldq mm3, mm4
        movq mm7, qword ptr ds : [edx+0x18]
        movq mm0, qword ptr ds : [edx+0x20]
        punpckhdq mm5, mm4
        movq mm1, mm6
        movq qword ptr ds : [eax+0x28], mm3
        movq qword ptr ds : [eax+0x38], mm5
        punpckldq mm6, mm7
        movq mm4, qword ptr ds : [edx+0x30]
        movq mm2, mm0
        punpckhdq mm1, mm7
        movq qword ptr ds : [eax+0x20], mm6
        punpckhdq mm0, mm4
        punpckldq mm2, mm4
        movq qword ptr ds : [eax+0x30], mm1
        movq qword ptr ds : [eax+0x18], mm0
        movq qword ptr ds : [eax+8], mm2
        femms 
        ret 8
        UNREACHABLE_TRAP(0x6d53093)
    }
}
