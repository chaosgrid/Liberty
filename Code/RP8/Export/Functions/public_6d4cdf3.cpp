#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4cdf3);

#define public_6d4ce0a _public_6d4ce0a

PROC_DECLARE(0x6d4cdf3, internal_6d4cdf3, public_6d4cdf3);
extern "C" NAKED register_t __cdecl internal_6d4cdf3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push edi
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [ebp+0x10]
        shr edi, 2
        mov edx, dword ptr ss : [ebp+0x18]
        public_6d4ce0a : nop
        movd mm0, dword ptr ds : [eax]
        pxor mm7, mm7
        movd mm2, dword ptr ds : [ebx]
        punpcklbw mm0, mm7
        movd mm3, dword ptr ds : [ecx]
        punpcklbw mm2, mm7
        psubsw mm2, mmword ptr ds : [public_6d6e428]
        punpcklbw mm3, mm7
        psubsw mm3, mmword ptr ds : [public_6d6e428]
        movq mm4, mm2
        punpcklwd mm2, mm3
        movq mm1, mm0
        pmaddwd mm2, mmword ptr ds : [public_6d6e430]
        psllw mm1, 8
        movq mm6, mm1
        punpcklwd mm1, mm7
        punpckhwd mm6, mm7
        movq mm5, mm4
        punpckhwd mm5, mm3
        paddd mm2, mm1
        pmaddwd mm5, mmword ptr ds : [public_6d6e430]
        movq mm1, mm3
        punpcklwd mm3, mm0
        movq mm7, mm4
        pmaddwd mm3, mmword ptr ds : [public_6d6e438]
        psrad mm2, 8
        paddd mm5, mm6
        punpcklwd mm4, mm0
        pmaddwd mm4, mmword ptr ds : [public_6d6e440]
        psrad mm5, 8
        psrad mm3, 8
        punpckhwd mm7, mm0
        psrad mm4, 8
        movq mm6, mm3
        pmaddwd mm7, mmword ptr ds : [public_6d6e440]
        punpckhwd mm1, mm0
        pmaddwd mm1, mmword ptr ds : [public_6d6e438]
        punpckldq mm3, mm2
        punpckhdq mm6, mm2
        movq mm0, mm4
        psrad mm7, 8
        punpckldq mm4, dword ptr ds : [public_6d73520]
        punpckhdq mm0, mmword ptr ds : [public_6d73520]
        psrad mm1, 8
        packssdw mm3, mm4
        movq mm2, mm1
        packssdw mm6, mm0
        packuswb mm3, mm6
        punpckldq mm2, mm5
        movq mm4, mm7
        punpckhdq mm1, mm5
        punpckldq mm7, dword ptr ds : [public_6d73520]
        punpckhdq mm4, mmword ptr ds : [public_6d73520]
        movq mm0, mm3
        packssdw mm2, mm7
        pand mm3, mmword ptr ds : [public_6d6e448]
        packssdw mm1, mm4
        psrlq mm3, 8
        add edx, 0xC
        por mm0, mm3
        packuswb mm2, mm1
        psrlq mm3, 0x20
        add eax, 4
        movd dword ptr ds : [edx-0xC], mm0
        punpcklwd mm3, mm2
        psrlq mm2, 0x18
        add ecx, 4
        movd dword ptr ds : [edx-8], mm3
        psrlq mm3, 0x30
        por mm2, mm3
        add ebx, 4
        movd dword ptr ds : [edx-4], mm2
        dec edi
        jne public_6d4ce0a
        pop edi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4cdf3)
    }
}

#undef public_6d4ce0a
