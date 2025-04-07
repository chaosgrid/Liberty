#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57b58);

PROC_DECLARE(0x6d57b58, internal_6d57b58, public_6d57b58);
extern "C" NAKED register_t __cdecl internal_6d57b58()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        movq mm0, qword ptr ds : [edx]
        movq mm2, qword ptr ds : [edx+8]
        movq mm1, mm0
        movq mm3, mm2
        pand mm2, mmword ptr ds : [public_6d61430]
        pfmul mm0, mm0
        pfmul mm2, mm2
        pfadd mm0, mm2
        pfacc mm0, mm0
        movq mm5, mm0
        pfrsqrt mm4, mm0
        pfcmpgt mm5, mmword ptr ds : [public_6d61450]
        movq mm2, mm4
        pfmul mm2, mm4
        pfrsqit1 mm0, mm2
        mov eax, dword ptr ss : [esp+4]
        pand mm1, mm5
        pand mm3, mm5
        pfrcpit2 mm0, mm4
        pfmul mm1, mm0
        pfmul mm3, mm0
        movq qword ptr ds : [eax], mm1
        movq qword ptr ds : [eax+8], mm3
        femms 
        ret 8
        UNREACHABLE_TRAP(0x6d57b58)
    }
}
