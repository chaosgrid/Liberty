#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d52ff3);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ba0);

PROC_DECLARE(0x6d52ff3, internal_6d52ff3, public_6d52ff3);
extern "C" NAKED register_t __cdecl internal_6d52ff3()
{
    __asm
    {
        push ebx
        push esi
        femms 
        movd mm0, dword ptr ss : [esp+0x10]
        call public_6d59ba0
        mov eax, dword ptr ss : [esp+0xC]
        movq mm4, mm0
        punpckhdq mm4, mm4
        pxor mm1, mm1
        movq mm2, qword ptr ds : [public_6d614a8]
        movq mm3, qword ptr ds : [public_6d614a0]
        punpckldq mm4, mm0
        pxor mm4, mmword ptr ds : [public_6d61458]
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+8], mm1
        movq qword ptr ds : [eax+0x18], mm1
        movq qword ptr ds : [eax+0x20], mm1
        movq qword ptr ds : [eax+0x28], mm2
        movq qword ptr ds : [eax+0x30], mm1
        movq qword ptr ds : [eax+0x38], mm3
        movq qword ptr ds : [eax+0x10], mm4
        femms 
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d52ff3)
    }
}
