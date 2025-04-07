#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51e75);
CLANG_FORWARD_PROC_SYMBOL(public_6d595c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59cc0);

#define public_6d51f06 _public_6d51f06

PROC_DECLARE(0x6d51e75, internal_6d51e75, public_6d51e75);
extern "C" NAKED register_t __cdecl internal_6d51e75()
{
    __asm
    {
        sub esp, 0xC
        femms 
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        movq mm1, qword ptr ds : [edx]
        movq mm2, qword ptr ds : [edx+8]
        movq mm3, mm2
        punpckhdq mm3, mm3
        movq mm0, mm3
        pfcmpge mm3, mmword ptr ds : [public_6d61468]
        movd ecx, mm3
        test ecx, ecx
        jne public_6d51f06
        call public_6d595c0
        movd dword ptr ss : [esp], mm0
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ss : [esp+8], ebx
        call public_6d59cc0
        movq mm3, mm0
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+4]
        pand mm3, mmword ptr ds : [public_6d61420]
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+8]
        pfcmpge mm3, mmword ptr ds : [public_6d61428]
        movd ecx, mm3
        movq mm1, qword ptr ds : [edx]
        movq mm2, qword ptr ds : [edx+8]
        test ecx, ecx
        je public_6d51f06
        movd mm3, dword ptr ss : [esp]
        pfrcp mm4, mm0
        punpckldq mm3, mm3
        pfrcpit1 mm0, mm4
        pfrcpit2 mm0, mm4
        pfmul mm3, mm0
        pfmul mm1, mm3
        pfmul mm2, mm3
        public_6d51f06 : nop
        pand mm2, mmword ptr ds : [public_6d61430]
        movq qword ptr ds : [eax], mm1
        movq qword ptr ds : [eax+8], mm2
        femms 
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6d51e75)
    }
}

#undef public_6d51f06
