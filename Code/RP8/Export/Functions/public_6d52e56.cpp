#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d52e56);
CLANG_FORWARD_PROC_SYMBOL(public_6d57b58);

PROC_DECLARE(0x6d52e56, internal_6d52e56, public_6d52e56);
extern "C" NAKED register_t __cdecl internal_6d52e56()
{
    __asm
    {
        femms 
        sub esp, 0x14
        mov dword ptr ss : [esp+0x10], ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        mov ecx, esp
        push dword ptr ss : [ebp+0x1C]
        push ecx
        call public_6d57b58
        mov eax, dword ptr ss : [ebp+0x18]
        movq mm0, qword ptr ss : [esp]
        movq mm1, qword ptr ss : [esp+8]
        movq mm2, mm0
        movq mm3, mm1
        pfmul mm0, mmword ptr ds : [public_6d614b8]
        pfmul mm1, mmword ptr ds : [public_6d614c0]
        movq mm4, mm2
        movq mm6, mm2
        punpckldq mm4, mm4
        punpckhdq mm6, mm6
        movq mm5, mm4
        movq mm7, mm6
        psrlq mm5, 0x20
        psrlq mm7, 0x20
        pfmul mm4, mm0
        pfmul mm5, mm1
        pfmul mm6, mm0
        pfmul mm7, mm1
        pfadd mm4, mmword ptr ds : [public_6d614a8]
        pfadd mm6, mmword ptr ds : [public_6d614a0]
        movq qword ptr ds : [eax], mm4
        movq qword ptr ds : [eax+8], mm5
        movq qword ptr ds : [eax+0x10], mm6
        movq qword ptr ds : [eax+0x18], mm7
        movq mm4, mm3
        movq mm6, mm3
        punpckldq mm4, mm4
        punpckhdq mm6, mm6
        movq mm5, mm4
        movq mm7, mm6
        psrlq mm5, 0x20
        psrlq mm7, 0x20
        pfmul mm4, mm0
        pfmul mm5, mm1
        pfmul mm6, mm0
        pfmul mm7, mm1
        pfadd mm5, mmword ptr ds : [public_6d614a8]
        pfadd mm7, mmword ptr ds : [public_6d614a0]
        movq qword ptr ds : [eax+0x20], mm4
        movq qword ptr ds : [eax+0x28], mm5
        movq qword ptr ds : [eax+0x30], mm6
        movq qword ptr ds : [eax+0x38], mm7
        mov esp, ebp
        mov ebp, dword ptr ss : [esp+0x10]
        add esp, 0x14
        femms 
        ret 8
        UNREACHABLE_TRAP(0x6d52e56)
    }
}
