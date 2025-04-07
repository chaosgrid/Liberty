#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d54b33);
CLANG_FORWARD_PROC_SYMBOL(public_6d568a2);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ba0);

PROC_DECLARE(0x6d54b33, internal_6d54b33, public_6d54b33);
extern "C" NAKED register_t __cdecl internal_6d54b33()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov edx, dword ptr ss : [ebp+0xC]
        and esp, 0xFFFFFFF8
        lea eax, ss:[esp]
        movq mm0, qword ptr ds : [edx]
        movd mm1, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], ebx
        movq qword ptr ss : [esp], mm0
        movd dword ptr ss : [esp+8], mm1
        push eax
        push eax
        call public_6d568a2
        movd mm0, dword ptr ss : [ebp+0x10]
        call public_6d59ba0
        movq mm7, mm0
        movq mm1, mm0
        pfsubr mm0, mmword ptr ds : [public_6d613e0]
        punpckhdq mm7, mm7
        movq mm2, qword ptr ss : [esp]
        movd mm3, dword ptr ss : [esp+8]
        movq mm4, mm2
        movq mm5, mm3
        movd dword ptr ss : [esp+0xC], mm7
        movq mm7, mm3
        punpckldq mm3, mm3
        movq mm6, mm2
        mov esi, dword ptr ss : [esp+0x10]
        punpckhdq mm2, mm3
        pfmul mm3, mm4
        punpckldq mm0, mm0
        pfmul mm2, mm4
        punpckldq mm1, mm1
        pfmul mm2, mm0
        mov eax, dword ptr ss : [ebp+8]
        pfmul mm3, mm0
        pfmul mm4, mm4
        pfmul mm5, mm5
        pfmul mm4, mm0
        mov ebx, dword ptr ss : [esp+0x14]
        pfmul mm5, mm0
        pfadd mm4, mm1
        pfadd mm5, mm1
        movd mm1, dword ptr ss : [esp+0xC]
        pxor mm0, mm0
        punpckldq mm1, mm1
        pfmul mm6, mm1
        punpckldq mm5, mm0
        pfmul mm7, mm1
        movq qword ptr ds : [eax+0x30], mm0
        punpckldq mm7, mm6
        movq mm1, mm2
        punpckhdq mm6, mm6
        movq qword ptr ds : [eax+0x28], mm5
        pfsub mm2, mm7
        pfadd mm1, mm7
        movq mm7, mm3
        pfsub mm3, mm6
        movq mm5, mm4
        punpckldq mm4, mm1
        punpckldq mm3, mm0
        punpckhdq mm1, mm0
        movq qword ptr ds : [eax], mm4
        punpckldq mm7, mm7
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm0, mmword ptr ds : [public_6d613e0]
        pfadd mm7, mm6
        movq qword ptr ds : [eax+0x18], mm1
        punpckhdq mm5, mm5
        movq qword ptr ds : [eax+0x38], mm0
        punpckhdq mm7, mm2
        punpckldq mm2, mm5
        movq qword ptr ds : [eax+0x20], mm7
        movq qword ptr ds : [eax+0x10], mm2
        mov esp, ebp
        pop ebp
        femms 
        ret 0xC
        UNREACHABLE_TRAP(0x6d54b33)
    }
}
