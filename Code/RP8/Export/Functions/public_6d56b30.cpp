#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d56b30);

PROC_DECLARE(0x6d56b30, internal_6d56b30, public_6d56b30);
extern "C" NAKED register_t __cdecl internal_6d56b30()
{
    __asm
    {
        femms 
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        movq mm0, qword ptr ds : [eax]
        movq mm1, mm0
        punpckldq mm0, mm0
        punpckhdq mm1, mm1
        movd mm2, dword ptr ds : [eax+8]
        punpckldq mm2, mm2
        movq mm3, mm0
        pfmul mm0, mmword ptr ds : [edx]
        movq mm4, mm1
        pfmul mm1, mmword ptr ds : [edx+0x10]
        movq mm5, mm2
        pfmul mm2, mmword ptr ds : [edx+0x20]
        pfadd mm0, mmword ptr ds : [edx+0x30]
        pfmul mm3, mmword ptr ds : [edx+8]
        pfadd mm1, mm2
        pfmul mm4, mmword ptr ds : [edx+0x18]
        pfmul mm5, mmword ptr ds : [edx+0x28]
        pfadd mm3, mmword ptr ds : [edx+0x38]
        pfadd mm0, mm1
        pfadd mm4, mm5
        pfadd mm3, mm4
        movq mm5, mm3
        punpckhdq mm5, mm5
        pfrcp mm4, mm5
        pfrcpit1 mm5, mm4
        pfrcpit2 mm5, mm4
        pfmul mm0, mm5
        pfmul mm3, mm5
        movq qword ptr ds : [ecx], mm0
        movd dword ptr ds : [ecx+8], mm3
        femms 
        mov eax, dword ptr ss : [esp+4]
        ret 0xC
        UNREACHABLE_TRAP(0x6d56b30)
    }
}
