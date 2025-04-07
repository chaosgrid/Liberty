#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fa90);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d91580);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db25f8);

#define public_6d8cff0 _public_6d8cff0
#define public_6d8d01b _public_6d8d01b
#define public_6d8d01d _public_6d8d01d
#define public_6d8d070 _public_6d8d070
#define public_6d8d07a _public_6d8d07a
#define public_6d8d095 _public_6d8d095
#define public_6d8d0c5 _public_6d8d0c5

PROC_DECLARE(0x6d8cf90, internal_6d8cf90, public_6d8cf90);
extern "C" NAKED register_t __cdecl internal_6d8cf90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db25f8 @0x6d8cf92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db25f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 0x16
        push 3
        mov dword ptr ss : [esp+0x18], edi
        call public_6d96300
        test eax, eax
        jne public_6d8d0c5
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+0xC], ebx
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x28], eax
        je public_6d8d095
        push ebp
        lea ebx, ds:[ebx]
        public_6d8cff0 : nop
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d8d01b
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov word ptr ds : [eax+0xC], bx
        mov byte ptr ds : [eax+0xE], bl
        mov byte ptr ds : [eax+0xF], bl
        mov word ptr ds : [eax+0x10], bx
        mov dword ptr ds : [eax+0x14], ebx
        mov ebp, eax
        jmp public_6d8d01d
        public_6d8d01b : nop
        xor ebp, ebp
        public_6d8d01d : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [ebp+8], edx
        mov ax, word ptr ds : [esi+0xA]
        mov word ptr ss : [ebp+0xC], ax
        mov al, byte ptr ds : [esi+0x14]
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [ebp+0xE], al
        call dword ptr ds : [public_6db30d8]
        test al, al
        jne public_6d8d07a
        mov edi, dword ptr ds : [esi+0x10]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        mov eax, ecx
        mov word ptr ss : [ebp+0x10], ax
        movzx eax, ax
        push eax
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        mov edx, eax
        public_6d8d070 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        cmp al, bl
        jne public_6d8d070
        public_6d8d07a : nop
        push ebp
        lea ecx, ss:[esp+0x14]
        call public_6d91580
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x2C]
        jne public_6d8cff0
        mov edi, dword ptr ss : [esp+0x18]
        pop ebp
        public_6d8d095 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6d8fa90
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x170]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6d91340
        pop esi
        pop ebx
        public_6d8d0c5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6d8cf90)
    }
}

#undef public_6d8cff0
#undef public_6d8d01b
#undef public_6d8d01d
#undef public_6d8d070
#undef public_6d8d07a
#undef public_6d8d095
#undef public_6d8d0c5
