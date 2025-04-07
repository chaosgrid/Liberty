#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d515a6);
CLANG_FORWARD_PROC_SYMBOL(public_6d595c0);

#define public_6d51611 _public_6d51611
#define public_6d5162e _public_6d5162e
#define public_6d51643 _public_6d51643
#define public_6d5164a _public_6d5164a

PROC_DECLARE(0x6d515a6, internal_6d515a6, public_6d515a6);
extern "C" NAKED register_t __cdecl internal_6d515a6()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ss : [esp+0xC]
        movq mm7, qword ptr ds : [public_6d61450]
        movq mm5, qword ptr ds : [ecx]
        movq mm1, qword ptr ds : [ecx+8]
        movq mm2, mm5
        pfmul mm5, mm5
        movq mm0, mm1
        mov edx, dword ptr ss : [esp+0x10]
        pfmul mm1, mm1
        pfadd mm5, mm1
        mov dword ptr ss : [esp], ebx
        pfacc mm5, mm5
        pfcmpge mm7, mm5
        mov dword ptr ss : [esp+4], esi
        pfrsqrt mm1, mm5
        movd eax, mm7
        test eax, eax
        movq mm4, mm1
        mov ecx, dword ptr ss : [esp+0x14]
        jne public_6d5162e
        test edx, edx
        pfmul mm1, mm1
        je public_6d51611
        pfrsqit1 mm1, mm5
        pfrcpit2 mm1, mm4
        pfmul mm2, mm1
        pfmul mm1, mm0
        movq qword ptr ds : [edx], mm2
        movd dword ptr ds : [edx+8], mm1
        public_6d51611 : nop
        test ecx, ecx
        je public_6d5164a
        punpckhdq mm0, mm0
        call public_6d595c0
        mov ecx, dword ptr ss : [esp+0x14]
        pfmul mm0, mmword ptr ds : [public_6d613e8]
        movd dword ptr ds : [ecx], mm0
        jmp public_6d5164a
        public_6d5162e : nop
        test edx, edx
        pxor mm1, mm1
        je public_6d51643
        movq mm0, qword ptr ds : [public_6d613d0]
        movq qword ptr ds : [edx+4], mm1
        movd dword ptr ds : [edx], mm0
        public_6d51643 : nop
        test ecx, ecx
        je public_6d5164a
        movd dword ptr ds : [ecx], mm1
        public_6d5164a : nop
        mov ebx, dword ptr ss : [esp]
        mov esi, dword ptr ss : [esp+4]
        add esp, 8
        femms 
        ret 0xC
        UNREACHABLE_TRAP(0x6d515a6)
    }
}

#undef public_6d51611
#undef public_6d5162e
#undef public_6d51643
#undef public_6d5164a
