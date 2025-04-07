#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a45b);

#define public_6bdc8bb _public_6bdc8bb
#define public_6bdc8bd _public_6bdc8bd
#define public_6bdc8cf _public_6bdc8cf
#define public_6bdc8e4 _public_6bdc8e4
#define public_6bdc8e8 _public_6bdc8e8
#define public_6bdc963 _public_6bdc963
#define public_6bdc96d _public_6bdc96d
#define public_6bdc98b _public_6bdc98b
#define public_6bdc99f _public_6bdc99f
#define public_6bdc9a8 _public_6bdc9a8
#define public_6bdc9bd _public_6bdc9bd

PROC_DECLARE(0x6bdc850, internal_6bdc850, public_6bdc850);
extern "C" NAKED register_t __cdecl internal_6bdc850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a45b @0x6bdc852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a45b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        cmp eax, ebp
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        je public_6bdc9bd
        cmp dword ptr ds : [edi], ebp
        jne public_6bdc8cf
        push 0xC
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_6bdc8bb
        mov al, byte ptr ss : [esp+0x28]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6c09d26
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebp
        jmp public_6bdc8bd
        public_6bdc8bb : nop
        xor esi, esi
        public_6bdc8bd : nop
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        je public_6bdc9bd
        public_6bdc8cf : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        je public_6bdc9bd
        jmp public_6bdc8e8
        public_6bdc8e4 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6bdc8e8 : nop
        mov edi, dword ptr ds : [ebx+8]
        push 0x18
        call public_6c09d26
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        je public_6bdc9a8
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov word ptr ds : [esi+0xC], bp
        mov byte ptr ds : [esi+0xE], 0
        mov byte ptr ds : [esi+0xF], 0
        mov word ptr ds : [esi+0x10], bp
        mov dword ptr ds : [esi+0x14], ebp
        mov dx, word ptr ds : [edi+0x10]
        mov word ptr ds : [esi+0x10], dx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov ax, word ptr ds : [edi+0xC]
        mov word ptr ds : [esi+0xC], ax
        mov cl, byte ptr ds : [edi+0xE]
        mov ax, word ptr ds : [esi+0x10]
        cmp ax, bp
        mov byte ptr ds : [esi+0xE], cl
        mov dl, byte ptr ds : [edi+0xF]
        mov byte ptr ds : [esi+0xF], dl
        jbe public_6bdc96d
        movzx eax, ax
        push eax
        call public_6c09d26
        mov dword ptr ds : [esi+0x14], eax
        mov edi, dword ptr ds : [edi+0x14]
        add esp, 4
        mov ecx, eax
        public_6bdc963 : nop
        mov al, byte ptr ds : [edi]
        inc edi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6bdc963
        public_6bdc96d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6bdc98b
        mov ebp, eax
        public_6bdc98b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6bdc99f
        mov dword ptr ds : [eax], esi
        public_6bdc99f : nop
        inc dword ptr ds : [ebx+8]
        mov ebx, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        public_6bdc9a8 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6bdc8e4
        public_6bdc9bd : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6bdc850)
    }
}

#undef public_6bdc8bb
#undef public_6bdc8bd
#undef public_6bdc8cf
#undef public_6bdc8e4
#undef public_6bdc8e8
#undef public_6bdc963
#undef public_6bdc96d
#undef public_6bdc98b
#undef public_6bdc99f
#undef public_6bdc9a8
#undef public_6bdc9bd
