#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d52f95);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ba0);

PROC_DECLARE(0x6d52f95, internal_6d52f95, public_6d52f95);
extern "C" NAKED register_t __cdecl internal_6d52f95()
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
        pand mm0, mmword ptr ds : [public_6d61430]
        pxor mm1, mm1
        movq mm2, qword ptr ds : [public_6d614a8]
        movq mm3, qword ptr ds : [public_6d614a0]
        psrlq mm4, 0x20
        movq qword ptr ds : [eax+0x10], mm3
        movq qword ptr ds : [eax+0x18], mm1
        movq qword ptr ds : [eax+0x30], mm1
        movq qword ptr ds : [eax+0x38], mm3
        movq qword ptr ds : [eax+0x20], mm4
        pxor mm4, mmword ptr ds : [public_6d61458]
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+0x28], mm0
        movq qword ptr ds : [eax+8], mm4
        femms 
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d52f95)
    }
}
