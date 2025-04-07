#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d52d6b);
CLANG_FORWARD_PROC_SYMBOL(public_6d57b58);

PROC_DECLARE(0x6d52d6b, internal_6d52d6b, public_6d52d6b);
extern "C" NAKED register_t __cdecl internal_6d52d6b()
{
    __asm
    {
        femms 
        sub esp, 0x14
        mov dword ptr ss : [esp+0x10], ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        mov ecx, esp
        push dword ptr ss : [ebp+0x20]
        push ecx
        call public_6d57b58
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x1C]
        movq mm0, qword ptr ss : [esp]
        movq mm1, qword ptr ds : [ecx]
        movq mm6, mm1
        pfmul mm1, mm0
        movq mm2, qword ptr ss : [esp+8]
        movq mm3, qword ptr ds : [ecx+8]
        movq mm7, mm3
        pfmul mm3, mm2
        pfadd mm1, mm3
        pxor mm0, mmword ptr ds : [public_6d614b0]
        pxor mm2, mmword ptr ds : [public_6d614b0]
        pfacc mm1, mm1
        movq mm4, mm0
        movq mm5, mm0
        punpckldq mm3, mm1
        psllq mm1, 0x20
        psrlq mm3, 0x20
        punpckldq mm4, mm4
        punpckldq mm5, mm5
        pfmul mm4, mm6
        pfmul mm5, mm7
        pfadd mm4, mm3
        movq qword ptr ds : [eax], mm4
        movq qword ptr ds : [eax+8], mm5
        movq mm4, mm0
        movq mm5, mm0
        punpckhdq mm4, mm4
        punpckhdq mm5, mm5
        pfmul mm4, mm6
        pfmul mm5, mm7
        pfadd mm4, mm1
        movq qword ptr ds : [eax+0x10], mm4
        movq qword ptr ds : [eax+0x18], mm5
        movq mm4, mm2
        movq mm5, mm2
        punpckldq mm4, mm4
        punpckldq mm5, mm5
        pfmul mm4, mm6
        pfmul mm5, mm7
        pfadd mm5, mm3
        movq qword ptr ds : [eax+0x20], mm4
        movq qword ptr ds : [eax+0x28], mm5
        movq mm4, mm2
        movq mm5, mm2
        punpckhdq mm4, mm4
        punpckhdq mm5, mm5
        pfmul mm4, mm6
        pfmul mm5, mm7
        pfadd mm5, mm1
        movq qword ptr ds : [eax+0x30], mm4
        movq qword ptr ds : [eax+0x38], mm5
        mov esp, ebp
        mov ebp, dword ptr ss : [esp+0x10]
        add esp, 0x14
        femms 
        ret 0xC
        UNREACHABLE_TRAP(0x6d52d6b)
    }
}
