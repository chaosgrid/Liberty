#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51fc1);
CLANG_FORWARD_PROC_SYMBOL(public_6d595c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59cc0);

#define public_6d5209d _public_6d5209d
#define public_6d520be _public_6d520be
#define public_6d52137 _public_6d52137
#define public_6d5235f _public_6d5235f
#define public_6d5240c _public_6d5240c
#define public_6d524ee _public_6d524ee
#define public_6d527c7 _public_6d527c7
#define public_6d52874 _public_6d52874
#define public_6d5294f _public_6d5294f

PROC_DECLARE(0x6d51fc1, internal_6d51fc1, public_6d51fc1);
extern "C" NAKED register_t __cdecl internal_6d51fc1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xA0
        and esp, 0xFFFFFFF8
        mov edx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x18]
        movq mm0, qword ptr ds : [edx]
        movq mm1, qword ptr ds : [edx+8]
        movq mm2, mm0
        movq mm3, mm1
        movq qword ptr ss : [esp], mm0
        movq qword ptr ss : [esp+8], mm1
        movq mm4, qword ptr ds : [ecx]
        movq mm5, qword ptr ds : [ecx+8]
        movq qword ptr ss : [esp+0x10], mm4
        pfadd mm0, mm4
        movq qword ptr ss : [esp+0x18], mm5
        pfadd mm1, mm5
        pfsub mm2, mm4
        pfmul mm0, mm0
        pfsub mm3, mm5
        pfmul mm1, mm1
        mov edx, dword ptr ss : [ebp+0x1C]
        pfmul mm2, mm2
        pfmul mm3, mm3
        pfadd mm0, mm1
        pfadd mm2, mm3
        movq mm6, qword ptr ds : [edx]
        movq mm7, qword ptr ds : [edx+8]
        movq qword ptr ss : [esp+0x20], mm6
        movq qword ptr ss : [esp+0x28], mm7
        movq mm1, mm4
        movq mm3, mm5
        pfadd mm4, mm6
        pfadd mm5, mm7
        pfsub mm1, mm6
        pfsub mm3, mm7
        pfmul mm4, mm4
        pfmul mm5, mm5
        pfmul mm1, mm1
        pfmul mm3, mm3
        pfadd mm4, mm5
        pfadd mm1, mm3
        pfacc mm0, mm4
        pfacc mm2, mm1
        pfcmpgt mm2, mm0
        packsswb mm2, mm2
        movd eax, mm2
        test eax, 1
        movq mm0, qword ptr ds : [public_6d61408]
        je public_6d5209d
        mov edx, dword ptr ss : [ebp+0x14]
        movq mm1, mm0
        movq mm2, mm0
        pxor mm1, mmword ptr ds : [edx]
        pxor mm2, mmword ptr ds : [edx+8]
        movq qword ptr ss : [esp], mm1
        movq qword ptr ss : [esp+8], mm2
        public_6d5209d : nop
        test eax, 0x10000
        je public_6d520be
        mov ecx, dword ptr ss : [ebp+0x1C]
        movq mm1, mm0
        movq mm2, mm0
        pxor mm1, mmword ptr ds : [ecx]
        pxor mm2, mmword ptr ds : [ecx+8]
        movq qword ptr ss : [esp+0x20], mm1
        movq qword ptr ss : [esp+0x28], mm2
        public_6d520be : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        movq mm6, qword ptr ss : [esp+0x20]
        movq mm7, qword ptr ss : [esp+0x28]
        movq mm1, qword ptr ds : [ecx]
        movq mm4, qword ptr ds : [ecx+8]
        movq mm3, mm6
        movq mm5, mm7
        pfadd mm6, mm1
        movq qword ptr ss : [esp+0x30], mm1
        pfadd mm7, mm4
        movq qword ptr ss : [esp+0x38], mm4
        pfsub mm3, mm1
        pfsub mm5, mm4
        pfmul mm6, mm6
        pfmul mm7, mm7
        pfmul mm3, mm3
        pfmul mm5, mm5
        pfadd mm6, mm7
        pfadd mm3, mm5
        pfacc mm6, mm6
        pfacc mm3, mm3
        pfcmpgt mm3, mm6
        movd eax, mm3
        test eax, 1
        je public_6d52137
        mov edx, dword ptr ss : [ebp+0x20]
        movq mm2, mm0
        pxor mm0, mmword ptr ds : [edx]
        pxor mm2, mmword ptr ds : [edx+8]
        movq qword ptr ss : [esp+0x30], mm0
        movq qword ptr ss : [esp+0x38], mm2
        public_6d52137 : nop
        movq mm0, qword ptr ss : [esp+0x10]
        movq mm1, mm0
        movq mm2, qword ptr ss : [esp+0x18]
        movq mm3, mm2
        pfmul mm0, mm0
        pfmul mm2, mm2
        pfadd mm0, mm2
        pfacc mm0, mm0
        movq mm5, mm0
        pfrcp mm4, mm0
        pfcmpgt mm5, mmword ptr ds : [public_6d61450]
        pxor mm1, mmword ptr ds : [public_6d614b0]
        pxor mm3, mmword ptr ds : [public_6d613f8]
        pfrcpit1 mm0, mm4
        pand mm1, mm5
        pand mm3, mm5
        pfrcpit2 mm0, mm4
        pfmul mm1, mm0
        pfmul mm3, mm0
        movq qword ptr ss : [esp+0x40], mm1
        movq qword ptr ss : [esp+0x48], mm3
        movq mm2, qword ptr ss : [esp]
        movq mm3, qword ptr ss : [esp+8]
        movq mm4, mm2
        movq mm5, mm3
        movq mm0, qword ptr ss : [esp+0x40]
        punpckhdq mm4, mm2
        punpckhdq mm5, mm3
        movq mm1, qword ptr ss : [esp+0x48]
        punpckldq mm4, mm2
        punpckldq mm5, mm3
        movq mm6, mm4
        movq mm7, mm5
        pfmul mm2, mm1
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        pxor mm2, mmword ptr ds : [public_6d613f8]
        pfmul mm5, mm0
        pfmul mm4, mm1
        pfadd mm2, mm3
        movq mm3, qword ptr ss : [esp]
        pfsub mm4, mm5
        movq mm5, qword ptr ss : [esp+8]
        pfmul mm7, mm1
        pxor mm6, mmword ptr ds : [public_6d613f8]
        pfacc mm4, mm2
        pfmul mm6, mm0
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        movq qword ptr ss : [esp+0x80], mm4
        pfmul mm5, mm1
        pfadd mm6, mm7
        pfsub mm5, mm3
        pfacc mm6, mm5
        movq qword ptr ss : [esp+0x88], mm6
        movq mm2, qword ptr ss : [esp+0x20]
        movq mm3, qword ptr ss : [esp+0x28]
        movq mm4, mm2
        movq mm5, mm3
        movq mm0, qword ptr ss : [esp+0x40]
        punpckhdq mm4, mm2
        punpckhdq mm5, mm3
        movq mm1, qword ptr ss : [esp+0x48]
        punpckldq mm4, mm2
        punpckldq mm5, mm3
        movq mm6, mm4
        movq mm7, mm5
        pfmul mm2, mm1
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        pxor mm2, mmword ptr ds : [public_6d613f8]
        pfmul mm5, mm0
        pfmul mm4, mm1
        pfadd mm2, mm3
        movq mm3, qword ptr ss : [esp+0x20]
        pfsub mm4, mm5
        movq mm5, qword ptr ss : [esp+0x28]
        pfmul mm7, mm1
        pxor mm6, mmword ptr ds : [public_6d613f8]
        pfacc mm4, mm2
        pfmul mm6, mm0
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        movq qword ptr ss : [esp+0x90], mm4
        pfmul mm5, mm1
        pfadd mm6, mm7
        pfsub mm5, mm3
        pfacc mm6, mm5
        movq qword ptr ss : [esp+0x98], mm6
        sub esp, 0xC
        movq mm1, qword ptr ss : [esp+0x8C]
        movq mm2, qword ptr ss : [esp+0x94]
        movq mm3, mm2
        punpckhdq mm3, mm3
        movq mm0, mm3
        pfcmpge mm3, mmword ptr ds : [public_6d61468]
        movd ecx, mm3
        test ecx, ecx
        jne public_6d5235f
        call public_6d595c0
        movd dword ptr ss : [esp], mm0
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ss : [esp+8], ebx
        call public_6d59cc0
        movq mm3, mm0
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+4]
        pand mm3, mmword ptr ds : [public_6d61420]
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+4]
        pfcmpge mm3, mmword ptr ds : [public_6d61428]
        movd ecx, mm3
        movq mm1, qword ptr ss : [esp+0x8C]
        movq mm2, qword ptr ss : [esp+0x94]
        test ecx, ecx
        je public_6d5235f
        movd mm3, dword ptr ss : [esp]
        pfrcp mm4, mm0
        punpckldq mm3, mm3
        pfrcpit1 mm0, mm4
        pfrcpit2 mm0, mm4
        pfmul mm3, mm0
        pfmul mm1, mm3
        pfmul mm2, mm3
        public_6d5235f : nop
        pand mm2, mmword ptr ds : [public_6d61430]
        movq qword ptr ss : [esp+0x5C], mm1
        movq qword ptr ss : [esp+0x64], mm2
        add esp, 0xC
        sub esp, 0xC
        movq mm1, qword ptr ss : [esp+0x9C]
        movq mm2, qword ptr ss : [esp+0xA4]
        movq mm3, mm2
        punpckhdq mm3, mm3
        movq mm0, mm3
        pfcmpge mm3, mmword ptr ds : [public_6d61468]
        movd ecx, mm3
        test ecx, ecx
        jne public_6d5240c
        call public_6d595c0
        movd dword ptr ss : [esp], mm0
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ss : [esp+8], ebx
        call public_6d59cc0
        movq mm3, mm0
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+4]
        pand mm3, mmword ptr ds : [public_6d61420]
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+4]
        pfcmpge mm3, mmword ptr ds : [public_6d61428]
        movd ecx, mm3
        movq mm1, qword ptr ss : [esp+0x9C]
        movq mm2, qword ptr ss : [esp+0xA4]
        test ecx, ecx
        je public_6d5240c
        movd mm3, dword ptr ss : [esp]
        pfrcp mm4, mm0
        punpckldq mm3, mm3
        pfrcpit1 mm0, mm4
        pfrcpit2 mm0, mm4
        pfmul mm3, mm0
        pfmul mm1, mm3
        pfmul mm2, mm3
        public_6d5240c : nop
        pand mm2, mmword ptr ds : [public_6d61430]
        movq qword ptr ss : [esp+0x6C], mm1
        movq qword ptr ss : [esp+0x74], mm2
        add esp, 0xC
        movq mm0, qword ptr ss : [esp+0x50]
        movq mm1, qword ptr ss : [esp+0x58]
        pfadd mm0, mmword ptr ss : [esp+0x60]
        pfadd mm1, mmword ptr ss : [esp+0x68]
        pfmul mm0, mmword ptr ds : [public_6d621c0]
        pfmul mm1, mmword ptr ds : [public_6d621c0]
        movq qword ptr ss : [esp+0x80], mm0
        movq qword ptr ss : [esp+0x88], mm1
        movq mm7, qword ptr ds : [public_6d61428]
        sub esp, 0xC
        movq mm0, qword ptr ss : [esp+0x8C]
        movd mm1, dword ptr ss : [esp+0x94]
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
        pfcmpge mm0, mmword ptr ds : [public_6d61428]
        punpckhdq mm0, mm0
        movd ecx, mm0
        movq mm2, qword ptr ss : [esp+0x8C]
        movq mm0, mm1
        punpckhdq mm1, mm1
        test ecx, 1
        pfmul mm1, mmword ptr ss : [esp]
        movd mm3, dword ptr ss : [esp+0x94]
        je public_6d524ee
        punpckldq mm1, mm1
        pfmul mm3, mm1
        pfmul mm2, mm1
        public_6d524ee : nop
        punpckldq mm3, mm0
        movq qword ptr ss : [esp+0x7C], mm2
        movq qword ptr ss : [esp+0x84], mm3
        mov esi, dword ptr ss : [esp+4]
        mov ebx, dword ptr ss : [esp+8]
        add esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        movq mm2, qword ptr ss : [esp+0x70]
        movq mm3, qword ptr ss : [esp+0x78]
        movq mm4, mm2
        movq mm5, mm3
        movq mm0, qword ptr ss : [esp+0x10]
        punpckhdq mm4, mm2
        punpckhdq mm5, mm3
        movq mm1, qword ptr ss : [esp+0x18]
        punpckldq mm4, mm2
        punpckldq mm5, mm3
        movq mm6, mm4
        movq mm7, mm5
        pfmul mm2, mm1
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        pxor mm2, mmword ptr ds : [public_6d613f8]
        pfmul mm5, mm0
        pfmul mm4, mm1
        pfadd mm2, mm3
        movq mm3, qword ptr ss : [esp+0x70]
        pfsub mm4, mm5
        movq mm5, qword ptr ss : [esp+0x78]
        pfmul mm7, mm1
        pxor mm6, mmword ptr ds : [public_6d613f8]
        pfacc mm4, mm2
        pfmul mm6, mm0
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        movq qword ptr ds : [eax], mm4
        pfmul mm5, mm1
        pfadd mm6, mm7
        pfsub mm5, mm3
        pfacc mm6, mm5
        movq qword ptr ds : [eax+8], mm6
        movq mm0, qword ptr ss : [esp+0x20]
        movq mm1, mm0
        movq mm2, qword ptr ss : [esp+0x28]
        movq mm3, mm2
        pfmul mm0, mm0
        pfmul mm2, mm2
        pfadd mm0, mm2
        pfacc mm0, mm0
        movq mm5, mm0
        pfrcp mm4, mm0
        pfcmpgt mm5, mmword ptr ds : [public_6d61450]
        pxor mm1, mmword ptr ds : [public_6d614b0]
        pxor mm3, mmword ptr ds : [public_6d613f8]
        pfrcpit1 mm0, mm4
        pand mm1, mm5
        pand mm3, mm5
        pfrcpit2 mm0, mm4
        pfmul mm1, mm0
        pfmul mm3, mm0
        movq qword ptr ss : [esp+0x40], mm1
        movq qword ptr ss : [esp+0x48], mm3
        movq mm2, qword ptr ss : [esp+0x10]
        movq mm3, qword ptr ss : [esp+0x18]
        movq mm4, mm2
        movq mm5, mm3
        movq mm0, qword ptr ss : [esp+0x40]
        punpckhdq mm4, mm2
        punpckhdq mm5, mm3
        movq mm1, qword ptr ss : [esp+0x48]
        punpckldq mm4, mm2
        punpckldq mm5, mm3
        movq mm6, mm4
        movq mm7, mm5
        pfmul mm2, mm1
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        pxor mm2, mmword ptr ds : [public_6d613f8]
        pfmul mm5, mm0
        pfmul mm4, mm1
        pfadd mm2, mm3
        movq mm3, qword ptr ss : [esp+0x10]
        pfsub mm4, mm5
        movq mm5, qword ptr ss : [esp+0x18]
        pfmul mm7, mm1
        pxor mm6, mmword ptr ds : [public_6d613f8]
        pfacc mm4, mm2
        pfmul mm6, mm0
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        movq qword ptr ss : [esp+0x80], mm4
        pfmul mm5, mm1
        pfadd mm6, mm7
        pfsub mm5, mm3
        pfacc mm6, mm5
        movq qword ptr ss : [esp+0x88], mm6
        movq mm2, qword ptr ss : [esp+0x30]
        movq mm3, qword ptr ss : [esp+0x38]
        movq mm4, mm2
        movq mm5, mm3
        movq mm0, qword ptr ss : [esp+0x40]
        punpckhdq mm4, mm2
        punpckhdq mm5, mm3
        movq mm1, qword ptr ss : [esp+0x48]
        punpckldq mm4, mm2
        punpckldq mm5, mm3
        movq mm6, mm4
        movq mm7, mm5
        pfmul mm2, mm1
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        pxor mm2, mmword ptr ds : [public_6d613f8]
        pfmul mm5, mm0
        pfmul mm4, mm1
        pfadd mm2, mm3
        movq mm3, qword ptr ss : [esp+0x30]
        pfsub mm4, mm5
        movq mm5, qword ptr ss : [esp+0x38]
        pfmul mm7, mm1
        pxor mm6, mmword ptr ds : [public_6d613f8]
        pfacc mm4, mm2
        pfmul mm6, mm0
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        movq qword ptr ss : [esp+0x90], mm4
        pfmul mm5, mm1
        pfadd mm6, mm7
        pfsub mm5, mm3
        pfacc mm6, mm5
        movq qword ptr ss : [esp+0x98], mm6
        sub esp, 0xC
        movq mm1, qword ptr ss : [esp+0x8C]
        movq mm2, qword ptr ss : [esp+0x94]
        movq mm3, mm2
        punpckhdq mm3, mm3
        movq mm0, mm3
        pfcmpge mm3, mmword ptr ds : [public_6d61468]
        movd ecx, mm3
        test ecx, ecx
        jne public_6d527c7
        call public_6d595c0
        movd dword ptr ss : [esp], mm0
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ss : [esp+8], ebx
        call public_6d59cc0
        movq mm3, mm0
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+4]
        pand mm3, mmword ptr ds : [public_6d61420]
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+4]
        pfcmpge mm3, mmword ptr ds : [public_6d61428]
        movd ecx, mm3
        movq mm1, qword ptr ss : [esp+0x8C]
        movq mm2, qword ptr ss : [esp+0x94]
        test ecx, ecx
        je public_6d527c7
        movd mm3, dword ptr ss : [esp]
        pfrcp mm4, mm0
        punpckldq mm3, mm3
        pfrcpit1 mm0, mm4
        pfrcpit2 mm0, mm4
        pfmul mm3, mm0
        pfmul mm1, mm3
        pfmul mm2, mm3
        public_6d527c7 : nop
        pand mm2, mmword ptr ds : [public_6d61430]
        movq qword ptr ss : [esp+0x5C], mm1
        movq qword ptr ss : [esp+0x64], mm2
        add esp, 0xC
        sub esp, 0xC
        movq mm1, qword ptr ss : [esp+0x9C]
        movq mm2, qword ptr ss : [esp+0xA4]
        movq mm3, mm2
        punpckhdq mm3, mm3
        movq mm0, mm3
        pfcmpge mm3, mmword ptr ds : [public_6d61468]
        movd ecx, mm3
        test ecx, ecx
        jne public_6d52874
        call public_6d595c0
        movd dword ptr ss : [esp], mm0
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ss : [esp+8], ebx
        call public_6d59cc0
        movq mm3, mm0
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+4]
        pand mm3, mmword ptr ds : [public_6d61420]
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+4]
        pfcmpge mm3, mmword ptr ds : [public_6d61428]
        movd ecx, mm3
        movq mm1, qword ptr ss : [esp+0x9C]
        movq mm2, qword ptr ss : [esp+0xA4]
        test ecx, ecx
        je public_6d52874
        movd mm3, dword ptr ss : [esp]
        pfrcp mm4, mm0
        punpckldq mm3, mm3
        pfrcpit1 mm0, mm4
        pfrcpit2 mm0, mm4
        pfmul mm3, mm0
        pfmul mm1, mm3
        pfmul mm2, mm3
        public_6d52874 : nop
        pand mm2, mmword ptr ds : [public_6d61430]
        movq qword ptr ss : [esp+0x6C], mm1
        movq qword ptr ss : [esp+0x74], mm2
        add esp, 0xC
        movq mm0, qword ptr ss : [esp+0x50]
        movq mm1, qword ptr ss : [esp+0x58]
        pfadd mm0, mmword ptr ss : [esp+0x60]
        pfadd mm1, mmword ptr ss : [esp+0x68]
        pfmul mm0, mmword ptr ds : [public_6d621c0]
        pfmul mm1, mmword ptr ds : [public_6d621c0]
        movq qword ptr ss : [esp+0x80], mm0
        movq qword ptr ss : [esp+0x88], mm1
        sub esp, 0xC
        movq mm0, qword ptr ss : [esp+0x8C]
        movd mm1, dword ptr ss : [esp+0x94]
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
        pfcmpge mm0, mmword ptr ds : [public_6d61428]
        punpckhdq mm0, mm0
        movd ecx, mm0
        movq mm2, qword ptr ss : [esp+0x8C]
        movq mm0, mm1
        punpckhdq mm1, mm1
        test ecx, 1
        pfmul mm1, mmword ptr ss : [esp]
        movd mm3, dword ptr ss : [esp+0x94]
        je public_6d5294f
        punpckldq mm1, mm1
        pfmul mm3, mm1
        pfmul mm2, mm1
        public_6d5294f : nop
        punpckldq mm3, mm0
        movq qword ptr ss : [esp+0x7C], mm2
        movq qword ptr ss : [esp+0x84], mm3
        mov esi, dword ptr ss : [esp+4]
        mov ebx, dword ptr ss : [esp+8]
        add esp, 0xC
        mov eax, dword ptr ss : [ebp+0xC]
        movq mm2, qword ptr ss : [esp+0x70]
        movq mm3, qword ptr ss : [esp+0x78]
        movq mm4, mm2
        movq mm5, mm3
        movq mm0, qword ptr ss : [esp+0x20]
        punpckhdq mm4, mm2
        punpckhdq mm5, mm3
        movq mm1, qword ptr ss : [esp+0x28]
        punpckldq mm4, mm2
        punpckldq mm5, mm3
        movq mm6, mm4
        movq mm7, mm5
        pfmul mm2, mm1
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        pxor mm2, mmword ptr ds : [public_6d613f8]
        pfmul mm5, mm0
        pfmul mm4, mm1
        pfadd mm2, mm3
        movq mm3, qword ptr ss : [esp+0x70]
        pfsub mm4, mm5
        movq mm5, qword ptr ss : [esp+0x78]
        pfmul mm7, mm1
        pxor mm6, mmword ptr ds : [public_6d613f8]
        pfacc mm4, mm2
        pfmul mm6, mm0
        pxor mm5, mmword ptr ds : [public_6d613f8]
        pfmul mm3, mm0
        movq qword ptr ds : [eax], mm4
        pfmul mm5, mm1
        pfadd mm6, mm7
        pfsub mm5, mm3
        pfacc mm6, mm5
        movq qword ptr ds : [eax+8], mm6
        mov eax, dword ptr ss : [ebp+0x10]
        movq mm0, qword ptr ss : [esp+0x20]
        movq mm1, qword ptr ss : [esp+0x28]
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+8], mm1
        mov esp, ebp
        pop ebp
        femms 
        ret 0x1C
        UNREACHABLE_TRAP(0x6d51fc1)
    }
}

#undef public_6d5209d
#undef public_6d520be
#undef public_6d52137
#undef public_6d5235f
#undef public_6d5240c
#undef public_6d524ee
#undef public_6d527c7
#undef public_6d52874
#undef public_6d5294f
