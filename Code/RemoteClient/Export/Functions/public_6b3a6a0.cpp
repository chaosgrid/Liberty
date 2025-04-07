#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a70b);

#define public_6b3a6ff _public_6b3a6ff
#define public_6b3a701 _public_6b3a701
#define public_6b3a713 _public_6b3a713
#define public_6b3a72a _public_6b3a72a
#define public_6b3a730 _public_6b3a730
#define public_6b3a7b0 _public_6b3a7b0
#define public_6b3a7ba _public_6b3a7ba
#define public_6b3a7d8 _public_6b3a7d8
#define public_6b3a7ec _public_6b3a7ec
#define public_6b3a7f5 _public_6b3a7f5
#define public_6b3a808 _public_6b3a808

PROC_DECLARE(0x6b3a6a0, internal_6b3a6a0, public_6b3a6a0);
extern "C" NAKED register_t __cdecl internal_6b3a6a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a70b @0x6b3a6a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a70b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], edi
        jne public_6b3a713
        push 0xC
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_6b3a6ff
        mov al, byte ptr ss : [esp+0x28]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6b6a134
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebp
        jmp public_6b3a701
        public_6b3a6ff : nop
        xor esi, esi
        public_6b3a701 : nop
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        je public_6b3a808
        public_6b3a713 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        je public_6b3a808
        jmp public_6b3a730
        public_6b3a72a : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov edi, edi
        public_6b3a730 : nop
        mov edi, dword ptr ds : [ebx+8]
        push 0x18
        call public_6b6a134
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        je public_6b3a7f5
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
        jbe public_6b3a7ba
        movzx eax, ax
        push eax
        call public_6b6a134
        mov dword ptr ds : [esi+0x14], eax
        mov edi, dword ptr ds : [edi+0x14]
        add esp, 4
        mov ecx, eax
        nop 
        lea esp, ss:[esp]
        public_6b3a7b0 : nop
        mov al, byte ptr ds : [edi]
        inc edi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6b3a7b0
        public_6b3a7ba : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6b3a7d8
        mov ebp, eax
        public_6b3a7d8 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6b3a7ec
        mov dword ptr ds : [eax], esi
        public_6b3a7ec : nop
        inc dword ptr ds : [ebx+8]
        mov ebx, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        public_6b3a7f5 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6b3a72a
        public_6b3a808 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6b3a6a0)
    }
}

#undef public_6b3a6ff
#undef public_6b3a701
#undef public_6b3a713
#undef public_6b3a72a
#undef public_6b3a730
#undef public_6b3a7b0
#undef public_6b3a7ba
#undef public_6b3a7d8
#undef public_6b3a7ec
#undef public_6b3a7f5
#undef public_6b3a808
