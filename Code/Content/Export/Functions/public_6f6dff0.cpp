#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f6dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe48);

#define public_6f6e073 _public_6f6e073
#define public_6f6e088 _public_6f6e088
#define public_6f6e0a7 _public_6f6e0a7
#define public_6f6e0cd _public_6f6e0cd
#define public_6f6e0f0 _public_6f6e0f0

PROC_DECLARE(0x6f6dff0, internal_6f6dff0, public_6f6dff0);
extern "C" NAKED register_t __cdecl internal_6f6dff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafe48 @0x6f6dff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov al, byte ptr ss : [esp+0x30]
        push ebx
        xor ebx, ebx
        push esi
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        cmp byte ptr ss : [esp+0x3C], bl
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6f6e0cd
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        call public_6f73930
        cmp eax, ebx
        mov dword ptr ss : [esp+0x3C], eax
        je public_6f6e0f0
        mov edx, dword ptr ds : [eax+0x154]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f66220
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        cmp edx, ebx
        je public_6f6e073
        mov eax, ecx
        sub eax, edx
        sar eax, 2
        cmp eax, ebx
        jne public_6f6e088
        public_6f6e073 : nop
        lea edx, ss:[esp+0x3C]
        push edx
        push 1
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f6e088 : nop
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, ecx
        mov al, byte ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+8], 3
        mov byte ptr ss : [esp+0xC], al
        je public_6f6e0f0
        push edi
        mov edi, dword ptr ds : [public_6fb33c0]
        public_6f6e0a7 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov dword ptr ss : [esp+0x44], edx
        call edi
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 4
        add esp, 8
        cmp esi, eax
        jne public_6f6e0a7
        pop edi
        jmp public_6f6e0f0
        public_6f6e0cd : nop
        mov dl, byte ptr ss : [esp+0x38]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov dword ptr ss : [esp+0x10], 3
        mov byte ptr ss : [esp+0x14], dl
        call dword ptr ds : [public_6fb33c0]
        add esp, 8
        public_6f6e0f0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f6dff0)
    }
}

#undef public_6f6e073
#undef public_6f6e088
#undef public_6f6e0a7
#undef public_6f6e0cd
#undef public_6f6e0f0
