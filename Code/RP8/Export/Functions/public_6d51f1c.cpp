#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51f1c);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ba0);

#define public_6d51fa7 _public_6d51fa7

PROC_DECLARE(0x6d51f1c, internal_6d51f1c, public_6d51f1c);
extern "C" NAKED register_t __cdecl internal_6d51f1c()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0xC
        movq mm0, qword ptr ds : [edx]
        movd mm1, dword ptr ds : [edx+8]
        pfmul mm0, mm0
        pfmul mm1, mm1
        pfadd mm0, mm1
        pfacc mm0, mm0
        pfrsqrt mm1, mm0
        movq mm2, mm1
        pfmul mm1, mm1
        mov dword ptr ss : [esp+4], esi
        pfrsqit1 mm1, mm0
        mov dword ptr ss : [esp+8], ebx
        pfrcpit2 mm1, mm2
        movd dword ptr ss : [esp], mm1
        pfmul mm0, mm1
        call public_6d59ba0
        movq mm1, mm0
        pand mm0, mmword ptr ds : [public_6d61418]
        mov edx, dword ptr ss : [esp+0x14]
        pfcmpge mm0, mmword ptr ds : [public_6d61428]
        mov eax, dword ptr ss : [esp+0x10]
        punpckhdq mm0, mm0
        movd ecx, mm0
        movq mm2, qword ptr ds : [edx]
        movq mm0, mm1
        punpckhdq mm1, mm1
        test ecx, 1
        pfmul mm1, mmword ptr ss : [esp]
        movd mm3, dword ptr ds : [edx+8]
        je public_6d51fa7
        punpckldq mm1, mm1
        pfmul mm3, mm1
        pfmul mm2, mm1
        public_6d51fa7 : nop
        punpckldq mm3, mm0
        movq qword ptr ds : [eax], mm2
        movq qword ptr ds : [eax+8], mm3
        mov esi, dword ptr ss : [esp+4]
        mov ebx, dword ptr ss : [esp+8]
        add esp, 0xC
        femms 
        ret 8
        UNREACHABLE_TRAP(0x6d51f1c)
    }
}

#undef public_6d51fa7
