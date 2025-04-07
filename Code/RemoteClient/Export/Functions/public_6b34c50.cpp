#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b347e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b382f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a5b2);

#define public_6b34dc6 _public_6b34dc6
#define public_6b34de2 _public_6b34de2
#define public_6b34ded _public_6b34ded
#define public_6b34df5 _public_6b34df5
#define public_6b34e30 _public_6b34e30
#define public_6b34e4c _public_6b34e4c
#define public_6b34e57 _public_6b34e57
#define public_6b34e5f _public_6b34e5f
#define public_6b34ea1 _public_6b34ea1
#define public_6b34eb3 _public_6b34eb3

PROC_DECLARE(0x6b34c50, internal_6b34c50, public_6b34c50);
extern "C" NAKED register_t __cdecl internal_6b34c50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a5b2 @0x6b34c52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a5b2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push edi
        lea eax, ss:[esp+4]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 0x42
        push 2
        mov dword ptr ss : [esp+0x14], edi
        call public_6b3b480
        test eax, eax
        jne public_6b34eb3
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        push ecx
        push esi
        call public_6b382f0
        mov dl, byte ptr ds : [esi+0xAD]
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x9C], dl
        mov cl, byte ptr ds : [esi+0xA8]
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 8
        mov byte ptr ds : [edx+0x9D], cl
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b34ea1
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        xor ebx, ebx
        lea ecx, ds:[eax+0xB0]
        push ebx
        push ecx
        add eax, 0x2C
        push eax
        call dword ptr ds : [public_6b6b0a0]
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+0xB4]
        push edx
        add esi, 0xB0
        add eax, 0x2C
        push esi
        push eax
        call dword ptr ds : [public_6b6b09c]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x50], bl
        mov byte ptr ss : [esp+0x51], bl
        mov byte ptr ss : [esp+0x52], bl
        mov byte ptr ss : [esp+0x53], bl
        mov byte ptr ss : [esp+0x54], bl
        mov byte ptr ss : [esp+0x55], bl
        mov byte ptr ss : [esp+0x56], bl
        mov byte ptr ss : [esp+0x57], bl
        mov byte ptr ss : [esp+0x58], bl
        mov byte ptr ss : [esp+0x59], bl
        mov byte ptr ss : [esp+0x5A], bl
        mov byte ptr ss : [esp+0x5B], bl
        mov byte ptr ss : [esp+0x5C], bl
        mov byte ptr ss : [esp+0x5D], bl
        mov dword ptr ss : [esp+0x68], ebx
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
        lea eax, ss:[esp+0x74]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        add eax, 0x2C
        push eax
        mov byte ptr ss : [esp+0x78], 1
        mov dword ptr ss : [esp+0x84], ebx
        call dword ptr ds : [public_6b6b098]
        mov esi, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 0x28
        cmp esi, ebx
        lea ebp, ds:[ecx+0xA0]
        mov edi, 6
        je public_6b34df5
        public_6b34dc6 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b34de2
        xor edx, edx
        cmp eax, 0x4E
        sete dl
        dec edx
        and edx, 0xFFFFFFF0
        add edx, 0x17
        mov eax, edx
        jmp public_6b34ded
        public_6b34de2 : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b34ded : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        cmp esi, ebx
        jne public_6b34dc6
        public_6b34df5 : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6b6a134
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        push ecx
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6b6b090]
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, ebx
        mov edx, dword ptr ss : [esp+0x10]
        lea ebp, ds:[edx+0xA8]
        mov edi, 6
        je public_6b34e5f
        lea ebx, ds:[ebx]
        public_6b34e30 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b34e4c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b34e57
        public_6b34e4c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b34e57 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        cmp esi, ebx
        jne public_6b34e30
        public_6b34e5f : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6b6a134
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6b6b090]
        mov esi, dword ptr ds : [public_6b6b094]
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x50], bl
        call esi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call esi
        mov edi, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        public_6b34ea1 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x24]
        pop esi
        public_6b34eb3 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6b34c50)
    }
}

#undef public_6b34dc6
#undef public_6b34de2
#undef public_6b34ded
#undef public_6b34df5
#undef public_6b34e30
#undef public_6b34e4c
#undef public_6b34e57
#undef public_6b34e5f
#undef public_6b34ea1
#undef public_6b34eb3
