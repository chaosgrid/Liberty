#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5b10e);

#define public_6d5b135 _public_6d5b135
#define public_6d5b61a _public_6d5b61a

PROC_DECLARE(0x6d5b10e, internal_6d5b10e, public_6d5b10e);
extern "C" NAKED register_t __cdecl internal_6d5b10e()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x60]
        sub esp, 0xFC
        push ebx
        push esi
        push edi
        mov esi, dword ptr ss : [ebp+0x68]
        mov edi, dword ptr ss : [ebp+0x6C]
        mov dword ptr ss : [ebp+0x4C], esi
        mov dword ptr ss : [ebp+0x54], edi
        mov esi, dword ptr ss : [ebp+0x70]
        mov dword ptr ss : [ebp+0x5C], 2
        mov dword ptr ss : [ebp+0x50], esi
        public_6d5b135 : nop
        mov esi, dword ptr ss : [ebp+0x4C]
        mov edi, dword ptr ss : [ebp+0x54]
        movq mm0, qword ptr ds : [esi+0x20]
        movq mm1, qword ptr ds : [edi+0x20]
        movq mm2, qword ptr ds : [esi+0x60]
        pmullw mm0, mm1
        movq mm3, qword ptr ds : [edi+0x60]
        movq mm6, qword ptr ds : [public_6d62690]
        pmullw mm2, mm3
        movq mm7, qword ptr ds : [public_6d626b0]
        movq mm4, mm0
        pmaddwd mm4, mm6
        movq mm5, mm0
        movq mm3, mm2
        psrlq mm5, 0x10
        movq mm1, qword ptr ds : [public_6d62688]
        pmaddwd mm5, mm6
        psrlq mm3, 0x10
        paddw mm0, mm2
        pmaddwd mm2, mm7
        movq mm6, mm0
        psrlq mm6, 0x10
        pmaddwd mm3, mm7
        movq mm7, qword ptr ds : [public_6d626d8]
        pmaddwd mm0, mm1
        pmaddwd mm6, mm1
        pxor mm2, mm7
        movq mm1, qword ptr ds : [public_6d626e0]
        pxor mm3, mm7
        paddd mm2, mm1
        paddd mm3, mm1
        paddd mm2, mm0
        paddd mm4, mm0
        movq mm0, qword ptr ds : [esi]
        paddd mm3, mm6
        movq mm1, qword ptr ds : [edi]
        paddd mm5, mm6
        movq mm6, qword ptr ds : [esi+0x40]
        pmullw mm0, mm1
        movq mm7, qword ptr ds : [edi+0x40]
        nop 
        movq qword ptr ss : [ebp-0x9C], mm2
        pmullw mm6, mm7
        movq mm7, qword ptr ds : [public_6d626e8]
        movq mm1, mm0
        paddw mm0, mm6
        nop 
        psubw mm1, mm6
        movq mm6, mm0
        pmaddwd mm0, mm7
        psrlq mm6, 0x10
        pmaddwd mm6, mm7
        movq mm2, mm1
        pmaddwd mm1, mm7
        psrlq mm2, 0x10
        pmaddwd mm2, mm7
        pslld mm0, 0xD
        movq mm7, mm4
        pslld mm6, 0xD
        paddd mm4, mm0
        psubd mm0, mm7
        movq mm7, mm5
        pslld mm2, 0xD
        movq qword ptr ss : [ebp-0x8C], mm0
        paddd mm5, mm6
        movq mm0, qword ptr ss : [ebp-0x9C]
        psubd mm6, mm7
        movq qword ptr ss : [ebp-0x7C], mm5
        movq mm7, mm3
        movq qword ptr ss : [ebp-0x6C], mm6
        paddd mm3, mm2
        movq qword ptr ss : [ebp-0x5C], mm4
        pslld mm1, 0xD
        movq qword ptr ss : [ebp-0x4C], mm3
        psubd mm2, mm7
        movq mm6, qword ptr ds : [esi+0x10]
        movq mm3, mm0
        movq qword ptr ss : [ebp-0x3C], mm2
        paddd mm0, mm1
        movq mm7, qword ptr ds : [edi+0x10]
        movq qword ptr ss : [ebp-0x2C], mm0
        psubd mm1, mm3
        movq mm0, qword ptr ds : [esi+0x70]
        pmullw mm6, mm7
        movq qword ptr ss : [ebp-0x1C], mm1
        movq mm1, qword ptr ds : [edi+0x70]
        movq mm2, qword ptr ds : [esi+0x50]
        pmullw mm0, mm1
        movq mm3, qword ptr ds : [edi+0x50]
        movq mm4, qword ptr ds : [esi+0x30]
        pmullw mm2, mm3
        movq mm5, qword ptr ds : [edi+0x30]
        movq mm1, mm0
        movq qword ptr ss : [ebp-0xC], mm6
        pmullw mm4, mm5
        movq qword ptr ss : [ebp+4], mm0
        paddw mm0, mm6
        movq qword ptr ss : [ebp+0x14], mm2
        movq mm3, mm2
        movq qword ptr ss : [ebp+0x24], mm4
        paddw mm2, mm4
        paddw mm1, mm4
        movq mm4, qword ptr ds : [public_6d626a0]
        paddw mm3, mm6
        movq mm5, mm1
        movq mm7, mm0
        psrlq mm7, 0x10
        paddw mm5, mm3
        movq mm6, mm5
        pmaddwd mm5, mm4
        pmaddwd mm0, mmword ptr ds : [public_6d62698]
        psrlq mm6, 0x10
        pmaddwd mm6, mm4
        movq mm4, mm2
        movq qword ptr ss : [ebp+0x34], mm5
        psrlq mm4, 0x10
        pxor mm0, mmword ptr ds : [public_6d626d8]
        movq mm5, mm1
        movq qword ptr ss : [ebp+0x3C], mm6
        psrlq mm5, 0x10
        movq mm6, qword ptr ds : [public_6d626c8]
        nop 
        paddd mm0, mmword ptr ds : [public_6d626e0]
        pmaddwd mm2, mm6
        movq qword ptr ss : [ebp-0x64], mm0
        pmaddwd mm4, mm6
        pmaddwd mm7, mmword ptr ds : [public_6d62698]
        movq mm0, mm3
        movq mm6, qword ptr ds : [public_6d626b8]
        psrlq mm0, 0x10
        pxor mm2, mmword ptr ds : [public_6d626d8]
        pmaddwd mm1, mm6
        paddd mm2, mmword ptr ds : [public_6d626e0]
        pmaddwd mm5, mm6
        movq mm6, qword ptr ds : [public_6d62680]
        nop 
        pxor mm4, mmword ptr ds : [public_6d626d8]
        pmaddwd mm3, mm6
        paddd mm4, mmword ptr ds : [public_6d626e0]
        pmaddwd mm0, mm6
        movq mm6, qword ptr ds : [public_6d626d8]
        nop 
        pxor mm1, mm6
        pxor mm7, mm6
        paddd mm1, mmword ptr ds : [public_6d626e0]
        pxor mm5, mm6
        paddd mm7, mmword ptr ds : [public_6d626e0]
        pxor mm3, mm6
        paddd mm5, mmword ptr ds : [public_6d626e0]
        nop 
        movq qword ptr ss : [ebp-0x24], mm7
        pxor mm0, mm6
        paddd mm1, mmword ptr ss : [ebp+0x34]
        nop 
        movq mm6, qword ptr ss : [ebp-0x64]
        nop 
        paddd mm5, mmword ptr ss : [ebp+0x3C]
        paddd mm6, mm1
        paddd mm3, mmword ptr ds : [public_6d626e0]
        paddd mm1, mm2
        paddd mm0, mmword ptr ds : [public_6d626e0]
        paddd mm7, mm5
        paddd mm3, mmword ptr ss : [ebp+0x34]
        paddd mm5, mm4
        paddd mm0, mmword ptr ss : [ebp+0x3C]
        paddd mm2, mm3
        paddd mm3, mmword ptr ss : [ebp-0x64]
        paddd mm4, mm0
        paddd mm0, mmword ptr ss : [ebp-0x24]
        movq qword ptr ss : [ebp+0x44], mm1
        nop 
        movq qword ptr ss : [ebp-0x14], mm0
        nop 
        movq mm0, qword ptr ss : [ebp+4]
        nop 
        movq qword ptr ss : [ebp-0x54], mm2
        movq mm1, mm0
        movq mm2, qword ptr ds : [public_6d62678]
        psrlq mm1, 0x10
        movq qword ptr ss : [ebp-4], mm3
        pmaddwd mm0, mm2
        movq mm3, qword ptr ss : [ebp+0x14]
        pmaddwd mm1, mm2
        movq qword ptr ss : [ebp-0x74], mm4
        movq mm2, mm3
        movq mm4, qword ptr ds : [public_6d626c0]
        psrlq mm2, 0x10
        movq qword ptr ss : [ebp+0xC], mm5
        pmaddwd mm3, mm4
        movq mm5, qword ptr ss : [ebp+0x24]
        pmaddwd mm2, mm4
        movq qword ptr ss : [ebp-0x44], mm6
        movq mm4, mm5
        movq mm6, qword ptr ds : [public_6d626d0]
        psrlq mm4, 0x10
        movq qword ptr ss : [ebp+0x1C], mm7
        pmaddwd mm5, mm6
        movq mm7, qword ptr ss : [ebp-0xC]
        pmaddwd mm4, mm6
        paddd mm0, mmword ptr ss : [ebp-0x44]
        movq mm6, mm7
        paddd mm1, mmword ptr ss : [ebp+0x1C]
        psrlq mm6, 0x10
        movq qword ptr ss : [ebp-0x84], mm0
        nop 
        movq mm0, qword ptr ds : [public_6d626a8]
        nop 
        movq qword ptr ss : [ebp+0x2C], mm1
        pmaddwd mm7, mm0
        paddd mm3, mmword ptr ss : [ebp-0x54]
        pmaddwd mm6, mm0
        movq mm0, qword ptr ss : [ebp-0x5C]
        nop 
        paddd mm7, mmword ptr ss : [ebp-4]
        nop 
        paddd mm6, mmword ptr ss : [ebp-0x14]
        psubd mm0, mm7
        movq mm1, qword ptr ss : [ebp-0x7C]
        nop 
        movq qword ptr ss : [ebp-0x34], mm3
        psubd mm1, mm6
        movq mm3, qword ptr ds : [public_6d626f0]
        nop 
        paddd mm2, mmword ptr ss : [ebp-0x74]
        paddd mm0, mm3
        paddd mm7, mmword ptr ss : [ebp-0x5C]
        psrad mm0, 0xB
        movq qword ptr ss : [ebp-0x94], mm2
        paddd mm1, mm3
        paddd mm6, mmword ptr ss : [ebp-0x7C]
        psrad mm1, 0xB
        paddd mm5, mmword ptr ss : [ebp+0x44]
        movq mm2, mm0
        paddd mm4, mmword ptr ss : [ebp+0xC]
        punpcklwd mm0, mm1
        paddd mm6, mm3
        punpckhwd mm2, mm1
        paddd mm7, mm3
        punpckldq mm0, mm2
        mov edi, dword ptr ss : [ebp+0x50]
        movq qword ptr ds : [edi+0x70], mm0
        psrad mm6, 0xB
        movq mm2, qword ptr ss : [ebp-0x2C]
        psrad mm7, 0xB
        psubd mm2, mm5
        movq mm0, mm7
        movq mm1, qword ptr ss : [ebp-0x4C]
        punpcklwd mm7, mm6
        psubd mm1, mm4
        punpckhwd mm0, mm6
        paddd mm5, mmword ptr ss : [ebp-0x2C]
        punpckldq mm7, mm0
        paddd mm4, mmword ptr ss : [ebp-0x4C]
        paddd mm2, mm3
        paddd mm1, mm3
        paddd mm5, mm3
        paddd mm4, mm3
        psrad mm2, 0xB
        movq qword ptr ds : [edi], mm7
        psrad mm1, 0xB
        movq mm0, mm2
        psrad mm5, 0xB
        movq mm6, qword ptr ss : [ebp-0x1C]
        punpcklwd mm2, mm1
        punpckhwd mm0, mm1
        movq mm1, mm5
        movq mm7, qword ptr ss : [ebp-0x3C]
        punpckldq mm2, mm0
        movq qword ptr ds : [edi+0x60], mm2
        psrad mm4, 0xB
        movq mm2, mm6
        punpcklwd mm5, mm4
        paddd mm6, mmword ptr ss : [ebp-0x34]
        punpckhwd mm1, mm4
        psubd mm2, mmword ptr ss : [ebp-0x34]
        punpckldq mm5, mm1
        movq qword ptr ds : [edi+0x10], mm5
        movq mm0, mm7
        paddd mm7, mmword ptr ss : [ebp-0x94]
        paddd mm6, mm3
        psubd mm0, mmword ptr ss : [ebp-0x94]
        paddd mm7, mm3
        paddd mm2, mm3
        psrad mm7, 0xB
        paddd mm0, mm3
        psrad mm6, 0xB
        movq mm1, mm6
        psrad mm2, 0xB
        movq mm4, qword ptr ss : [ebp-0x8C]
        punpcklwd mm6, mm7
        movq mm5, mm4
        punpckhwd mm1, mm7
        paddd mm4, mmword ptr ss : [ebp-0x84]
        punpckldq mm6, mm1
        psubd mm5, mmword ptr ss : [ebp-0x84]
        psrad mm0, 0xB
        movq qword ptr ds : [edi+0x20], mm6
        movq mm6, mm2
        paddd mm4, mm3
        punpcklwd mm2, mm0
        paddd mm5, mm3
        punpckhwd mm6, mm0
        movq mm0, qword ptr ss : [ebp-0x6C]
        punpckldq mm2, mm6
        movq mm1, mm0
        psrad mm4, 0xB
        paddd mm0, mmword ptr ss : [ebp+0x2C]
        psrad mm5, 0xB
        paddd mm0, mm3
        movq mm6, mm4
        psubd mm1, mmword ptr ss : [ebp+0x2C]
        psrad mm0, 0xB
        paddd mm1, mm3
        punpcklwd mm4, mm0
        movq mm3, mm5
        punpckhwd mm6, mm0
        movq qword ptr ds : [edi+0x50], mm2
        punpckldq mm4, mm6
        psrad mm1, 0xB
        movq qword ptr ds : [edi+0x30], mm4
        punpcklwd mm5, mm1
        punpckhwd mm3, mm1
        punpckldq mm5, mm3
        add dword ptr ss : [ebp+0x4C], 8
        add dword ptr ss : [ebp+0x54], 8
        movq qword ptr ds : [edi+0x40], mm5
        add dword ptr ss : [ebp+0x50], 8
        mov eax, dword ptr ss : [ebp+0x5C]
        dec eax
        mov dword ptr ss : [ebp+0x5C], eax
        jne public_6d5b135
        mov esi, dword ptr ss : [ebp+0x70]
        mov dword ptr ss : [ebp+0x5C], 8
        mov dword ptr ss : [ebp+0x50], esi
        mov dword ptr ss : [ebp+0x58], 0
        public_6d5b61a : nop
        mov esi, dword ptr ss : [ebp+0x50]
        mov edi, dword ptr ss : [ebp+0x74]
        movq mm0, qword ptr ds : [esi]
        movq mm1, qword ptr ds : [esi+8]
        movq mm2, mm0
        movq mm3, mm0
        paddw mm2, mm1
        movq mm4, mm2
        punpckhdq mm3, mm1
        pmaddwd mm3, mmword ptr ds : [public_6d62708]
        movq mm6, mm0
        pmaddwd mm2, mmword ptr ds : [public_6d62710]
        psubw mm6, mm1
        punpckldq mm4, mm6
        movq mm6, mm0
        movq mm5, mm3
        pslld mm4, 0x10
        pxor mm3, mmword ptr ds : [public_6d626d8]
        punpckhdq mm2, mm2
        paddd mm3, mmword ptr ds : [public_6d626e0]
        psrad mm4, 3
        psrlq mm3, 0x20
        movq mm7, mm4
        punpckldq mm5, mm3
        movq mm3, mm0
        paddd mm5, mm2
        paddw mm3, mm1
        paddd mm4, mm5
        psubd mm7, mm5
        movq mm5, mm3
        movq mm2, mm0
        pmaddwd mm0, mmword ptr ds : [public_6d62718]
        punpckldq mm5, mm5
        paddw mm5, mm3
        punpckldq mm2, mm2
        pmaddwd mm5, mmword ptr ds : [public_6d62738]
        punpckhdq mm6, mm2
        pmaddwd mm3, mmword ptr ds : [public_6d62730]
        paddw mm6, mm1
        pmaddwd mm6, mmword ptr ds : [public_6d62728]
        nop 
        pmaddwd mm1, mmword ptr ds : [public_6d62720]
        punpckhdq mm5, mm5
        movq mm2, qword ptr ds : [public_6d626e0]
        nop 
        pxor mm3, mmword ptr ds : [public_6d626d8]
        nop 
        pxor mm6, mmword ptr ds : [public_6d626d8]
        paddd mm3, mm2
        paddd mm6, mm2
        paddd mm3, mm5
        movq mm5, mm6
        paddd mm6, mm3
        movq mm2, mm5
        punpckldq mm5, mm5
        punpckhdq mm2, mm5
        paddd mm1, mm6
        paddd mm2, mm3
        movq mm5, mm1
        movq mm3, mm4
        paddd mm0, mm2
        movq mm2, mm7
        punpckldq mm5, mm5
        punpckhdq mm1, mm5
        psubd mm3, mm0
        movq mm5, qword ptr ds : [public_6d626f8]
        paddd mm0, mm4
        movq mm6, qword ptr ds : [public_6d62700]
        psubd mm2, mm1
        paddd mm0, mm5
        paddd mm1, mm7
        paddd mm1, mm5
        psrad mm0, 0x12
        paddd mm3, mm5
        psrad mm1, 0x12
        paddd mm2, mm5
        psrad mm3, 0x12
        pand mm1, mm6
        psrad mm2, 0x12
        movd ebx, mm1
        psrlq mm1, 0x20
        mov ecx, dword ptr ss : [ebp+0x7C]
        add edi, dword ptr ss : [ebp+0x58]
        movd edx, mm1
        pand mm0, mm6
        mov ah, byte ptr ds : [ecx+ebx]
        mov edi, dword ptr ds : [edi]
        movd ebx, mm0
        psrlq mm0, 0x20
        mov al, byte ptr ds : [ecx+edx]
        add dword ptr ss : [ebp+0x58], 4
        movd edx, mm0
        pand mm3, mm6
        add edi, dword ptr ss : [ebp+0x78]
        shl eax, 0x10
        mov al, byte ptr ds : [ecx+ebx]
        mov ah, byte ptr ds : [ecx+edx]
        movd mm4, eax
        pand mm2, mm6
        movd ebx, mm3
        psrlq mm3, 0x20
        movd edx, mm3
        mov ah, byte ptr ds : [ecx+ebx]
        mov al, byte ptr ds : [ecx+edx]
        movd ebx, mm2
        psrlq mm2, 0x20
        shl eax, 0x10
        movd edx, mm2
        mov al, byte ptr ds : [ecx+ebx]
        mov ah, byte ptr ds : [ecx+edx]
        movd mm5, eax
        punpckldq mm4, mm5
        add dword ptr ss : [ebp+0x50], 0x10
        mov eax, dword ptr ss : [ebp+0x5C]
        movq qword ptr ds : [edi], mm4
        dec eax
        mov dword ptr ss : [ebp+0x5C], eax
        jne public_6d5b61a
        emms 
        pop edi
        pop esi
        pop ebx
        add ebp, 0x60
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5b10e)
    }
}

#undef public_6d5b135
#undef public_6d5b61a
