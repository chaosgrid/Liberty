#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d52f32);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ba0);

PROC_DECLARE(0x6d52f32, internal_6d52f32, public_6d52f32);
extern "C" NAKED register_t __cdecl internal_6d52f32()
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
        pxor mm1, mm1
        movq mm2, qword ptr ds : [public_6d614a8]
        movq mm3, qword ptr ds : [public_6d614a0]
        psrlq mm4, 0x20
        movq qword ptr ds : [eax], mm2
        movq qword ptr ds : [eax+8], mm1
        movd dword ptr ds : [eax+0x10], mm1
        movd dword ptr ds : [eax+0x14], mm0
        movq qword ptr ds : [eax+0x18], mm4
        pxor mm4, mmword ptr ds : [public_6d61458]
        movq qword ptr ds : [eax+0x30], mm1
        movq qword ptr ds : [eax+0x38], mm3
        movd dword ptr ds : [eax+0x20], mm1
        movd dword ptr ds : [eax+0x24], mm4
        movd dword ptr ds : [eax+0x28], mm0
        movd dword ptr ds : [eax+0x2C], mm1
        femms 
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d52f32)
    }
}
