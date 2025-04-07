#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f576c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f67090);
CLANG_FORWARD_PROC_SYMBOL(public_6f671a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f67660);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafc88);

#define public_6f67100 _public_6f67100
#define public_6f67138 _public_6f67138
#define public_6f67152 _public_6f67152
#define public_6f6716d _public_6f6716d
#define public_6f67188 _public_6f67188

PROC_DECLARE(0x6f67090, internal_6f67090, public_6f67090);
extern "C" NAKED register_t __cdecl internal_6f67090()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafc88 @0x6f67098*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafc88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [edi+0x154]
        push esi
        call public_6f67660
        add esp, 4
        cmp eax, edi
        jne public_6f6716d
        mov al, byte ptr ss : [esp+0x28]
        push ebx
        xor ebx, ebx
        mov byte ptr ss : [esp+0xC], al
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        lea ecx, ss:[esp+0xC]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6f66220
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp edi, eax
        je public_6f67152
        lea ebx, ds:[ebx]
        public_6f67100 : nop
        mov ecx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [ecx+4]
        call public_6eea860
        push esi
        mov ecx, eax
        call public_6f73930
        mov esi, eax
        cmp esi, ebx
        je public_6f67138
        mov eax, dword ptr ds : [esi+0x154]
        cmp eax, 0xFFFFFFFF
        je public_6f67138
        push eax
        push esi
        call public_6f6ee40
        add esp, 8
        push ebx
        push ebx
        push 0xFFFFFFFF
        mov ecx, esi
        call public_6f576c0
        public_6f67138 : nop
        mov edx, dword ptr ds : [edi]
        push edx
        call public_6f671a0
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 4
        add esp, 4
        cmp edi, eax
        jne public_6f67100
        mov edi, dword ptr ss : [esp+0x10]
        public_6f67152 : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        pop ebx
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6f6716d : nop
        cmp esi, 0xFFFFFFFF
        je public_6f67188
        push 0
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        mov ecx, edi
        call public_6f576c0
        push edi
        call public_6f671a0
        add esp, 4
        public_6f67188 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f67090)
    }
}

#undef public_6f67100
#undef public_6f67138
#undef public_6f67152
#undef public_6f6716d
#undef public_6f67188
