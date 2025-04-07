#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d54c4c);

#define public_6d55439 _public_6d55439
#define public_6d55851 _public_6d55851
#define public_6d5588f _public_6d5588f
#define public_6d558bc _public_6d558bc
#define public_6d55b9c _public_6d55b9c
#define public_6d55d72 _public_6d55d72
#define public_6d55d98 _public_6d55d98

PROC_DECLARE(0x6d54c4c, internal_6d54c4c, public_6d54c4c);
extern "C" NAKED register_t __cdecl internal_6d54c4c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC0
        mov edx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        and esp, 0xFFFFFFF8
        test edx, edx
        mov eax, dword ptr ss : [ebp+8]
        je public_6d5588f
        test ecx, ecx
        je public_6d55851
        movq mm1, qword ptr ds : [public_6d613c0]
        movq mm2, qword ptr ds : [edx]
        movd mm4, dword ptr ds : [edx+8]
        pxor mm5, mm5
        movq mm3, mm2
        punpckldq mm2, mm5
        movq mm0, mm5
        punpckhdq mm5, mm3
        movq qword ptr ss : [esp], mm2
        movq qword ptr ss : [esp+8], mm0
        movq qword ptr ss : [esp+0x10], mm5
        movq qword ptr ss : [esp+0x18], mm0
        movq qword ptr ss : [esp+0x20], mm0
        movq qword ptr ss : [esp+0x28], mm4
        movq qword ptr ss : [esp+0x30], mm0
        movq qword ptr ss : [esp+0x38], mm1
        lea eax, ss:[esp+0x40]
        movq mm0, qword ptr ds : [ecx]
        movq mm1, qword ptr ds : [ecx+8]
        pswapd mm3, mm0
        movq mm6, mm0
        movq mm2, mm0
        pfadd mm0, mm0
        movq mm4, mm1
        punpckhdq mm6, mm1
        pfadd mm1, mm1
        movq mm5, mm0
        pfmul mm0, mm2
        punpckldq mm5, mm1
        pfmul mm2, mm1
        pfmul mm3, mm1
        pfmul mm1, mm4
        pfmul mm6, mm5
        movq mm4, mm0
        pfsubr mm0, mmword ptr ds : [public_6d613e0]
        movq mm5, mm1
        punpckldq mm1, mm1
        pfpnacc mm3, mm3
        pfacc mm4, mm4
        pfpnacc mm6, mm6
        pfpnacc mm2, mm2
        pfsub mm0, mm1
        pswapd mm5, mm2
        pfsubr mm4, mmword ptr ds : [public_6d613e0]
        pxor mm7, mm7
        movq mm1, mm0
        movq qword ptr ds : [eax+0x30], mm7
        punpckldq mm5, mm3
        punpckldq mm2, mm7
        punpckhdq mm4, mm7
        punpckhdq mm0, mm6
        movq qword ptr ds : [eax+0x20], mm5
        punpckhdq mm3, mm7
        movq qword ptr ds : [eax+8], mm2
        punpckldq mm6, mm1
        movq qword ptr ds : [eax+0x28], mm4
        punpckldq mm7, dword ptr ds : [public_6d613e0]
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+0x10], mm6
        movq qword ptr ds : [eax+0x18], mm3
        movq qword ptr ds : [eax+0x38], mm7
        mov edx, dword ptr ss : [ebp+0xC]
        test edx, edx
        je public_6d55439
        movq mm0, qword ptr ss : [esp+0x40]
        movq mm1, qword ptr ss : [esp+0x50]
        movq mm3, qword ptr ss : [esp+0x68]
        movq mm4, qword ptr ss : [esp+0x78]
        movq mm2, mm0
        punpckldq mm0, mm1
        punpckhdq mm2, mm1
        movq mm5, mm3
        movq qword ptr ss : [esp+0x80], mm0
        movq qword ptr ss : [esp+0x90], mm2
        movq mm6, qword ptr ss : [esp+0x48]
        punpckldq mm3, mm4
        movq mm7, qword ptr ss : [esp+0x58]
        movq mm0, qword ptr ss : [esp+0x60]
        punpckhdq mm5, mm4
        movq mm1, mm6
        movq qword ptr ss : [esp+0xA8], mm3
        movq qword ptr ss : [esp+0xB8], mm5
        punpckldq mm6, mm7
        movq mm4, qword ptr ss : [esp+0x70]
        movq mm2, mm0
        punpckhdq mm1, mm7
        movq qword ptr ss : [esp+0xA0], mm6
        punpckhdq mm0, mm4
        punpckldq mm2, mm4
        movq qword ptr ss : [esp+0xB0], mm1
        movq qword ptr ss : [esp+0x98], mm0
        movq qword ptr ss : [esp+0x88], mm2
        mov eax, dword ptr ss : [ebp+8]
        movq mm3, qword ptr ds : [edx]
        movd mm4, dword ptr ds : [edx+8]
        movd mm1, dword ptr ds : [public_6d613d0]
        pxor mm0, mm0
        pswapd mm2, mm1
        movq qword ptr ds : [eax], mm1
        movq qword ptr ds : [eax+8], mm0
        movq qword ptr ds : [eax+0x10], mm2
        movq qword ptr ds : [eax+0x18], mm0
        movq qword ptr ds : [eax+0x20], mm0
        movq qword ptr ds : [eax+0x28], mm1
        pfsub mm2, mm4
        pfsub mm0, mm3
        movq qword ptr ds : [eax+0x38], mm2
        movq qword ptr ds : [eax+0x30], mm0
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp+0x80]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x90]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0xA0]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x88]
        movq mm7, qword ptr ss : [esp+0xB0]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x98]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0xA8]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0xB8]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp+0x80]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x90]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0xA0]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x88]
        movq mm7, qword ptr ss : [esp+0xB0]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x98]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0xA8]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0xB8]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp+0x80]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x90]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0xA0]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x88]
        movq mm7, qword ptr ss : [esp+0xB0]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x98]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0xA8]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0xB8]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp+0x80]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x90]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0xA0]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x88]
        movq mm7, qword ptr ss : [esp+0xB0]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x98]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0xA8]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0xB8]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp+0x40]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        movq mm0, qword ptr ds : [edx]
        movq mm1, qword ptr ds : [eax+0x30]
        movd mm2, dword ptr ds : [edx+8]
        movd mm3, dword ptr ds : [eax+0x38]
        pfadd mm0, mm1
        pfadd mm2, mm3
        movq qword ptr ds : [eax+0x30], mm0
        movd dword ptr ds : [eax+0x38], mm2
        jmp public_6d558bc
        public_6d55439 : nop
        mov eax, dword ptr ss : [ebp+8]
        movq mm0, qword ptr ss : [esp+0x40]
        movq mm1, qword ptr ss : [esp+0x50]
        movq mm3, qword ptr ss : [esp+0x68]
        movq mm4, qword ptr ss : [esp+0x78]
        movq mm2, mm0
        punpckldq mm0, mm1
        punpckhdq mm2, mm1
        movq mm5, mm3
        movq qword ptr ds : [eax], mm0
        movq qword ptr ds : [eax+0x10], mm2
        movq mm6, qword ptr ss : [esp+0x48]
        punpckldq mm3, mm4
        movq mm7, qword ptr ss : [esp+0x58]
        movq mm0, qword ptr ss : [esp+0x60]
        punpckhdq mm5, mm4
        movq mm1, mm6
        movq qword ptr ds : [eax+0x28], mm3
        movq qword ptr ds : [eax+0x38], mm5
        punpckldq mm6, mm7
        movq mm4, qword ptr ss : [esp+0x70]
        movq mm2, mm0
        punpckhdq mm1, mm7
        movq qword ptr ds : [eax+0x20], mm6
        punpckhdq mm0, mm4
        punpckldq mm2, mm4
        movq qword ptr ds : [eax+0x30], mm1
        movq qword ptr ds : [eax+0x18], mm0
        movq qword ptr ds : [eax+8], mm2
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x10]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x20]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+8]
        movq mm7, qword ptr ss : [esp+0x30]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x18]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x28]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x38]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp+0x40]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        jmp public_6d558bc
        public_6d55851 : nop
        movq mm1, qword ptr ds : [public_6d613c0]
        movq mm2, qword ptr ds : [edx]
        movd mm4, dword ptr ds : [edx+8]
        pxor mm5, mm5
        movq mm3, mm2
        punpckldq mm2, mm5
        movq mm0, mm5
        punpckhdq mm5, mm3
        movq qword ptr ds : [eax], mm2
        movq qword ptr ds : [eax+8], mm0
        movq qword ptr ds : [eax+0x10], mm5
        movq qword ptr ds : [eax+0x18], mm0
        movq qword ptr ds : [eax+0x20], mm0
        movq qword ptr ds : [eax+0x28], mm4
        movq qword ptr ds : [eax+0x30], mm0
        movq qword ptr ds : [eax+0x38], mm1
        jmp public_6d558bc
        public_6d5588f : nop
        movd mm1, dword ptr ds : [public_6d613d0]
        pxor mm0, mm0
        pswapd mm2, mm1
        movq qword ptr ds : [eax], mm1
        movq qword ptr ds : [eax+8], mm0
        movq qword ptr ds : [eax+0x10], mm2
        movq qword ptr ds : [eax+0x18], mm0
        movq qword ptr ds : [eax+0x20], mm0
        movq qword ptr ds : [eax+0x28], mm1
        movq qword ptr ds : [eax+0x30], mm0
        movq qword ptr ds : [eax+0x38], mm2
        public_6d558bc : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0x18]
        test ecx, ecx
        je public_6d55d72
        movq mm0, qword ptr ds : [ecx]
        movq mm1, qword ptr ds : [ecx+8]
        pswapd mm3, mm0
        movq mm6, mm0
        movq mm2, mm0
        pfadd mm0, mm0
        movq mm4, mm1
        punpckhdq mm6, mm1
        pfadd mm1, mm1
        movq mm5, mm0
        pfmul mm0, mm2
        punpckldq mm5, mm1
        pfmul mm2, mm1
        pfmul mm3, mm1
        pfmul mm1, mm4
        pfmul mm6, mm5
        movq mm4, mm0
        pfsubr mm0, mmword ptr ds : [public_6d613e0]
        movq mm5, mm1
        punpckldq mm1, mm1
        pfpnacc mm3, mm3
        pfacc mm4, mm4
        pfpnacc mm6, mm6
        pfpnacc mm2, mm2
        pfsub mm0, mm1
        pswapd mm5, mm2
        pfsubr mm4, mmword ptr ds : [public_6d613e0]
        pxor mm7, mm7
        movq mm1, mm0
        movq qword ptr ss : [esp+0x70], mm7
        punpckldq mm5, mm3
        punpckldq mm2, mm7
        punpckhdq mm4, mm7
        punpckhdq mm0, mm6
        movq qword ptr ss : [esp+0x60], mm5
        punpckhdq mm3, mm7
        movq qword ptr ss : [esp+0x48], mm2
        punpckldq mm6, mm1
        movq qword ptr ss : [esp+0x68], mm4
        punpckldq mm7, dword ptr ds : [public_6d613e0]
        movq qword ptr ss : [esp+0x40], mm0
        movq qword ptr ss : [esp+0x50], mm6
        movq qword ptr ss : [esp+0x58], mm3
        movq qword ptr ss : [esp+0x78], mm7
        test edx, edx
        je public_6d55b9c
        movq mm0, qword ptr ds : [eax+0x30]
        movd mm1, dword ptr ds : [eax+0x38]
        movq mm2, qword ptr ds : [edx]
        movd mm3, dword ptr ds : [edx+8]
        pfsub mm0, mm2
        pfsub mm1, mm3
        movq qword ptr ds : [eax+0x30], mm0
        movd dword ptr ds : [eax+0x38], mm1
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp+0x40]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        movq mm0, qword ptr ds : [eax+0x30]
        movd mm1, dword ptr ds : [eax+0x38]
        movq mm2, qword ptr ds : [edx]
        movd mm3, dword ptr ds : [edx+8]
        pfadd mm0, mm2
        pfadd mm1, mm3
        movq qword ptr ds : [eax+0x30], mm0
        movd dword ptr ds : [eax+0x38], mm1
        jmp public_6d55d72
        public_6d55b9c : nop
        movq mm0, qword ptr ds : [eax]
        movq mm1, qword ptr ds : [eax+8]
        movq mm4, qword ptr ss : [esp+0x40]
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x10]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x18]
        movq qword ptr ds : [eax], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+8], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x20]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x28]
        movq qword ptr ds : [eax+0x10], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+0x18], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        movq mm0, qword ptr ds : [eax+0x30]
        pfadd mm3, mm2
        movq mm1, qword ptr ds : [eax+0x38]
        movq qword ptr ds : [eax+0x20], mm7
        movq mm4, qword ptr ss : [esp+0x40]
        movq qword ptr ds : [eax+0x28], mm3
        punpckhdq mm2, mm0
        movq mm5, qword ptr ss : [esp+0x50]
        punpckhdq mm3, mm1
        movq mm6, qword ptr ss : [esp+0x60]
        punpckldq mm0, mm0
        punpckldq mm1, mm1
        pfmul mm4, mm0
        punpckhdq mm2, mm2
        pfmul mm0, mmword ptr ss : [esp+0x48]
        movq mm7, qword ptr ss : [esp+0x70]
        pfmul mm5, mm2
        punpckhdq mm3, mm3
        pfmul mm2, mmword ptr ss : [esp+0x58]
        pfadd mm5, mm4
        pfmul mm6, mm1
        pfadd mm2, mm0
        pfmul mm1, mmword ptr ss : [esp+0x68]
        pfadd mm6, mm5
        pfmul mm7, mm3
        pfadd mm2, mm1
        pfmul mm3, mmword ptr ss : [esp+0x78]
        pfadd mm7, mm6
        pfadd mm3, mm2
        movq qword ptr ds : [eax+0x30], mm7
        movq qword ptr ds : [eax+0x38], mm3
        public_6d55d72 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        test ecx, ecx
        je public_6d55d98
        movq mm0, qword ptr ds : [eax+0x30]
        movd mm1, dword ptr ds : [eax+0x38]
        movq mm2, qword ptr ds : [ecx]
        movd mm3, dword ptr ds : [ecx+8]
        pfadd mm0, mm2
        pfadd mm1, mm3
        movq qword ptr ds : [eax+0x30], mm0
        movd dword ptr ds : [eax+0x38], mm1
        public_6d55d98 : nop
        mov esp, ebp
        pop ebp
        femms 
        ret 0x1C
        UNREACHABLE_TRAP(0x6d54c4c)
    }
}

#undef public_6d55439
#undef public_6d55851
#undef public_6d5588f
#undef public_6d558bc
#undef public_6d55b9c
#undef public_6d55d72
#undef public_6d55d98
