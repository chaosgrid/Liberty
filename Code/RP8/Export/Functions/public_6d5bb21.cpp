#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5bb21);

PROC_DECLARE(0x6d5bb21, internal_6d5bb21, public_6d5bb21);
extern "C" NAKED register_t __cdecl internal_6d5bb21()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov ebx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x30]
        movq mm0, qword ptr ds : [ebx+0x60]
        pmullw mm0, mmword ptr ds : [edi+0x60]
        movq mm1, qword ptr ds : [ebx+0x20]
        pmullw mm1, mmword ptr ds : [edi+0x20]
        movq mm3, qword ptr ds : [ebx]
        pmullw mm3, mmword ptr ds : [edi]
        movq mm5, qword ptr ds : [ebx+0x40]
        movq mm2, mm1
        pmullw mm5, mmword ptr ds : [edi+0x40]
        psubw mm1, mm0
        movq mm7, qword ptr ds : [public_6d62750]
        movq mm6, mm1
        punpcklwd mm1, dword ptr ds : [public_6d62770]
        paddw mm2, mm0
        pmaddwd mm1, mm7
        movq mm0, mm2
        punpckhwd mm6, mmword ptr ds : [public_6d62770]
        movq mm4, mm3
        pmaddwd mm6, mm7
        paddw mm3, mm5
        psrad mm1, 8
        psubw mm4, mm5
        psrad mm6, 8
        packssdw mm1, mm6
        movq mm6, mm3
        psubw mm1, mm0
        paddw mm3, mm2
        movq mm5, mm1
        paddw mm1, mm4
        movq qword ptr ds : [esi+0x20], mm3
        psubw mm4, mm5
        movq qword ptr ds : [esi+0x60], mm1
        psubw mm6, mm2
        movq qword ptr ds : [esi], mm4
        movq mm7, qword ptr ds : [ebx+0x50]
        pmullw mm7, mmword ptr ds : [edi+0x50]
        movq mm0, qword ptr ds : [ebx+0x30]
        pmullw mm0, mmword ptr ds : [edi+0x30]
        movq mm3, mm7
        movq mm5, qword ptr ds : [ebx+0x10]
        pmullw mm5, mmword ptr ds : [edi+0x10]
        psubw mm7, mm0
        movq mm4, qword ptr ds : [ebx+0x70]
        pmullw mm4, mmword ptr ds : [edi+0x70]
        paddw mm3, mm0
        movq mm1, qword ptr ds : [public_6d62758]
        movq qword ptr ss : [esp+0x1C], mm7
        movq mm2, mm7
        punpcklwd mm7, dword ptr ds : [public_6d62770]
        movq mm0, mm5
        pmaddwd mm7, mm1
        paddw mm5, mm4
        punpckhwd mm2, mmword ptr ds : [public_6d62770]
        psubw mm0, mm4
        pmaddwd mm2, mm1
        movq mm4, mm0
        punpcklwd mm0, dword ptr ds : [public_6d62770]
        psrad mm7, 8
        psrad mm2, 8
        movq mm1, mm4
        punpckhwd mm4, mmword ptr ds : [public_6d62770]
        packssdw mm7, mm2
        movq mm2, qword ptr ds : [public_6d62760]
        pmaddwd mm0, mm2
        pmaddwd mm4, mm2
        psrad mm0, 8
        movq mm2, qword ptr ds : [public_6d62768]
        psrad mm4, 8
        packssdw mm0, mm4
        movq mm4, mm1
        movq mm1, qword ptr ss : [esp+0x1C]
        movq qword ptr ss : [esp+0x14], mm0
        paddw mm1, mm4
        movq mm0, mm1
        punpcklwd mm1, dword ptr ds : [public_6d62770]
        movq mm4, mm5
        pmaddwd mm1, mm2
        paddw mm5, mm3
        punpckhwd mm0, mmword ptr ds : [public_6d62770]
        psubw mm4, mm3
        movq mm3, qword ptr ds : [public_6d62750]
        pmaddwd mm0, mm2
        psrad mm1, 8
        movq mm2, mm4
        punpcklwd mm4, dword ptr ds : [public_6d62770]
        psrad mm0, 8
        pmaddwd mm4, mm3
        packssdw mm1, mm0
        punpckhwd mm2, mmword ptr ds : [public_6d62770]
        movq mm0, qword ptr ss : [esp+0x14]
        pmaddwd mm2, mm3
        psubw mm0, mm1
        paddw mm1, mm7
        movq mm7, qword ptr ds : [esi+0x20]
        psrad mm4, 8
        psrad mm2, 8
        movq mm3, mm6
        packssdw mm4, mm2
        psubw mm1, mm5
        movq mm2, qword ptr ds : [esi+0x60]
        psubw mm4, mm1
        paddw mm0, mm4
        psubw mm6, mm0
        paddw mm3, mm0
        movq mm0, mm1
        movq mm1, mm7
        movq qword ptr ds : [esi+0x40], mm3
        paddw mm7, mm5
        movq qword ptr ds : [esi+0x30], mm6
        psubw mm1, mm5
        movq mm6, qword ptr ds : [esi]
        movq mm3, mm2
        movq qword ptr ds : [esi], mm7
        paddw mm2, mm0
        movq qword ptr ds : [esi+0x70], mm1
        psubw mm3, mm0
        movq qword ptr ds : [esi+0x10], mm2
        movq mm0, mm6
        movq qword ptr ds : [esi+0x60], mm3
        paddw mm6, mm4
        movq mm1, qword ptr ds : [ebx+0x28]
        psubw mm0, mm4
        pmullw mm1, mmword ptr ds : [edi+0x28]
        movq qword ptr ds : [esi+0x20], mm6
        movq qword ptr ds : [esi+0x50], mm0
        movq mm7, qword ptr ds : [ebx+0x68]
        movq mm2, mm1
        pmullw mm7, mmword ptr ds : [edi+0x68]
        movq mm3, qword ptr ds : [ebx+8]
        pmullw mm3, mmword ptr ds : [edi+8]
        movq mm5, qword ptr ds : [ebx+0x48]
        psubw mm1, mm7
        pmullw mm5, mmword ptr ds : [edi+0x48]
        paddw mm2, mm7
        movq mm7, qword ptr ds : [public_6d62750]
        movq mm4, mm1
        punpcklwd mm1, dword ptr ds : [public_6d62770]
        movq mm6, mm2
        pmaddwd mm1, mm7
        punpckhwd mm4, mmword ptr ds : [public_6d62770]
        movq mm0, qword ptr ds : [ebx+0x58]
        pmaddwd mm4, mm7
        pmullw mm0, mmword ptr ds : [edi+0x58]
        psrad mm1, 8
        psrad mm4, 8
        packssdw mm1, mm4
        movq mm4, mm3
        paddw mm3, mm5
        psubw mm4, mm5
        movq mm7, mm3
        psubw mm1, mm6
        movq mm6, qword ptr ds : [ebx+0x38]
        paddw mm3, mm2
        movq mm5, mm4
        paddw mm4, mm1
        movq qword ptr ds : [esi+0x28], mm3
        psubw mm5, mm1
        pmullw mm6, mmword ptr ds : [edi+0x38]
        psubw mm7, mm2
        movq qword ptr ds : [esi+0x68], mm4
        movq mm3, mm0
        movq qword ptr ds : [esi+0x48], mm5
        paddw mm0, mm6
        movq mm4, qword ptr ds : [ebx+0x78]
        psubw mm3, mm6
        pmullw mm4, mmword ptr ds : [edi+0x78]
        movq mm1, mm3
        movq mm5, qword ptr ds : [ebx+0x18]
        movq mm2, mm1
        pmullw mm5, mmword ptr ds : [edi+0x18]
        movq qword ptr ss : [esp+0x1C], mm7
        movq mm6, mm5
        movq mm7, qword ptr ds : [public_6d62758]
        paddw mm5, mm4
        punpcklwd mm1, dword ptr ds : [public_6d62770]
        psubw mm6, mm4
        pmaddwd mm1, mm7
        movq mm4, mm5
        punpckhwd mm2, mmword ptr ds : [public_6d62770]
        paddw mm5, mm0
        pmaddwd mm2, mm7
        psubw mm4, mm0
        movq qword ptr ss : [esp+0xC], mm3
        psrad mm1, 8
        movq mm3, qword ptr ds : [public_6d62750]
        psrad mm2, 8
        packssdw mm1, mm2
        movq mm2, mm4
        punpcklwd mm4, dword ptr ds : [public_6d62770]
        pmaddwd mm4, mm3
        punpckhwd mm2, mmword ptr ds : [public_6d62770]
        pmaddwd mm2, mm3
        psrad mm4, 8
        movq mm3, qword ptr ss : [esp+0xC]
        movq mm0, qword ptr ds : [public_6d62768]
        paddw mm3, mm6
        psrad mm2, 8
        movq mm7, mm3
        packssdw mm4, mm2
        movq mm2, mm5
        punpcklwd mm3, dword ptr ds : [public_6d62770]
        pmaddwd mm3, mm0
        punpckhwd mm7, mmword ptr ds : [public_6d62770]
        pmaddwd mm7, mm0
        movq mm0, mm6
        psrad mm3, 8
        punpcklwd mm6, dword ptr ds : [public_6d62770]
        psrad mm7, 8
        packssdw mm3, mm7
        movq mm7, qword ptr ds : [public_6d62760]
        punpckhwd mm0, mmword ptr ds : [public_6d62770]
        pmaddwd mm6, mm7
        pmaddwd mm0, mm7
        psrad mm6, 8
        psrad mm0, 8
        packssdw mm6, mm0
        movq mm0, qword ptr ds : [esi+0x28]
        psubw mm6, mm3
        paddw mm3, mm1
        psubw mm3, mm2
        movq mm1, mm0
        psubw mm4, mm3
        paddw mm0, mm5
        movq mm2, qword ptr ds : [esi+0x68]
        paddw mm6, mm4
        movq mm7, qword ptr ss : [esp+0x1C]
        psubw mm1, mm5
        movq qword ptr ds : [esi+8], mm0
        movq mm5, mm7
        movq mm0, qword ptr ds : [esi+0x48]
        psubw mm7, mm6
        paddw mm5, mm6
        movq mm6, mm3
        movq qword ptr ds : [esi+0x38], mm7
        movq mm3, mm2
        psubw mm3, mm6
        paddw mm2, mm6
        movq qword ptr ds : [esi+0x18], mm2
        movq mm6, mm0
        paddw mm0, mm4
        psubw mm6, mm4
        movq qword ptr ds : [esi+0x28], mm0
        movq mm0, mm5
        punpcklwd mm5, mm6
        punpckhwd mm0, mm6
        movq mm6, qword ptr ds : [esi]
        movq mm2, mm3
        punpcklwd mm3, mm1
        movq mm7, qword ptr ds : [esi+0x10]
        punpckhwd mm2, mm1
        movq mm4, mm5
        punpckldq mm5, mm3
        movq qword ptr ds : [esi+0x48], mm5
        punpckhdq mm4, mm3
        movq mm3, mm0
        punpckldq mm0, mm2
        movq qword ptr ds : [esi+0x58], mm4
        punpckhdq mm3, mm2
        movq qword ptr ds : [esi+0x68], mm0
        movq mm5, mm6
        movq qword ptr ds : [esi+0x78], mm3
        punpcklwd mm6, mm7
        punpckhwd mm5, mm7
        movq mm7, qword ptr ds : [esi+0x20]
        movq mm4, qword ptr ds : [esi+0x30]
        movq mm3, mm7
        movq mm2, mm6
        punpcklwd mm7, mm4
        punpckhwd mm3, mm4
        movq mm4, mm5
        movq mm1, mm5
        punpckldq mm6, mm7
        movq qword ptr ds : [esi], mm6
        punpckhdq mm2, mm7
        movq qword ptr ds : [esi+0x10], mm2
        punpckldq mm5, mm3
        movq qword ptr ds : [esi+0x20], mm5
        punpckhdq mm1, mm3
        movq qword ptr ds : [esi+0x30], mm1
        movq mm0, qword ptr ds : [esi+8]
        movq mm1, qword ptr ds : [esi+0x18]
        movq mm2, mm0
        movq mm3, qword ptr ds : [esi+0x28]
        punpcklwd mm0, mm1
        punpckhwd mm2, mm1
        movq mm1, qword ptr ds : [esi+0x38]
        movq mm4, mm3
        punpcklwd mm3, mm1
        punpckhwd mm4, mm1
        movq mm1, mm0
        movq mm5, mm2
        punpckldq mm0, mm3
        punpckhdq mm1, mm3
        movq mm3, qword ptr ds : [esi+0x40]
        movq qword ptr ds : [esi+0x40], mm0
        punpckldq mm2, mm4
        punpckhdq mm5, mm4
        movq mm4, qword ptr ds : [esi+0x50]
        movq qword ptr ds : [esi+0x50], mm1
        movq mm1, mm3
        movq mm0, qword ptr ds : [esi+0x60]
        punpcklwd mm3, mm4
        punpckhwd mm1, mm4
        movq mm4, qword ptr ds : [esi+0x70]
        movq qword ptr ds : [esi+0x60], mm2
        movq mm2, mm0
        movq qword ptr ds : [esi+0x70], mm5
        punpcklwd mm0, mm4
        punpckhwd mm2, mm4
        movq mm4, mm3
        movq mm5, mm1
        punpckldq mm3, mm0
        movq qword ptr ds : [esi+8], mm3
        punpckhdq mm4, mm0
        movq qword ptr ds : [esi+0x18], mm4
        punpckldq mm1, mm2
        movq qword ptr ds : [esi+0x28], mm1
        punpckhdq mm5, mm2
        movq qword ptr ds : [esi+0x38], mm5
        mov esi, dword ptr ss : [esp+0x2C]
        movq mm0, qword ptr ds : [esi+0x60]
        movq mm1, qword ptr ds : [esi+0x20]
        movq mm3, qword ptr ds : [esi]
        movq mm2, mm1
        movq mm5, qword ptr ds : [esi+0x40]
        psubw mm1, mm0
        movq mm6, qword ptr ds : [public_6d62750]
        movq mm4, mm1
        punpcklwd mm1, dword ptr ds : [public_6d62770]
        paddw mm2, mm0
        pmaddwd mm1, mm6
        movq mm0, mm2
        punpckhwd mm4, mmword ptr ds : [public_6d62770]
        pmaddwd mm4, mm6
        psrad mm1, 8
        psrad mm4, 8
        packssdw mm1, mm4
        movq mm4, mm3
        paddw mm3, mm5
        psubw mm4, mm5
        movq mm6, mm3
        psubw mm1, mm0
        paddw mm3, mm2
        movq mm5, mm1
        paddw mm1, mm4
        movq qword ptr ds : [esi+0x20], mm3
        psubw mm4, mm5
        movq qword ptr ds : [esi+0x60], mm1
        psubw mm6, mm2
        movq qword ptr ds : [esi], mm4
        movq mm7, qword ptr ds : [esi+0x50]
        movq mm0, qword ptr ds : [esi+0x30]
        movq mm3, mm7
        movq mm5, qword ptr ds : [esi+0x10]
        psubw mm7, mm0
        movq mm4, qword ptr ds : [esi+0x70]
        paddw mm3, mm0
        movq mm2, qword ptr ds : [public_6d62758]
        movq mm1, mm7
        movq qword ptr ss : [esp+0x14], mm6
        movq mm0, mm7
        punpcklwd mm7, dword ptr ds : [public_6d62770]
        pmaddwd mm7, mm2
        punpckhwd mm0, mmword ptr ds : [public_6d62770]
        pmaddwd mm0, mm2
        psrad mm7, 8
        movq mm6, qword ptr ds : [public_6d62760]
        psrad mm0, 8
        packssdw mm7, mm0
        movq mm0, mm5
        paddw mm5, mm4
        psubw mm0, mm4
        movq mm2, mm0
        movq mm4, mm0
        punpcklwd mm0, dword ptr ds : [public_6d62770]
        pmaddwd mm0, mm6
        punpckhwd mm4, mmword ptr ds : [public_6d62770]
        pmaddwd mm4, mm6
        paddw mm1, mm2
        movq mm2, qword ptr ds : [public_6d62768]
        psrad mm0, 8
        psrad mm4, 8
        movq mm6, mm1
        packssdw mm0, mm4
        movq mm4, mm5
        punpcklwd mm1, dword ptr ds : [public_6d62770]
        paddw mm5, mm3
        pmaddwd mm1, mm2
        psubw mm4, mm3
        punpckhwd mm6, mmword ptr ds : [public_6d62770]
        pmaddwd mm6, mm2
        psrad mm1, 8
        psrad mm6, 8
        packssdw mm1, mm6
        psubw mm0, mm1
        paddw mm1, mm7
        movq mm7, qword ptr ds : [public_6d62750]
        movq mm3, mm4
        punpcklwd mm4, dword ptr ds : [public_6d62770]
        psubw mm1, mm5
        pmaddwd mm4, mm7
        punpckhwd mm3, mmword ptr ds : [public_6d62770]
        movq mm6, qword ptr ss : [esp+0x14]
        pmaddwd mm3, mm7
        movq mm2, qword ptr ds : [esi+0x60]
        psrad mm4, 8
        movq mm7, qword ptr ds : [esi+0x20]
        psrad mm3, 8
        packssdw mm4, mm3
        movq mm3, mm6
        psubw mm4, mm1
        paddw mm0, mm4
        psubw mm6, mm0
        paddw mm3, mm0
        movq mm0, mm1
        movq mm1, mm7
        movq qword ptr ds : [esi+0x40], mm3
        paddw mm7, mm5
        movq qword ptr ds : [esi+0x30], mm6
        psubw mm1, mm5
        movq mm6, qword ptr ds : [esi]
        movq mm3, mm2
        movq qword ptr ds : [esi], mm7
        paddw mm2, mm0
        movq qword ptr ds : [esi+0x70], mm1
        psubw mm3, mm0
        movq qword ptr ds : [esi+0x10], mm2
        movq mm0, mm6
        movq qword ptr ds : [esi+0x60], mm3
        paddw mm6, mm4
        movq mm1, qword ptr ds : [esi+0x28]
        psubw mm0, mm4
        movq qword ptr ds : [esi+0x20], mm6
        movq qword ptr ds : [esi+0x50], mm0
        movq mm7, qword ptr ds : [esi+0x68]
        movq mm2, mm1
        movq mm3, qword ptr ds : [esi+8]
        psubw mm1, mm7
        movq mm5, qword ptr ds : [esi+0x48]
        paddw mm2, mm7
        movq mm4, qword ptr ds : [public_6d62750]
        movq mm6, mm1
        punpcklwd mm1, dword ptr ds : [public_6d62770]
        pmaddwd mm1, mm4
        punpckhwd mm6, mmword ptr ds : [public_6d62770]
        pmaddwd mm6, mm4
        movq mm4, mm3
        paddw mm3, mm5
        psrad mm1, 8
        psubw mm4, mm5
        movq mm7, mm3
        psrad mm6, 8
        packssdw mm1, mm6
        movq mm6, mm2
        psubw mm1, mm6
        paddw mm3, mm2
        movq mm5, mm4
        paddw mm4, mm1
        movq qword ptr ds : [esi+0x28], mm3
        psubw mm5, mm1
        movq qword ptr ds : [esi+0x68], mm4
        psubw mm7, mm2
        movq qword ptr ds : [esi+0x48], mm5
        movq mm0, qword ptr ds : [esi+0x58]
        movq mm6, qword ptr ds : [esi+0x38]
        movq mm4, qword ptr ds : [esi+0x78]
        movq mm3, mm0
        movq mm5, qword ptr ds : [esi+0x18]
        paddw mm0, mm6
        movq qword ptr ss : [esp+0x1C], mm7
        psubw mm3, mm6
        movq mm6, qword ptr ds : [public_6d62758]
        movq mm1, mm3
        movq mm7, mm1
        punpcklwd mm1, dword ptr ds : [public_6d62770]
        pmaddwd mm1, mm6
        punpckhwd mm7, mmword ptr ds : [public_6d62770]
        pmaddwd mm7, mm6
        movq mm6, mm5
        paddw mm5, mm4
        psrad mm1, 8
        psubw mm6, mm4
        movq mm4, mm5
        psrad mm7, 8
        paddw mm5, mm0
        packssdw mm1, mm7
        psubw mm4, mm0
        movq mm7, qword ptr ds : [public_6d62750]
        movq mm2, mm4
        punpcklwd mm4, dword ptr ds : [public_6d62770]
        paddw mm3, mm6
        pmaddwd mm4, mm7
        punpckhwd mm2, mmword ptr ds : [public_6d62770]
        pmaddwd mm2, mm7
        movq mm7, qword ptr ds : [public_6d62768]
        psrad mm4, 8
        psrad mm2, 8
        packssdw mm4, mm2
        movq mm2, mm3
        punpcklwd mm3, dword ptr ds : [public_6d62770]
        pmaddwd mm3, mm7
        punpckhwd mm2, mmword ptr ds : [public_6d62770]
        pmaddwd mm2, mm7
        movq mm7, qword ptr ds : [public_6d62760]
        psrad mm3, 8
        psrad mm2, 8
        packssdw mm3, mm2
        movq mm2, mm6
        punpcklwd mm6, dword ptr ds : [public_6d62770]
        pmaddwd mm6, mm7
        punpckhwd mm2, mmword ptr ds : [public_6d62770]
        pmaddwd mm2, mm7
        movq mm0, qword ptr ds : [esi+0x28]
        psrad mm6, 8
        movq mm7, qword ptr ss : [esp+0x1C]
        psrad mm2, 8
        packssdw mm6, mm2
        movq mm2, mm5
        psubw mm6, mm3
        paddw mm3, mm1
        psubw mm3, mm2
        movq mm1, mm0
        psubw mm4, mm3
        paddw mm0, mm5
        movq mm2, qword ptr ds : [esi+0x68]
        paddw mm6, mm4
        movq qword ptr ds : [esi+8], mm0
        psubw mm1, mm5
        movq mm5, mm7
        psubw mm7, mm6
        paddw mm5, mm6
        movq mm6, mm3
        movq mm0, qword ptr ds : [esi+0x48]
        movq mm3, mm2
        movq qword ptr ds : [esi+0x38], mm7
        psubw mm3, mm6
        paddw mm2, mm6
        movq mm6, mm0
        movq qword ptr ds : [esi+0x18], mm2
        paddw mm0, mm4
        psubw mm6, mm4
        movq qword ptr ds : [esi+0x28], mm0
        mov edi, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x34]
        mov ebx, dword ptr ds : [edx+0x10]
        add ebx, dword ptr ss : [esp+0x38]
        movq mm0, mm5
        punpcklwd mm5, mm6
        punpckhwd mm0, mm6
        movq mm2, mm3
        movq mm6, qword ptr ds : [esi]
        punpcklwd mm3, mm1
        movq mm7, qword ptr ds : [esi+0x10]
        punpckhwd mm2, mm1
        movq mm4, mm5
        punpckldq mm5, mm3
        psrlw mm5, 5
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+4], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+5], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+6], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+7], al
        mov ebx, dword ptr ds : [edx+0x14]
        add ebx, dword ptr ss : [esp+0x38]
        punpckhdq mm4, mm3
        movq mm3, mm0
        punpckldq mm0, mm2
        psrlw mm4, 5
        movd eax, mm4
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+4], al
        psrlq mm4, 0x10
        movd eax, mm4
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+5], al
        psrlq mm4, 0x10
        movd eax, mm4
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+6], al
        psrlq mm4, 0x10
        movd eax, mm4
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+7], al
        mov ecx, dword ptr ds : [edx+0x18]
        add ecx, dword ptr ss : [esp+0x38]
        punpckhdq mm3, mm2
        psrlw mm0, 5
        movd eax, mm0
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+4], al
        psrlq mm0, 0x10
        movd eax, mm0
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+5], al
        psrlq mm0, 0x10
        movd eax, mm0
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+6], al
        psrlq mm0, 0x10
        movd eax, mm0
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+7], al
        mov ebx, dword ptr ds : [edx+0x1C]
        add ebx, dword ptr ss : [esp+0x38]
        movq mm5, mm6
        psrlw mm3, 5
        movd eax, mm3
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+4], al
        psrlq mm3, 0x10
        movd eax, mm3
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+5], al
        psrlq mm3, 0x10
        movd eax, mm3
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+6], al
        psrlq mm3, 0x10
        movd eax, mm3
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+7], al
        punpcklwd mm6, mm7
        mov edx, dword ptr ss : [esp+0x34]
        mov ebx, dword ptr ds : [edx]
        add ebx, dword ptr ss : [esp+0x38]
        movq mm4, qword ptr ds : [esi+0x30]
        punpckhwd mm5, mm7
        movq mm7, qword ptr ds : [esi+0x20]
        movq mm2, mm6
        movq mm3, mm7
        punpcklwd mm7, mm4
        punpckhwd mm3, mm4
        movq mm4, mm5
        movq mm1, mm5
        punpckldq mm6, mm7
        psrlw mm6, 5
        movd eax, mm6
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx], al
        psrlq mm6, 0x10
        movd eax, mm6
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+1], al
        psrlq mm6, 0x10
        movd eax, mm6
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+2], al
        psrlq mm6, 0x10
        movd eax, mm6
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+3], al
        mov ebx, dword ptr ds : [edx+4]
        add ebx, dword ptr ss : [esp+0x38]
        punpckhdq mm2, mm7
        psrlw mm2, 5
        movd eax, mm2
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx], al
        psrlq mm2, 0x10
        movd eax, mm2
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+1], al
        psrlq mm2, 0x10
        movd eax, mm2
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+2], al
        psrlq mm2, 0x10
        movd eax, mm2
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+3], al
        mov ecx, dword ptr ds : [edx+8]
        add ecx, dword ptr ss : [esp+0x38]
        punpckldq mm5, mm3
        psrlw mm5, 5
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+1], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+2], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+3], al
        mov ebx, dword ptr ds : [edx+0xC]
        add ebx, dword ptr ss : [esp+0x38]
        punpckhdq mm1, mm3
        psrlw mm1, 5
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+1], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+2], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+3], al
        mov edx, dword ptr ss : [esp+0x34]
        mov ebx, dword ptr ds : [edx+0x10]
        add ebx, dword ptr ss : [esp+0x38]
        movq mm0, qword ptr ds : [esi+8]
        movq mm1, qword ptr ds : [esi+0x18]
        movq mm2, mm0
        movq mm3, qword ptr ds : [esi+0x28]
        punpcklwd mm0, mm1
        punpckhwd mm2, mm1
        movq mm4, mm3
        movq mm1, qword ptr ds : [esi+0x38]
        movq mm5, mm2
        punpcklwd mm3, mm1
        punpckhwd mm4, mm1
        movq mm1, mm0
        punpckldq mm0, mm3
        punpckhdq mm1, mm3
        movq mm3, qword ptr ds : [esi+0x40]
        psrlw mm0, 5
        movd eax, mm0
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx], al
        psrlq mm0, 0x10
        movd eax, mm0
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+1], al
        psrlq mm0, 0x10
        movd eax, mm0
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+2], al
        psrlq mm0, 0x10
        movd eax, mm0
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+3], al
        mov ebx, dword ptr ds : [edx+0x14]
        add ebx, dword ptr ss : [esp+0x38]
        punpckldq mm2, mm4
        punpckhdq mm5, mm4
        movq mm4, qword ptr ds : [esi+0x50]
        psrlw mm1, 5
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+1], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+2], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+3], al
        mov ecx, dword ptr ds : [edx+0x18]
        add ecx, dword ptr ss : [esp+0x38]
        movq mm0, qword ptr ds : [esi+0x60]
        movq mm1, mm3
        punpcklwd mm3, mm4
        punpckhwd mm1, mm4
        movq mm4, qword ptr ds : [esi+0x70]
        psrlw mm2, 5
        movd eax, mm2
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx], al
        psrlq mm2, 0x10
        movd eax, mm2
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+1], al
        psrlq mm2, 0x10
        movd eax, mm2
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+2], al
        psrlq mm2, 0x10
        movd eax, mm2
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+3], al
        mov ebx, dword ptr ds : [edx+0x1C]
        add ebx, dword ptr ss : [esp+0x38]
        movq mm2, mm0
        psrlw mm5, 5
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+1], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+2], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+3], al
        punpcklwd mm0, mm4
        punpckhwd mm2, mm4
        movq mm4, mm3
        movq mm5, mm1
        punpckldq mm3, mm0
        mov edx, dword ptr ss : [esp+0x34]
        mov ebx, dword ptr ds : [edx]
        add ebx, dword ptr ss : [esp+0x38]
        psrlw mm3, 5
        movd eax, mm3
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+4], al
        psrlq mm3, 0x10
        movd eax, mm3
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+5], al
        psrlq mm3, 0x10
        movd eax, mm3
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+6], al
        psrlq mm3, 0x10
        movd eax, mm3
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+7], al
        mov ebx, dword ptr ds : [edx+4]
        add ebx, dword ptr ss : [esp+0x38]
        punpckhdq mm4, mm0
        psrlw mm4, 5
        movd eax, mm4
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+4], al
        psrlq mm4, 0x10
        movd eax, mm4
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+5], al
        psrlq mm4, 0x10
        movd eax, mm4
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+6], al
        psrlq mm4, 0x10
        movd eax, mm4
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+7], al
        mov ecx, dword ptr ds : [edx+8]
        add ecx, dword ptr ss : [esp+0x38]
        punpckldq mm1, mm2
        psrlw mm1, 5
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+4], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+5], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+6], al
        psrlq mm1, 0x10
        movd eax, mm1
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+7], al
        mov ebx, dword ptr ds : [edx+0xC]
        add ebx, dword ptr ss : [esp+0x38]
        punpckhdq mm5, mm2
        psrlw mm5, 5
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+4], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+5], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+6], al
        psrlq mm5, 0x10
        movd eax, mm5
        and eax, 0x3FF
        mov al, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ebx+7], al
        emms 
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6d5bb21)
    }
}
