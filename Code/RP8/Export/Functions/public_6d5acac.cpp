#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5acac);

#define public_6d5ace4 _public_6d5ace4
#define public_6d5af1a _public_6d5af1a

PROC_DECLARE(0x6d5acac, internal_6d5acac, public_6d5acac);
extern "C" NAKED register_t __cdecl internal_6d5acac()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x44
        push ebx
        push esi
        push edi
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x44], esi
        mov dword ptr ss : [ebp-0x40], edi
        mov dword ptr ss : [ebp-0x3C], eax
        mov dword ptr ss : [ebp-0x38], 8
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edi+0x40]
        mov edx, dword ptr ds : [edi+0x60]
        public_6d5ace4 : nop
        mov esi, dword ptr ss : [ebp-0x44]
        mov edi, dword ptr ss : [ebp-0x40]
        mov ax, word ptr ds : [esi+0x20]
        mov bx, word ptr ds : [edi+0x20]
        shl eax, 0x10
        mov cx, word ptr ds : [esi+0x60]
        sar eax, 0x10
        mov dx, word ptr ds : [edi+0x60]
        shl ebx, 0x10
        sar ebx, 0x10
        imul eax, ebx
        shl ecx, 0x10
        sar ecx, 0x10
        shl edx, 0x10
        sar edx, 0x10
        imul ecx, edx
        mov ebx, eax
        imul eax, 0x187E
        add ebx, ecx
        imul ecx, 0xFFFFC4DF
        imul ebx, 0x1151
        mov dx, word ptr ds : [edi+0x40]
        add ecx, ebx
        add eax, ebx
        mov dword ptr ss : [ebp-0x34], ecx
        mov dword ptr ss : [ebp-0x30], eax
        mov cx, word ptr ds : [esi+0x40]
        mov ax, word ptr ds : [esi]
        mov bx, word ptr ds : [edi]
        movsx edx, dx
        movsx ecx, cx
        movsx eax, ax
        movsx ebx, bx
        imul ecx, edx
        imul eax, ebx
        mov edx, ecx
        add ecx, eax
        shl ecx, 0xD
        sub eax, edx
        shl eax, 0xD
        mov ebx, ecx
        add ecx, dword ptr ss : [ebp-0x30]
        mov edx, eax
        add eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x2C], ecx
        sub ebx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x28], eax
        sub edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x24], ebx
        mov ax, word ptr ds : [esi+0x70]
        mov dword ptr ss : [ebp-0x20], edx
        mov bx, word ptr ds : [edi+0x70]
        shl eax, 0x10
        mov cx, word ptr ds : [esi+0x30]
        sar eax, 0x10
        mov dx, word ptr ds : [edi+0x30]
        shl ebx, 0x10
        sar ebx, 0x10
        imul eax, ebx
        shl ecx, 0x10
        sar ecx, 0x10
        shl edx, 0x10
        sar edx, 0x10
        mov bx, word ptr ds : [esi+0x10]
        imul ecx, edx
        shl ebx, 0x10
        mov dx, word ptr ds : [edi+0x10]
        sar ebx, 0x10
        shl edx, 0x10
        sar edx, 0x10
        imul ebx, edx
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0x34], ecx
        mov ax, word ptr ds : [esi+0x50]
        mov dx, word ptr ds : [edi+0x50]
        shl eax, 0x10
        sar eax, 0x10
        shl edx, 0x10
        sar edx, 0x10
        imul eax, edx
        imul ecx, 0x6254
        mov dword ptr ss : [ebp-0x30], ebx
        mov edx, dword ptr ss : [ebp-0x1C]
        imul ebx, 0x300B
        imul edx, 0x98E
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x14], edx
        imul eax, 0x41B3
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-8], ebx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ebx, dword ptr ss : [ebp-0x18]
        mov ecx, eax
        mov edx, ebx
        add eax, dword ptr ss : [ebp-0x30]
        add ebx, dword ptr ss : [ebp-0x30]
        add ecx, dword ptr ss : [ebp-0x34]
        add edx, dword ptr ss : [ebp-0x34]
        mov esi, ecx
        imul eax, 0xFFFFE333
        imul edx, 0xFFFFADFD
        add esi, ebx
        imul esi, 0x25A1
        imul ecx, 0xFFFFC13B
        imul ebx, 0xFFFFF384
        add ecx, esi
        add ebx, esi
        mov esi, eax
        add eax, ecx
        add esi, ebx
        add ecx, edx
        add edx, ebx
        add eax, dword ptr ss : [ebp-0x14]
        add edx, dword ptr ss : [ebp-0x10]
        add ecx, dword ptr ss : [ebp-0xC]
        add esi, dword ptr ss : [ebp-8]
        mov ebx, dword ptr ss : [ebp-0x24]
        sub ebx, eax
        add eax, dword ptr ss : [ebp-0x24]
        add ebx, 0x400
        mov edi, dword ptr ss : [ebp-0x3C]
        sar ebx, 0xB
        add eax, 0x400
        sar eax, 0xB
        mov dword ptr ds : [edi+0x80], ebx
        mov dword ptr ds : [edi+0x60], eax
        mov ebx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ss : [ebp-0x28]
        sub ebx, edx
        add edx, dword ptr ss : [ebp-0x20]
        sub eax, ecx
        add ecx, dword ptr ss : [ebp-0x28]
        add ebx, 0x400
        sar ebx, 0xB
        add eax, 0x400
        sar eax, 0xB
        add edx, 0x400
        add ecx, 0x400
        mov dword ptr ds : [edi+0xA0], ebx
        sar edx, 0xB
        mov dword ptr ds : [edi+0xC0], eax
        sar ecx, 0xB
        mov dword ptr ds : [edi+0x40], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edi+0x20], ecx
        mov ebx, eax
        sub eax, esi
        add ebx, esi
        add eax, 0x400
        sar eax, 0xB
        add ebx, 0x400
        sar ebx, 0xB
        mov dword ptr ds : [edi+0xE0], eax
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ss : [ebp-0x38]
        add dword ptr ss : [ebp-0x44], 2
        add dword ptr ss : [ebp-0x3C], 4
        add dword ptr ss : [ebp-0x40], 2
        dec eax
        mov dword ptr ss : [ebp-0x38], eax
        jne public_6d5ace4
        mov esi, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x38], 8
        mov dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0x3C], esi
        public_6d5af1a : nop
        mov esi, dword ptr ss : [ebp-0x3C]
        mov edi, dword ptr ss : [ebp+0x14]
        add edi, dword ptr ss : [ebp-4]
        mov edi, dword ptr ds : [edi]
        add dword ptr ss : [ebp-4], 4
        add edi, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x18]
        mov ebx, eax
        mov edx, dword ptr ds : [edi]
        imul eax, 0x187E
        add ebx, ecx
        imul ecx, 0xFFFFC4DF
        imul ebx, 0x1151
        add ecx, ebx
        add eax, ebx
        mov dword ptr ss : [ebp-0x34], ecx
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi]
        mov edx, ecx
        add ecx, eax
        sub eax, edx
        shl ecx, 0xD
        shl eax, 0xD
        mov ebx, ecx
        add ecx, dword ptr ss : [ebp-0x30]
        mov edx, eax
        add eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x2C], ecx
        sub ebx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x28], eax
        sub edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x24], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [ebp-0x20], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0x34], ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [ebp-0x30], ebx
        imul ecx, 0x6254
        mov edx, dword ptr ss : [ebp-0x1C]
        imul ebx, 0x300B
        imul edx, 0x98E
        mov dword ptr ss : [ebp-0x18], eax
        imul eax, 0x41B3
        mov dword ptr ss : [ebp-0x14], edx
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-8], ebx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ebx, dword ptr ss : [ebp-0x18]
        mov ecx, eax
        mov edx, ebx
        add eax, dword ptr ss : [ebp-0x30]
        add edx, dword ptr ss : [ebp-0x34]
        add ebx, dword ptr ss : [ebp-0x30]
        add ecx, dword ptr ss : [ebp-0x34]
        mov esi, ecx
        imul eax, 0xFFFFE333
        imul edx, 0xFFFFADFD
        add esi, ebx
        imul esi, 0x25A1
        imul ecx, 0xFFFFC13B
        imul ebx, 0xFFFFF384
        add ecx, esi
        add ebx, esi
        mov esi, eax
        add eax, ecx
        add esi, ebx
        add ecx, edx
        add edx, ebx
        add eax, dword ptr ss : [ebp-0x14]
        add edx, dword ptr ss : [ebp-0x10]
        add ecx, dword ptr ss : [ebp-0xC]
        add esi, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0x18], edx
        mov dword ptr ss : [ebp-0x34], ecx
        mov dword ptr ss : [ebp-0x30], esi
        mov ebx, dword ptr ss : [ebp-0x24]
        add ebx, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0x2C]
        sub ecx, dword ptr ss : [ebp-0x30]
        add ebx, 0x20000
        sar ebx, 0x12
        add ecx, 0x20000
        sar ecx, 0x12
        mov esi, dword ptr ss : [ebp+0x1C]
        and ebx, 0x3FF
        and ecx, 0x3FF
        mov al, byte ptr ds : [esi+ebx]
        mov dl, byte ptr ds : [esi+ecx]
        mov ebx, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-0x28]
        add ebx, dword ptr ss : [ebp-0x18]
        sub ecx, dword ptr ss : [ebp-0x34]
        shl eax, 8
        add ebx, 0x20000
        shl edx, 8
        add ecx, 0x20000
        sar ebx, 0x12
        sar ecx, 0x12
        and ebx, 0x3FF
        and ecx, 0x3FF
        mov al, byte ptr ds : [esi+ebx]
        mov dl, byte ptr ds : [esi+ecx]
        mov ebx, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0x20]
        add ebx, dword ptr ss : [ebp-0x34]
        shl eax, 8
        sub ecx, dword ptr ss : [ebp-0x18]
        shl edx, 8
        add ebx, 0x20000
        sar ebx, 0x12
        add ecx, 0x20000
        sar ecx, 0x12
        and ebx, 0x3FF
        and ecx, 0x3FF
        mov al, byte ptr ds : [esi+ebx]
        mov dl, byte ptr ds : [esi+ecx]
        mov ebx, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ss : [ebp-0x24]
        add ebx, dword ptr ss : [ebp-0x30]
        shl eax, 8
        sub ecx, dword ptr ss : [ebp-0x1C]
        shl edx, 8
        add ebx, 0x20000
        sar ebx, 0x12
        add ecx, 0x20000
        sar ecx, 0x12
        and ebx, 0x3FF
        and ecx, 0x3FF
        mov al, byte ptr ds : [esi+ebx]
        mov dl, byte ptr ds : [esi+ecx]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ss : [ebp-0x38]
        add dword ptr ss : [ebp-0x3C], 0x20
        dec eax
        mov dword ptr ss : [ebp-0x38], eax
        jne public_6d5af1a
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5acac)
    }
}

#undef public_6d5ace4
#undef public_6d5af1a
