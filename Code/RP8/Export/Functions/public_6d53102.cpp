#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53102);

PROC_DECLARE(0x6d53102, internal_6d53102, public_6d53102);
extern "C" NAKED register_t __cdecl internal_6d53102()
{
    __asm
    {
        movd mm1, dword ptr ds : [public_6d613d0]
        mov eax, dword ptr ss : [esp+4]
        pxor mm0, mm0
        movq mm2, mm1
        movq qword ptr ds : [eax], mm1
        movq qword ptr ds : [eax+8], mm0
        movq qword ptr ds : [eax+0x18], mm0
        punpckhdq mm2, mm2
        movq qword ptr ds : [eax+0x20], mm0
        movq qword ptr ds : [eax+0x28], mm1
        punpckldq mm2, mm1
        movq qword ptr ds : [eax+0x30], mm0
        movq qword ptr ds : [eax+0x10], mm2
        movq qword ptr ds : [eax+0x38], mm2
        femms 
        ret 
        UNREACHABLE_TRAP(0x6d53102)
    }
}
