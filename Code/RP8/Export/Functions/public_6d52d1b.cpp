#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d52d1b);

PROC_DECLARE(0x6d52d1b, internal_6d52d1b, public_6d52d1b);
extern "C" NAKED register_t __cdecl internal_6d52d1b()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        femms 
        movd mm4, dword ptr ss : [esp+0x10]
        movq mm1, qword ptr ds : [public_6d614a0]
        pxor mm0, mm0
        movq mm2, qword ptr ds : [public_6d614a8]
        movd mm3, dword ptr ss : [esp+8]
        movd mm5, dword ptr ss : [esp+0xC]
        punpckldq mm4, mm2
        punpckldq mm3, mm5
        movq qword ptr ds : [eax], mm2
        movq qword ptr ds : [eax+8], mm0
        movq qword ptr ds : [eax+0x10], mm1
        movq qword ptr ds : [eax+0x18], mm0
        movq qword ptr ds : [eax+0x20], mm0
        movq qword ptr ds : [eax+0x28], mm2
        movq qword ptr ds : [eax+0x30], mm3
        movq qword ptr ds : [eax+0x38], mm4
        femms 
        ret 0x10
        UNREACHABLE_TRAP(0x6d52d1b)
    }
}
