#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5b7c6);

#define public_6d5b7e7 _public_6d5b7e7
#define public_6d5b96d _public_6d5b96d

PROC_DECLARE(0x6d5b7c6, internal_6d5b7c6, public_6d5b7c6);
extern "C" NAKED register_t __cdecl internal_6d5b7c6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        push ebx
        push esi
        push edi
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x2C], esi
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x28], edi
        mov dword ptr ss : [ebp-0x24], eax
        mov word ptr ss : [ebp-0x1C], 8
        public_6d5b7e7 : nop
        mov esi, dword ptr ss : [ebp-0x2C]
        mov edi, dword ptr ss : [ebp-0x28]
        mov ax, word ptr ds : [esi]
        mov bx, word ptr ds : [esi+0x40]
        imul ax, word ptr ds : [edi]
        mov cx, word ptr ds : [esi+0x20]
        imul bx, word ptr ds : [edi+0x40]
        mov dx, word ptr ds : [esi+0x60]
        imul cx, word ptr ds : [edi+0x20]
        imul dx, word ptr ds : [edi+0x60]
        mov word ptr ss : [ebp-0x18], ax
        add ax, bx
        sub word ptr ss : [ebp-0x18], bx
        mov bx, cx
        add cx, dx
        sub bx, dx
        mov dx, ax
        movsx ebx, bx
        add ax, cx
        imul ebx, 0x16A
        sub dx, cx
        mov word ptr ss : [ebp-0x14], ax
        mov word ptr ss : [ebp-0x10], dx
        sar ebx, 8
        mov ax, word ptr ss : [ebp-0x18]
        sub bx, cx
        add ax, bx
        sub word ptr ss : [ebp-0x18], bx
        mov word ptr ss : [ebp-0xC], ax
        mov ax, word ptr ds : [esi+0x10]
        imul ax, word ptr ds : [edi+0x10]
        mov bx, word ptr ds : [esi+0x70]
        mov cx, word ptr ds : [esi+0x30]
        imul bx, word ptr ds : [edi+0x70]
        mov dx, word ptr ds : [esi+0x50]
        imul cx, word ptr ds : [edi+0x30]
        imul dx, word ptr ds : [edi+0x50]
        mov word ptr ss : [ebp-8], ax
        add ax, bx
        sub word ptr ss : [ebp-8], bx
        mov bx, dx
        add dx, cx
        sub bx, cx
        mov cx, ax
        add ax, dx
        sub cx, dx
        movsx ecx, cx
        mov dx, bx
        add bx, word ptr ss : [ebp-8]
        imul ecx, 0x16A
        movsx edx, dx
        movsx ebx, bx
        imul edx, 0xFFFFFD63
        imul ebx, 0x1D9
        mov di, word ptr ss : [ebp-8]
        movsx edi, di
        sar ecx, 8
        sar ebx, 8
        imul edi, 0x115
        sar edx, 8
        sar edi, 8
        sub di, bx
        add dx, bx
        sub dx, ax
        sub cx, dx
        add di, cx
        mov word ptr ss : [ebp-4], di
        mov edi, dword ptr ss : [ebp-0x24]
        mov si, ax
        mov bx, word ptr ss : [ebp-0x14]
        add ax, word ptr ss : [ebp-0x14]
        sub bx, si
        mov word ptr ds : [edi], ax
        mov word ptr ds : [edi+0x70], bx
        mov ax, dx
        mov bx, word ptr ss : [ebp-0xC]
        add dx, bx
        sub bx, ax
        mov word ptr ds : [edi+0x10], dx
        mov word ptr ds : [edi+0x60], bx
        mov dx, cx
        mov bx, word ptr ss : [ebp-0x18]
        add cx, bx
        sub bx, dx
        mov word ptr ds : [edi+0x20], cx
        mov word ptr ds : [edi+0x50], bx
        mov cx, word ptr ss : [ebp-4]
        mov ax, word ptr ss : [ebp-0x10]
        add word ptr ss : [ebp-4], ax
        sub ax, cx
        mov bx, word ptr ss : [ebp-4]
        mov word ptr ds : [edi+0x40], bx
        mov word ptr ds : [edi+0x30], ax
        add dword ptr ss : [ebp-0x2C], 2
        add dword ptr ss : [ebp-0x28], 2
        add dword ptr ss : [ebp-0x24], 2
        mov ax, word ptr ss : [ebp-0x1C]
        dec ax
        mov word ptr ss : [ebp-0x1C], ax
        jne public_6d5b7e7
        mov esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x20], 0
        mov word ptr ss : [ebp-0x1C], 8
        mov dword ptr ss : [ebp-0x24], esi
        public_6d5b96d : nop
        mov edi, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ss : [ebp-0x24]
        add edi, dword ptr ss : [ebp-0x20]
        mov edi, dword ptr ds : [edi]
        add edi, dword ptr ss : [ebp+0x18]
        add dword ptr ss : [ebp-0x20], 4
        mov ax, word ptr ds : [esi]
        mov bx, word ptr ds : [esi+8]
        mov cx, word ptr ds : [esi+4]
        mov dx, word ptr ds : [esi+0xC]
        mov word ptr ss : [ebp-0x18], ax
        add ax, bx
        sub word ptr ss : [ebp-0x18], bx
        mov bx, cx
        add cx, dx
        sub bx, dx
        mov dx, ax
        movsx ebx, bx
        add ax, cx
        imul ebx, 0x16A
        sub dx, cx
        mov word ptr ss : [ebp-0x14], ax
        mov word ptr ss : [ebp-0x10], dx
        sar ebx, 8
        mov ax, word ptr ss : [ebp-0x18]
        sub bx, cx
        add ax, bx
        sub word ptr ss : [ebp-0x18], bx
        mov word ptr ss : [ebp-0xC], ax
        mov ax, word ptr ds : [esi+2]
        mov bx, word ptr ds : [esi+0xE]
        mov cx, word ptr ds : [esi+6]
        mov dx, word ptr ds : [esi+0xA]
        mov word ptr ss : [ebp-8], ax
        add ax, bx
        sub word ptr ss : [ebp-8], bx
        mov bx, dx
        add dx, cx
        sub bx, cx
        mov cx, ax
        add ax, dx
        sub cx, dx
        movsx ecx, cx
        mov dx, bx
        add bx, word ptr ss : [ebp-8]
        imul ecx, 0x16A
        movsx edx, dx
        movsx ebx, bx
        imul edx, 0xFFFFFD63
        imul ebx, 0x1D9
        mov si, word ptr ss : [ebp-8]
        movsx esi, si
        sar ecx, 8
        sar ebx, 8
        imul esi, 0x115
        sar edx, 8
        sar esi, 8
        sub si, bx
        add dx, bx
        sub dx, ax
        sub cx, dx
        add si, cx
        mov word ptr ss : [ebp-4], si
        mov si, ax
        mov bx, word ptr ss : [ebp-0x14]
        add ax, word ptr ss : [ebp-0x14]
        sub bx, si
        mov esi, dword ptr ss : [ebp+0x1C]
        sar ax, 5
        sar bx, 5
        and eax, 0x3FF
        and ebx, 0x3FF
        mov al, byte ptr ds : [esi+eax]
        mov bl, byte ptr ds : [esi+ebx]
        mov byte ptr ds : [edi], al
        mov byte ptr ds : [edi+7], bl
        mov ax, dx
        mov bx, word ptr ss : [ebp-0xC]
        add dx, bx
        sub bx, ax
        sar dx, 5
        sar bx, 5
        and edx, 0x3FF
        and ebx, 0x3FF
        mov dl, byte ptr ds : [esi+edx]
        mov bl, byte ptr ds : [esi+ebx]
        mov byte ptr ds : [edi+1], dl
        mov byte ptr ds : [edi+6], bl
        mov dx, cx
        mov bx, word ptr ss : [ebp-0x18]
        add cx, bx
        sub bx, dx
        sar cx, 5
        sar bx, 5
        and ecx, 0x3FF
        and ebx, 0x3FF
        mov cl, byte ptr ds : [esi+ecx]
        mov bl, byte ptr ds : [esi+ebx]
        mov byte ptr ds : [edi+2], cl
        mov byte ptr ds : [edi+5], bl
        mov cx, word ptr ss : [ebp-4]
        mov ax, word ptr ss : [ebp-0x10]
        add word ptr ss : [ebp-4], ax
        sub ax, cx
        sar word ptr ss : [ebp-4], 5
        sar ax, 5
        mov cx, word ptr ss : [ebp-4]
        and ecx, 0x3FF
        and eax, 0x3FF
        mov bl, byte ptr ds : [esi+ecx]
        mov al, byte ptr ds : [esi+eax]
        mov byte ptr ds : [edi+4], bl
        mov byte ptr ds : [edi+3], al
        add dword ptr ss : [ebp-0x24], 0x10
        mov ax, word ptr ss : [ebp-0x1C]
        dec ax
        mov word ptr ss : [ebp-0x1C], ax
        jne public_6d5b96d
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5b7c6)
    }
}

#undef public_6d5b7e7
#undef public_6d5b96d
