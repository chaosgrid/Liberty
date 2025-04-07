#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57bbc);

PROC_DECLARE(0x6d57bbc, internal_6d57bbc, public_6d57bbc);
extern "C" NAKED register_t __cdecl internal_6d57bbc()
{
    __asm
    {
        femms 
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        movq mm0, qword ptr ds : [ecx]
        movq mm1, mm0
        punpckldq mm0, mm0
        punpckhdq mm1, mm1
        movq mm2, qword ptr ds : [ecx+8]
        movq mm3, mm2
        punpckldq mm2, mm2
        punpckhdq mm3, mm3
        movq mm4, mm0
        pfmul mm0, mmword ptr ds : [edx]
        movq mm5, mm1
        pfmul mm1, mmword ptr ds : [edx+0x10]
        movq mm6, mm2
        pfmul mm2, mmword ptr ds : [edx+0x20]
        movq mm7, mm3
        pfmul mm3, mmword ptr ds : [edx+0x30]
        pfadd mm0, mm1
        pfmul mm4, mmword ptr ds : [edx+8]
        pfadd mm2, mm3
        pfmul mm5, mmword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+4]
        pfmul mm6, mmword ptr ds : [edx+0x28]
        pfmul mm7, mmword ptr ds : [edx+0x38]
        pfadd mm0, mm2
        pfadd mm4, mm5
        pfadd mm6, mm7
        pfadd mm4, mm6
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+8], mm4
        femms 
        ret 0xC
        UNREACHABLE_TRAP(0x6d57bbc)
    }
}
