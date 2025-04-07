#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b347e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b382f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b3f970);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a5d2);

#define public_6b350d6 _public_6b350d6
#define public_6b350f0 _public_6b350f0
#define public_6b3510c _public_6b3510c
#define public_6b35117 _public_6b35117
#define public_6b3511f _public_6b3511f
#define public_6b35154 _public_6b35154
#define public_6b35170 _public_6b35170
#define public_6b3517b _public_6b3517b
#define public_6b35183 _public_6b35183
#define public_6b351aa _public_6b351aa
#define public_6b351fe _public_6b351fe
#define public_6b35210 _public_6b35210

PROC_DECLARE(0x6b34ed0, internal_6b34ed0, public_6b34ed0);
extern "C" NAKED register_t __cdecl internal_6b34ed0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a5d2 @0x6b34ed2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a5d2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push edi
        lea eax, ss:[esp+4]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 4
        push 2
        mov dword ptr ss : [esp+0x18], edi
        call public_6b3b480
        test eax, eax
        jne public_6b35210
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        push ecx
        push esi
        call public_6b382f0
        mov eax, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [esi+0xDC]
        mov byte ptr ds : [eax+0x9C], dl
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0xAC]
        mov dword ptr ds : [edx+0xBC], ecx
        mov ax, word ptr ds : [esi+0xB0]
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ecx+0xC0], ax
        mov dl, byte ptr ds : [esi+0xB4]
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0xC2], dl
        mov ecx, dword ptr ds : [esi+0xD0]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0xB8], ecx
        mov eax, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xA0], eax
        mov edx, dword ptr ds : [esi+0xBC]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0xA4], edx
        mov ecx, dword ptr ds : [esi+0xC0]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0xA8], ecx
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xAC], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [eax+0xB0], edx
        mov ecx, dword ptr ds : [esi+0xCC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0xB4], ecx
        mov al, byte ptr ds : [esi+0xA8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0xE8], al
        mov dx, word ptr ds : [esi+0xD8]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 8
        mov word ptr ds : [eax+0xC4], dx
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b351fe
        push ebx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        add ecx, 0x2C
        push ecx
        mov byte ptr ss : [esp+0x60], 1
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_6b6b098]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        cmp eax, ebx
        je public_6b350d6
        push eax
        call dword ptr ds : [public_6b6b1e4]
        add esp, 4
        cmp eax, ebx
        je public_6b350d6
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_6b3f970
        jmp public_6b351aa
        public_6b350d6 : nop
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        lea ebp, ds:[eax+0xC8]
        mov edi, 6
        je public_6b3511f
        mov edi, edi
        public_6b350f0 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b3510c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b35117
        public_6b3510c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b35117 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        cmp esi, ebx
        jne public_6b350f0
        public_6b3511f : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6b6a134
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6b6b090]
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x10]
        lea ebp, ds:[eax+0xD0]
        mov edi, 6
        je public_6b35183
        public_6b35154 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b35170
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b3517b
        public_6b35170 : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b3517b : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        cmp esi, ebx
        jne public_6b35154
        public_6b35183 : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6b6a134
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6b6b090]
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x60]
        pop ebp
        public_6b351aa : nop
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ds:[eax+0xE0]
        push ebx
        push ecx
        add eax, 0x2C
        push eax
        call dword ptr ds : [public_6b6b0a0]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ds:[eax+0xE4]
        push edx
        add esi, 0xD4
        add eax, 0x2C
        push esi
        push eax
        call dword ptr ds : [public_6b6b09c]
        mov esi, dword ptr ds : [public_6b6b094]
        add esp, 0x18
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x50], bl
        call esi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call esi
        pop ebx
        public_6b351fe : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x24]
        pop esi
        public_6b35210 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6b34ed0)
    }
}

#undef public_6b350d6
#undef public_6b350f0
#undef public_6b3510c
#undef public_6b35117
#undef public_6b3511f
#undef public_6b35154
#undef public_6b35170
#undef public_6b3517b
#undef public_6b35183
#undef public_6b351aa
#undef public_6b351fe
#undef public_6b35210
