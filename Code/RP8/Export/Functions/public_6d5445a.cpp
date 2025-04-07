#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5445a);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ba0);

PROC_DECLARE(0x6d5445a, internal_6d5445a, public_6d5445a);
extern "C" NAKED register_t __cdecl internal_6d5445a()
{
    __asm
    {
        sub esp, 0x14
        mov dword ptr ss : [esp+0x10], ebp
        lea ebp, ss:[esp+0x10]
        movq mm0, qword ptr ds : [public_6d61470]
        sub esp, 0x20
        mov dword ptr ss : [esp+4], ebx
        mov dword ptr ss : [esp], esi
        movq mm1, mm0
        pfmul mm0, mmword ptr ss : [ebp+0x14]
        pfmul mm1, mmword ptr ss : [ebp+0xC]
        movq qword ptr ss : [esp+0x18], mm1
        call public_6d59ba0
        movq qword ptr ss : [esp+8], mm0
        movq mm0, qword ptr ss : [esp+0x18]
        punpckhdq mm0, mm0
        call public_6d59ba0
        movq qword ptr ss : [esp+0x10], mm0
        movq mm0, qword ptr ss : [esp+0x18]
        call public_6d59ba0
        movq mm1, qword ptr ss : [esp+8]
        movq mm2, qword ptr ss : [esp+0x10]
        movq mm7, qword ptr ds : [public_6d61400]
        movq mm3, mm0
        movq mm4, mm0
        movq mm5, mm0
        punpckldq mm0, mm0
        punpckldq mm3, mm3
        punpckhdq mm4, mm4
        punpckhdq mm5, mm5
        pxor mm0, mm7
        psrlq mm7, 0x20
        movq mm6, mm2
        punpckldq mm2, mm2
        punpckhdq mm6, mm6
        pxor mm5, mm7
        pfmul mm0, mm6
        pfmul mm3, mm2
        pfmul mm4, mm2
        pfmul mm5, mm6
        movq mm7, mm1
        punpckhdq mm7, mm7
        punpckldq mm7, mm1
        pfmul mm0, mm1
        pfmul mm3, mm7
        pfmul mm4, mm7
        pfmul mm5, mm1
        pfadd mm0, mm4
        pfadd mm3, mm5
        movq qword ptr ss : [ebp-0x10], mm0
        movq qword ptr ss : [ebp-8], mm3
        mov esi, dword ptr ss : [esp]
        mov ebx, dword ptr ss : [esp+4]
        add esp, 0x20
        mov eax, dword ptr ss : [ebp+8]
        movq mm0, qword ptr ss : [esp]
        movq mm1, qword ptr ss : [esp+8]
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
        movq qword ptr ds : [eax+0x30], mm0
        pfadd mm7, mm3
        pfacc mm3, mm3
        movq mm4, mm1
        punpckhdq mm6, mm5
        pfsubr mm3, mmword ptr ds : [public_6d613e0]
        pfsubr mm7, mmword ptr ds : [public_6d613e0]
        punpckldq mm3, mm0
        pfadd mm1, mm6
        movq qword ptr ds : [eax+0x28], mm3
        pfsub mm4, mm6
        movq mm3, mm2
        pfadd mm2, mm5
        pfsub mm3, mm5
        movq mm5, mm4
        punpckldq mm2, mm0
        movq mm6, mm1
        punpckldq mm4, mm7
        punpckldq mm1, mm1
        movq qword ptr ds : [eax+0x18], mm2
        punpckhdq mm5, mm0
        punpckldq mm0, dword ptr ds : [public_6d613e0]
        movq qword ptr ds : [eax+8], mm5
        punpckhdq mm6, mm6
        movq qword ptr ds : [eax+0x10], mm4
        punpckhdq mm7, mm1
        punpckldq mm6, mm3
        movq qword ptr ds : [eax], mm7
        movq qword ptr ds : [eax+0x20], mm6
        movq qword ptr ds : [eax+0x38], mm0
        lea esp, ss:[ebp+4]
        mov ebp, dword ptr ss : [ebp]
        femms 
        ret 0x10
        UNREACHABLE_TRAP(0x6d5445a)
    }
}
