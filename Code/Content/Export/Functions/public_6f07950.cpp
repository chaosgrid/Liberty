#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f07950);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f27940);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6facfa0);

#define public_6f079b0 _public_6f079b0
#define public_6f079c6 _public_6f079c6
#define public_6f079d5 _public_6f079d5
#define public_6f079e0 _public_6f079e0
#define public_6f079f4 _public_6f079f4
#define public_6f07a64 _public_6f07a64

PROC_DECLARE(0x6f07950, internal_6f07950, public_6f07950);
extern "C" NAKED register_t __cdecl internal_6f07950()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facfa0 @0x6f07952*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facfa0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov al, byte ptr ss : [esp+0x28]
        push ebx
        xor ebx, ebx
        push esi
        push edi
        mov edi, ecx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx+0x154]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x34], ebx
        call public_6f66220
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        cmp esi, eax
        je public_6f079d5
        lea ebx, ds:[ebx]
        public_6f079b0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f079c6
        call public_6f57710
        test al, al
        jne public_6f079f4
        public_6f079c6 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 4
        cmp esi, eax
        jne public_6f079b0
        mov esi, dword ptr ss : [esp+0x18]
        public_6f079d5 : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        xor al, al
        public_6f079e0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        public_6f079f4 : nop
        mov dword ptr ss : [esp+0xC], ebx
        lea eax, ss:[esp+0xC]
        push eax
        push 1
        mov byte ptr ss : [esp+0x34], 1
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 8
        push 0x3F800000
        call public_6f27940
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x114], 1
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x2C], bl
        je public_6f07a64
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], ebx
        public_6f07a64 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov al, 1
        jmp public_6f079e0
        UNREACHABLE_TRAP(0x6f07950)
    }
}

#undef public_6f079b0
#undef public_6f079c6
#undef public_6f079d5
#undef public_6f079e0
#undef public_6f079f4
#undef public_6f07a64
