#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5304c);

PROC_DECLARE(0x6d5304c, internal_6d5304c, public_6d5304c);
extern "C" NAKED register_t __cdecl internal_6d5304c()
{
    __asm
    {
        femms 
        mov eax, dword ptr ss : [esp+4]
        movd mm3, dword ptr ss : [esp+0xC]
        movq mm1, qword ptr ds : [public_6d614a0]
        movd mm2, dword ptr ss : [esp+8]
        pxor mm0, mm0
        psllq mm3, 0x20
        movd mm4, dword ptr ss : [esp+0x10]
        movq qword ptr ds : [eax], mm2
        movq qword ptr ds : [eax+8], mm0
        movq qword ptr ds : [eax+0x18], mm0
        movq qword ptr ds : [eax+0x20], mm0
        movq qword ptr ds : [eax+0x30], mm0
        movq qword ptr ds : [eax+0x10], mm3
        movq qword ptr ds : [eax+0x28], mm4
        movq qword ptr ds : [eax+0x38], mm1
        femms 
        ret 0x10
        UNREACHABLE_TRAP(0x6d5304c)
    }
}
