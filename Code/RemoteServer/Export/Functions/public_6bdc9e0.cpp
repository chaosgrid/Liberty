#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a47b);

#define public_6bdca3f _public_6bdca3f
#define public_6bdca41 _public_6bdca41
#define public_6bdca53 _public_6bdca53
#define public_6bdca6a _public_6bdca6a
#define public_6bdca70 _public_6bdca70
#define public_6bdcaf0 _public_6bdcaf0
#define public_6bdcafa _public_6bdcafa
#define public_6bdcb18 _public_6bdcb18
#define public_6bdcb2c _public_6bdcb2c
#define public_6bdcb35 _public_6bdcb35
#define public_6bdcb48 _public_6bdcb48

PROC_DECLARE(0x6bdc9e0, internal_6bdc9e0, public_6bdc9e0);
extern "C" NAKED register_t __cdecl internal_6bdc9e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a47b @0x6bdc9e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a47b
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
        jne public_6bdca53
        push 0xC
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_6bdca3f
        mov al, byte ptr ss : [esp+0x28]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6c09d26
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebp
        jmp public_6bdca41
        public_6bdca3f : nop
        xor esi, esi
        public_6bdca41 : nop
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        je public_6bdcb48
        public_6bdca53 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        je public_6bdcb48
        jmp public_6bdca70
        public_6bdca6a : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov edi, edi
        public_6bdca70 : nop
        mov edi, dword ptr ds : [ebx+8]
        push 0x18
        call public_6c09d26
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        je public_6bdcb35
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
        jbe public_6bdcafa
        movzx eax, ax
        push eax
        call public_6c09d26
        mov dword ptr ds : [esi+0x14], eax
        mov edi, dword ptr ds : [edi+0x14]
        add esp, 4
        mov ecx, eax
        nop 
        lea esp, ss:[esp]
        public_6bdcaf0 : nop
        mov al, byte ptr ds : [edi]
        inc edi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6bdcaf0
        public_6bdcafa : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6bdcb18
        mov ebp, eax
        public_6bdcb18 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6bdcb2c
        mov dword ptr ds : [eax], esi
        public_6bdcb2c : nop
        inc dword ptr ds : [ebx+8]
        mov ebx, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        public_6bdcb35 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6bdca6a
        public_6bdcb48 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6bdc9e0)
    }
}

#undef public_6bdca3f
#undef public_6bdca41
#undef public_6bdca53
#undef public_6bdca6a
#undef public_6bdca70
#undef public_6bdcaf0
#undef public_6bdcafa
#undef public_6bdcb18
#undef public_6bdcb2c
#undef public_6bdcb35
#undef public_6bdcb48
