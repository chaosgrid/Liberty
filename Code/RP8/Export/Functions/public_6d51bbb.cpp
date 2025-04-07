#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51bbb);
CLANG_FORWARD_PROC_SYMBOL(public_6d594c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59cc0);

#define public_6d51ca6 _public_6d51ca6

PROC_DECLARE(0x6d51bbb, internal_6d51bbb, public_6d51bbb);
extern "C" NAKED register_t __cdecl internal_6d51bbb()
{
    __asm
    {
        femms 
        sub esp, 0x18
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], esi
        movd mm0, dword ptr ds : [public_6d61468]
        movq mm1, qword ptr ds : [ecx]
        pfmul mm1, mmword ptr ds : [edx]
        movq mm2, qword ptr ds : [ecx+8]
        pfmul mm2, mmword ptr ds : [edx+8]
        pfadd mm1, mm2
        pxor mm7, mm7
        movd mm4, dword ptr ss : [esp+0x28]
        pfsub mm0, mm4
        pfacc mm1, mm1
        pfcmpge mm7, mm1
        movq mm6, qword ptr ds : [public_6d614c8]
        pand mm7, mmword ptr ds : [public_6d614b0]
        pxor mm1, mm7
        pfcmpge mm6, mm1
        movd eax, mm6
        movq mm3, mm1
        pfmul mm3, mm3
        pfsubr mm3, mmword ptr ds : [public_6d61468]
        test eax, eax
        je public_6d51ca6
        pfrsqrt mm4, mm3
        movq mm2, mm4
        movd dword ptr ss : [esp+0xC], mm7
        pfmul mm2, mm4
        pfrsqit1 mm3, mm2
        pfrcpit2 mm3, mm4
        pfrcp mm2, mm3
        movq mm4, mm3
        pfrcpit1 mm4, mm2
        pfrcpit2 mm4, mm2
        movd dword ptr ss : [esp], mm0
        movd dword ptr ss : [esp+4], mm3
        movq mm0, mm1
        movq mm1, mm4
        call public_6d594c0
        movd mm1, dword ptr ss : [esp+0x28]
        movd dword ptr ss : [esp+8], mm0
        pfmul mm0, mm1
        call public_6d59cc0
        movd dword ptr ss : [esp+0x28], mm0
        movd mm1, dword ptr ss : [esp]
        movd mm0, dword ptr ss : [esp+8]
        pfmul mm0, mm1
        call public_6d59cc0
        movd mm4, dword ptr ss : [esp+0x28]
        movd mm1, dword ptr ss : [esp+4]
        movd mm7, dword ptr ss : [esp+0xC]
        pfmul mm0, mm1
        pfmul mm4, mm1
        public_6d51ca6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        pxor mm4, mm7
        punpckldq mm0, mm0
        punpckldq mm4, mm4
        movq mm5, mm0
        movq mm6, mm4
        pfmul mm0, mmword ptr ds : [ecx]
        pfmul mm4, mmword ptr ds : [edx]
        pfmul mm5, mmword ptr ds : [ecx+8]
        pfmul mm6, mmword ptr ds : [edx+8]
        pfadd mm0, mm4
        pfadd mm5, mm6
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+8], mm5
        femms 
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x10]
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x6d51bbb)
    }
}

#undef public_6d51ca6
