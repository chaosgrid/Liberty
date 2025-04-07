#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a6eb);

#define public_6b3a57b _public_6b3a57b
#define public_6b3a57d _public_6b3a57d
#define public_6b3a58f _public_6b3a58f
#define public_6b3a5a4 _public_6b3a5a4
#define public_6b3a5a8 _public_6b3a5a8
#define public_6b3a623 _public_6b3a623
#define public_6b3a62d _public_6b3a62d
#define public_6b3a64b _public_6b3a64b
#define public_6b3a65f _public_6b3a65f
#define public_6b3a668 _public_6b3a668
#define public_6b3a67d _public_6b3a67d

PROC_DECLARE(0x6b3a510, internal_6b3a510, public_6b3a510);
extern "C" NAKED register_t __cdecl internal_6b3a510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a6eb @0x6b3a512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a6eb
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
        je public_6b3a67d
        cmp dword ptr ds : [edi], ebp
        jne public_6b3a58f
        push 0xC
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_6b3a57b
        mov al, byte ptr ss : [esp+0x28]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6b6a134
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebp
        jmp public_6b3a57d
        public_6b3a57b : nop
        xor esi, esi
        public_6b3a57d : nop
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        je public_6b3a67d
        public_6b3a58f : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        je public_6b3a67d
        jmp public_6b3a5a8
        public_6b3a5a4 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6b3a5a8 : nop
        mov edi, dword ptr ds : [ebx+8]
        push 0x18
        call public_6b6a134
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        je public_6b3a668
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
        jbe public_6b3a62d
        movzx eax, ax
        push eax
        call public_6b6a134
        mov dword ptr ds : [esi+0x14], eax
        mov edi, dword ptr ds : [edi+0x14]
        add esp, 4
        mov ecx, eax
        public_6b3a623 : nop
        mov al, byte ptr ds : [edi]
        inc edi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6b3a623
        public_6b3a62d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6b3a64b
        mov ebp, eax
        public_6b3a64b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6b3a65f
        mov dword ptr ds : [eax], esi
        public_6b3a65f : nop
        inc dword ptr ds : [ebx+8]
        mov ebx, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        public_6b3a668 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6b3a5a4
        public_6b3a67d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6b3a510)
    }
}

#undef public_6b3a57b
#undef public_6b3a57d
#undef public_6b3a58f
#undef public_6b3a5a4
#undef public_6b3a5a8
#undef public_6b3a623
#undef public_6b3a62d
#undef public_6b3a64b
#undef public_6b3a65f
#undef public_6b3a668
#undef public_6b3a67d
